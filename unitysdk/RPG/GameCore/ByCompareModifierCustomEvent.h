#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareModifierCustomEvent; }
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BF1B0)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4BF390)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4BF360)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4BF1C0)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4BF180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareModifierCustomEvent_TypeDefinitionIndex = 23048;

	class ByCompareModifierCustomEvent : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::JsonEnum* EventType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCUSTOMEVENT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
