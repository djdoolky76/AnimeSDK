#pragma once
#include "unitysdk/unitysdk.h"

#define SGF_SEVENT_STRINGPROCESSORCHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA88F00)

namespace SGF::SEvent
{
	inline static constexpr unsigned int StringProcessorChain_TypeDefinitionIndex = 8416;

	class StringProcessorChain
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_STRINGPROCESSORCHAIN__CTOR_OFFSET))(this);
		}
	};
}
