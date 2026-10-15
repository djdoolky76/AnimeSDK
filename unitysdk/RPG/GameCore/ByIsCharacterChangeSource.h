#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsCharacterChangeSource; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DD070)
#define RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4DD290)
#define RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4DD250)
#define RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4DD080)
#define RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4DD030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCharacterChangeSource_TypeDefinitionIndex = 23614;

	class ByIsCharacterChangeSource : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsCharacterChangeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsCharacterChangeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
