#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByDistance; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EF610)
#define RPG_GAMECORE_BYDISTANCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4EF930)
#define RPG_GAMECORE_BYDISTANCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4EF8F0)
#define RPG_GAMECORE_BYDISTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4EF620)
#define RPG_GAMECORE_BYDISTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4EF5D0)

namespace RPG::GameCore
{
	class ByDistance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x20
		::RPG::GameCore::TargetEvaluator* To; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38
		::System::Boolean IgnoreRadius; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDISTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDISTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDISTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDISTANCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDISTANCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
