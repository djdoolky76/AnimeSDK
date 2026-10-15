#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TriggerEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerSDFTextEffect; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2B400)
#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC2C870)
#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC2C800)
#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2B450)
#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2B390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerSDFTextEffect_TypeDefinitionIndex = 23635;

	class TriggerSDFTextEffect : public ::RPG::GameCore::TriggerEffect
	{
	public:
		::RPG::Client::TextID TextContent; // 0x158
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerSDFTextEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerSDFTextEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerSDFTextEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerSDFTextEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerSDFTextEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerSDFTextEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerSDFTextEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerSDFTextEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
