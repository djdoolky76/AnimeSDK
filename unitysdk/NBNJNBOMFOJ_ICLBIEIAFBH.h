#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AttackType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NBNJNBOMFOJ_ICLBIEIAFBH_OIFGFGBIFIE_OFFSET UNITYSDK_OFFSET(0x67FE50)

inline static constexpr unsigned int NBNJNBOMFOJ_ICLBIEIAFBH_TypeDefinitionIndex = 89126;

struct alignas(8) NBNJNBOMFOJ_ICLBIEIAFBH
{
	::MoleMole::AttackType ONHKNNMFIBG; // 0x10
	::MoleMole::AttackType ICAMDLJLBII; // 0x14
	::System::Boolean GDDLKMCEOKK; // 0x18
	::System::Boolean LPDAGHLAGFF; // 0x19
	::System::Byte _padding0[0x2];
	::System::Int32 JHICOKKPPNA; // 0x1C
	::System::Boolean BDNCONFPACE; // 0x20
	::System::Byte _padding1[0x7];
	::Il2CppArray<::System::String*>* BPDGOGDKMHD; // 0x28
	::System::Boolean HLJEHCMAJMD; // 0x30

	::System::Boolean OIFGFGBIFIE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJNBOMFOJ_ICLBIEIAFBH_OIFGFGBIFIE_OFFSET))(this);
	}
};
