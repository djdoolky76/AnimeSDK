#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuddyBehaviourType.h"
#include "unitysdk/NMICPPGOBJH.h"
#include "unitysdk/System/Object.h"

class JPKHEMNFNLK;
namespace Nap::NapECS { class EcsEntity; }

#define GLPBCHDKIAD_JHHNKBNOPBD_BJLMFIDOJAG_OFFSET UNITYSDK_OFFSET(0x10FE9B50)
#define GLPBCHDKIAD_JHHNKBNOPBD_LBIPNMNOIKA_OFFSET UNITYSDK_OFFSET(0x10FE93F0)
#define GLPBCHDKIAD_JHHNKBNOPBD__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE93E0)

inline static constexpr unsigned int GLPBCHDKIAD_JHHNKBNOPBD_TypeDefinitionIndex = 91796;

class GLPBCHDKIAD_JHHNKBNOPBD : public ::System::Object
{
public:
	::JPKHEMNFNLK* OPFBJFIMPAD; // 0x10
	::Nap::NapECS::EcsEntity* DBIOAKNMBDM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_JHHNKBNOPBD__CTOR_OFFSET))(this);
	}

	::System::Void LBIPNMNOIKA(::NMICPPGOBJH DNNJCFLLECI, ::System::Boolean ACEFMHAALEI)
	{
		return ((::System::Void(*)(::PVOID, ::NMICPPGOBJH, ::System::Boolean))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_JHHNKBNOPBD_LBIPNMNOIKA_OFFSET))(this, DNNJCFLLECI, ACEFMHAALEI);
	}

	::System::Void BJLMFIDOJAG(::NMICPPGOBJH DNNJCFLLECI, ::MoleMole::Config::BuddyBehaviourType JDBLLEMNHLK)
	{
		return ((::System::Void(*)(::PVOID, ::NMICPPGOBJH, ::MoleMole::Config::BuddyBehaviourType))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_JHHNKBNOPBD_BJLMFIDOJAG_OFFSET))(this, DNNJCFLLECI, JDBLLEMNHLK);
	}
};
