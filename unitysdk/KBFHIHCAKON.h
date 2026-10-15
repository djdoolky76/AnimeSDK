#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPGKMODCGOD.h"

#define KBFHIHCAKON_CTOR_OFFSET UNITYSDK_OFFSET(0xB2F69A0)
#define KBFHIHCAKON_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB2F6920)
#define KBFHIHCAKON_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xB2F6930)

inline static constexpr unsigned int KBFHIHCAKON_TypeDefinitionIndex = 74020;

	class KBFHIHCAKON : public ::HPGKMODCGOD
	{
	public:
		::System::Single ENMIPOPKOOL; // 0x18
		::System::Single PJKFLONMKED; // 0x1C
		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KBFHIHCAKON_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFHIHCAKON_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBFHIHCAKON_SET_VALUE_OFFSET))(this, a1);
		}

	};
