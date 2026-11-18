#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/StatusEffectType.h"
#include "unitysdk/System/Object.h"

#define KIHFMFLBPHM_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x15160620)
#define KIHFMFLBPHM__CTOR_OFFSET UNITYSDK_OFFSET(0x15160690)

inline static constexpr unsigned int KIHFMFLBPHM_TypeDefinitionIndex = 89562;

class KIHFMFLBPHM : public ::System::Object
{
public:
	::MoleMole::StatusEffectType NOOLOILNGPL; // 0x10
	::System::Single CJLKFOGFONE; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHFMFLBPHM__CTOR_OFFSET))(this);
	}

	::System::Boolean PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIHFMFLBPHM_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}
};
