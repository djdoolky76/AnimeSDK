#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareScreenRatio; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESCREENRATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D2850)
#define RPG_GAMECORE_BYCOMPARESCREENRATIO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D2A70)
#define RPG_GAMECORE_BYCOMPARESCREENRATIO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D2A30)
#define RPG_GAMECORE_BYCOMPARESCREENRATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D2860)
#define RPG_GAMECORE_BYCOMPARESCREENRATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D2810)

namespace RPG::GameCore
{
	class ByCompareScreenRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Single ReferenceRatio; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCREENRATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareScreenRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareScreenRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCREENRATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareScreenRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareScreenRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCREENRATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScreenRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScreenRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCREENRATIO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScreenRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScreenRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCREENRATIO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
