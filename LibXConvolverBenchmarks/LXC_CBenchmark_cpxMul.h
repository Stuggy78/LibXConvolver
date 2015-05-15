#pragma once

/*	
 *		Copyright (C) 2014 Achim Turan, Achim.Turan@o2online.de
 *		https://github.com/AchimTuran/LibXConvolver
 *
 *	This file is part of LibXConvolver
 *
 *	LibXConvolver is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	LibXConvolver is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with LibXConvolver.  If not, see <http://www.gnu.org/licenses/>.
 *
 */



#include "LXC_IBenchmark.h"
#include "../LibXConvolverCore/include/LXC_CommonTypes.h"
#include "../LibXConvolverCore/include/LXC_Core_types.h"

class LXC_CBenchmark_cpxMul : public LXC_IBenchmark
{
public:
	LXC_CBenchmark_cpxMul(uint InputFrameLength, 
						  uint SampleFrequency, 
						  LXC_OPTIMIZATION_MODULE OptModule, 
						  uint MaxIterations=1);

	virtual ~LXC_CBenchmark_cpxMul();

	virtual double RunBenchmark();
protected:
private:
	uint m_InputFrameLength;
	uint m_SampleFrequency;
	uint m_MaxIterations;
	
	LXC_BUFFER					m_Buffer[3];
	LXC_OPTIMIZATION_MODULE		m_OptModule;
	LXC_BUFFER_CALLBACKS		m_BufferCallbacks;
	LXC_RINGBUFFER_CALLBACKS	m_RingbufferCallbacks;
	LXC_CALLBACKS				m_LXCCallbacks;
};
