#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvEnterBattleSelectTargetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DMNLJJNBEJO;
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureDyingParam; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define DMNLJJNBEJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD48E30)
#define DMNLJJNBEJO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD48E70)
#define DMNLJJNBEJO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD48DD0)

	class DMNLJJNBEJO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureHitConfig* MBOFOKEJDDE; // 0x18
		::RPG::GameCore::TargetEvaluator* EDOLEIBGOGD; // 0x20
		::RPG::GameCore::AdventureDyingParam* GHNAMCDMMMO; // 0x28
		::System::String* GMOLMMHPPDC; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* GKOIKCBJICD; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* KAJEPIBEDOG; // 0x40
		::RPG::GameCore::AdvEnterBattleSelectTargetType KFPJKJIDCGD; // 0x48
		::System::Boolean ICCGDNPNIFO; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNLJJNBEJO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DMNLJJNBEJO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMNLJJNBEJO*))((::PBYTE)hIl2Cpp + DMNLJJNBEJO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DMNLJJNBEJO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMNLJJNBEJO*))((::PBYTE)hIl2Cpp + DMNLJJNBEJO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
