#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerEffectList.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerEffectListForUI; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC234E0)
#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC23D30)
#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC23CD0)
#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC234F0)
#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC23D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectListForUI_TypeDefinitionIndex = 22891;

	class TriggerEffectListForUI : public ::RPG::GameCore::TriggerEffectList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEffectListForUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEffectListForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEffectListForUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEffectListForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectListForUI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectListForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectListForUI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectListForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
