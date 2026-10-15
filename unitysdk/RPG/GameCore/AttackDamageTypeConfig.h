#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackDamageTypeSource.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ATTACKDAMAGETYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D402B30)
#define RPG_GAMECORE_ATTACKDAMAGETYPECONFIG_ICOKOCPAMND_OFFSET UNITYSDK_OFFSET(0x1D402B40)
#define RPG_GAMECORE_ATTACKDAMAGETYPECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D402E60)
#define RPG_GAMECORE_ATTACKDAMAGETYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D402410)

namespace RPG::GameCore
{
	class AttackDamageTypeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AttackDamageTypeSource SourceType; // 0x10
		::RPG::GameCore::AttackDamageType DamageType; // 0x14
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDAMAGETYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttackDamageTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttackDamageTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDAMAGETYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void ICOKOCPAMND(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AttackDamageTypeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AttackDamageTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDAMAGETYPECONFIG_ICOKOCPAMND_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AttackDamageTypeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AttackDamageTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACKDAMAGETYPECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
