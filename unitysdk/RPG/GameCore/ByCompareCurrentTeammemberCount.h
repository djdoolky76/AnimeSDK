#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareCurrentTeammemberCount; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A59D0)
#define RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A5BD0)
#define RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A5BA0)
#define RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A59E0)
#define RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A59A0)

namespace RPG::GameCore
{
	class ByCompareCurrentTeammemberCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType EquationType; // 0x20
		::System::UInt32 TargetCount; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTTEAMMEMBERCOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
