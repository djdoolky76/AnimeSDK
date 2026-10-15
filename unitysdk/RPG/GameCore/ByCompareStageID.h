#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareStageID; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESTAGEID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D7B60)
#define RPG_GAMECORE_BYCOMPARESTAGEID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D7D90)
#define RPG_GAMECORE_BYCOMPARESTAGEID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D7D60)
#define RPG_GAMECORE_BYCOMPARESTAGEID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D7B70)
#define RPG_GAMECORE_BYCOMPARESTAGEID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D7B30)

namespace RPG::GameCore
{
	class ByCompareStageID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* StageID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareStageID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareStageID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareStageID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareStageID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
