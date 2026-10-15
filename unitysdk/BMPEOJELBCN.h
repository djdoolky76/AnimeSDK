#pragma once
#include "unitysdk/unitysdk.h"

#define BMPEOJELBCN_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC08A0)
#define BMPEOJELBCN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xBDC0820)
#define BMPEOJELBCN_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xBDC0830)

inline static constexpr unsigned int BMPEOJELBCN_TypeDefinitionIndex = 74020;

	class BMPEOJELBCN
	{
	public:
		::System::Single ENMIPOPKOOL; // 0x18
		::System::Single PJKFLONMKED; // 0x1C
		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BMPEOJELBCN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPEOJELBCN_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMPEOJELBCN_SET_VALUE_OFFSET))(this, a1);
		}

	};
