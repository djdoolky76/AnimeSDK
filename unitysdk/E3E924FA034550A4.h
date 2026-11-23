#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA78B0257AA80CDE/B29EEC65D526A084.h"
#include "unitysdk/System/ValueType.h"

#define E3E924FA034550A4_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x3843AE0)
#define E3E924FA034550A4__CTOR_OFFSET UNITYSDK_OFFSET(0x3843C00)

inline static constexpr unsigned int E3E924FA034550A4_TypeDefinitionIndex = 17988;

struct alignas(8) E3E924FA034550A4
{
	::Il2CppArray<::System::Single>* EB211B01816ACA79; // 0x10
	::Il2CppArray<::System::Single>* B313732032753290; // 0x18
	::Il2CppArray<::System::Single>* A73B96BE7F2DEBF7; // 0x20
	::Il2CppArray<::System::Single>* F8B3D7E88E5EAF53; // 0x28
	::FA78B0257AA80CDE::B29EEC65D526A084 F774B2C0AB0DBC40; // 0x30

	::System::Void _ctor(::System::Boolean EB1CDDAF823C5CB4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E3E924FA034550A4__CTOR_OFFSET))(this, EB1CDDAF823C5CB4);
	}

	::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3E924FA034550A4_A1E97155B145443C_OFFSET))(this);
	}
};
