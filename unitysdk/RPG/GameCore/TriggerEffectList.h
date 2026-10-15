#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerEffectList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TRIGGEREFFECTLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC50C10)
#define RPG_GAMECORE_TRIGGEREFFECTLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC511F0)
#define RPG_GAMECORE_TRIGGEREFFECTLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC50F10)
#define RPG_GAMECORE_TRIGGEREFFECTLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC50C20)
#define RPG_GAMECORE_TRIGGEREFFECTLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC50AC0)

namespace RPG::GameCore
{
	class TriggerEffectList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::EffectConfig*>* EffectList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEffectList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEffectList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
