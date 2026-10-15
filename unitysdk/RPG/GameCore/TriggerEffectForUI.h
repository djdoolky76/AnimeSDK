#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerEffectForUI; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TRIGGEREFFECTFORUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC47CD0)
#define RPG_GAMECORE_TRIGGEREFFECTFORUI_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC4D050)
#define RPG_GAMECORE_TRIGGEREFFECTFORUI_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC4CF50)
#define RPG_GAMECORE_TRIGGEREFFECTFORUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC47D20)
#define RPG_GAMECORE_TRIGGEREFFECTFORUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC4CFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectForUI_TypeDefinitionIndex = 20154;

	class TriggerEffectForUI : public ::RPG::GameCore::TriggerEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTFORUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEffectForUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEffectForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTFORUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEffectForUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEffectForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTFORUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectForUI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTFORUI_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectForUI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTFORUI_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
