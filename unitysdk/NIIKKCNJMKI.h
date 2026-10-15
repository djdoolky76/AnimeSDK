#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPGKMODCGOD.h"

#define NIIKKCNJMKI_CTOR_OFFSET UNITYSDK_OFFSET(0xBBECD80)
#define NIIKKCNJMKI_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xBBECD10)
#define NIIKKCNJMKI_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xBBECD20)

	class NIIKKCNJMKI : public ::HPGKMODCGOD
	{
	public:
		::System::Single ENMIPOPKOOL; // 0x18
		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NIIKKCNJMKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NIIKKCNJMKI_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NIIKKCNJMKI_SET_VALUE_OFFSET))(this, a1);
		}

	};
