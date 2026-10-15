#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsInAnimZone; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINANIMZONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5169D0)
#define RPG_GAMECORE_BYISINANIMZONE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D516BE0)
#define RPG_GAMECORE_BYISINANIMZONE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D516BB0)
#define RPG_GAMECORE_BYISINANIMZONE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5169E0)
#define RPG_GAMECORE_BYISINANIMZONE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5169A0)

namespace RPG::GameCore
{
	class ByIsInAnimZone : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AnimZoneType AnimZone; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINANIMZONE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInAnimZone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINANIMZONE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInAnimZone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINANIMZONE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInAnimZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINANIMZONE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInAnimZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINANIMZONE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
