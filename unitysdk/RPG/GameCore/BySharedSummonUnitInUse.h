#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BySharedSummonUnitInUse; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5358A0)
#define RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D535A60)
#define RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D535A30)
#define RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5358B0)
#define RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D535870)

namespace RPG::GameCore
{
	class BySharedSummonUnitInUse : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BySharedSummonUnitInUse* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BySharedSummonUnitInUse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BySharedSummonUnitInUse* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BySharedSummonUnitInUse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySharedSummonUnitInUse* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySharedSummonUnitInUse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySharedSummonUnitInUse* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySharedSummonUnitInUse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHAREDSUMMONUNITINUSE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
