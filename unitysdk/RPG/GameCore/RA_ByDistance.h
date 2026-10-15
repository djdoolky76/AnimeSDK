#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RA_ByDistance; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RA_BYDISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9646E0)
#define RPG_GAMECORE_RA_BYDISTANCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D9649A0)
#define RPG_GAMECORE_RA_BYDISTANCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D964970)
#define RPG_GAMECORE_RA_BYDISTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9646F0)
#define RPG_GAMECORE_RA_BYDISTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9646B0)

namespace RPG::GameCore
{
	class RA_ByDistance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseInstigator; // 0x20
		::System::Boolean UseStimulusPos; // 0x21
		::System::Byte _padding0[0x2];
		::RPG::GameCore::CompareType CompareType; // 0x24
		::System::Single CompareValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYDISTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_ByDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYDISTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_ByDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYDISTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYDISTANCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYDISTANCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
