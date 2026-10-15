#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PPPHANEJBAC;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define PPPHANEJBAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31C570)
#define PPPHANEJBAC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D31C5B0)
#define PPPHANEJBAC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D31C510)

	class PPPHANEJBAC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* HMOBDKGBECE; // 0x18
		::RPG::GameCore::TargetEvaluator* NGIJFAEONCK; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::RPG::GameCore::DynamicFloat* KBAPBCNJHDB; // 0x30
		::RPG::GameCore::PredicateConfig* FHAAHMEJMCI; // 0x38
		::RPG::GameCore::ControlSkillType JBCBONFABOM; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPHANEJBAC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PPPHANEJBAC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PPPHANEJBAC*))((::PBYTE)hIl2Cpp + PPPHANEJBAC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PPPHANEJBAC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PPPHANEJBAC*))((::PBYTE)hIl2Cpp + PPPHANEJBAC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
