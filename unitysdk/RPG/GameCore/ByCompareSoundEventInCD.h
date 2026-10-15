#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareSoundEventInCD; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D65B0)
#define RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D6770)
#define RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D6740)
#define RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D65C0)
#define RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D6580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSoundEventInCD_TypeDefinitionIndex = 20615;

	class ByCompareSoundEventInCD : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* SoundEventName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSoundEventInCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSoundEventInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSoundEventInCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSoundEventInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSoundEventInCD* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSoundEventInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSoundEventInCD* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSoundEventInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOUNDEVENTINCD_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
