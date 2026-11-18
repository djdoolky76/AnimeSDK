#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOMLGOPPNHP_KBHPKGBMCHG_DPLBONMPKNL_OFFSET UNITYSDK_OFFSET(0x11A2F960)
#define MOMLGOPPNHP_KBHPKGBMCHG_FLIALJABALN_OFFSET UNITYSDK_OFFSET(0x11A2F920)
#define MOMLGOPPNHP_KBHPKGBMCHG__CTOR_OFFSET UNITYSDK_OFFSET(0x11A2F910)

inline static constexpr unsigned int MOMLGOPPNHP_KBHPKGBMCHG_TypeDefinitionIndex = 50857;

class MOMLGOPPNHP_KBHPKGBMCHG : public ::System::Object
{
public:
	::MoleMole::EntityHandle HPADNAEINPK; // 0x10
	::System::Action* EJKHBFHKEDI; // 0x20
	::System::Int32 CLACNEMIOBA; // 0x28
	::System::Int32 EIOKJOFMCFH; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_KBHPKGBMCHG__CTOR_OFFSET))(this);
	}

	::System::Void FLIALJABALN(::System::UInt32 JCPNDFAEOLI, ::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_KBHPKGBMCHG_FLIALJABALN_OFFSET))(this, JCPNDFAEOLI, EBFCACIEKBC);
	}

	::System::Void DPLBONMPKNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_KBHPKGBMCHG_DPLBONMPKNL_OFFSET))(this);
	}
};
