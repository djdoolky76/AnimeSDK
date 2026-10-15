#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByGridFightCharacterIsPreset; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F4120)
#define RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F4300)
#define RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F42D0)
#define RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F4130)
#define RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F40F0)

namespace RPG::GameCore
{
	class ByGridFightCharacterIsPreset : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* CharacterID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByGridFightCharacterIsPreset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByGridFightCharacterIsPreset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCharacterIsPreset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCharacterIsPreset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCHARACTERISPRESET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
