#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByGridFightHasSameTrait; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F5030)
#define RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F5300)
#define RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F52C0)
#define RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F5040)
#define RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F4FF0)

namespace RPG::GameCore
{
	class ByGridFightHasSameTrait : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType1; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType2; // 0x28
		::System::Boolean IncludeOtherEffect; // 0x30
		::System::Boolean IncludeInactiveTrait; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByGridFightHasSameTrait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByGridFightHasSameTrait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByGridFightHasSameTrait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByGridFightHasSameTrait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasSameTrait* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasSameTrait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasSameTrait* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasSameTrait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASSAMETRAIT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
