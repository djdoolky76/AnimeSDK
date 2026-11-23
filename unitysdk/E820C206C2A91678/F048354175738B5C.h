#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define E820C206C2A91678_F048354175738B5C_EB411732C99E3152_OFFSET UNITYSDK_OFFSET(0x40FDC60)
#define E820C206C2A91678_F048354175738B5C__CTOR_OFFSET UNITYSDK_OFFSET(0x40FDC60)

namespace E820C206C2A91678
{
	inline static constexpr unsigned int F048354175738B5C_TypeDefinitionIndex = 21217;

	struct alignas(8) F048354175738B5C
	{
		::System::String* BF74A2E81A04ADAE; // 0x10
		::System::Single FA3B6C101A4C9F56; // 0x18

		/*
		static ::System::Void EB411732C99E3152(::E820C206C2A91678::F048354175738B5C& AD8B4585AE506C73)
		{
			return ((::System::Void(*)(::E820C206C2A91678::F048354175738B5C&))((::PBYTE)hIl2Cpp + E820C206C2A91678_F048354175738B5C_EB411732C99E3152_OFFSET))(AD8B4585AE506C73);
		}
		*/

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E820C206C2A91678_F048354175738B5C__CTOR_OFFSET))(this);
		}
	};
}
