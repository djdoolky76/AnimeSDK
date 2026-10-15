#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareTargetNatureID; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETARGETNATUREID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DF8F0)
#define RPG_GAMECORE_BYCOMPARETARGETNATUREID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4DFAE0)
#define RPG_GAMECORE_BYCOMPARETARGETNATUREID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4DFAB0)
#define RPG_GAMECORE_BYCOMPARETARGETNATUREID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4DF900)
#define RPG_GAMECORE_BYCOMPARETARGETNATUREID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4DF8C0)

namespace RPG::GameCore
{
	class ByCompareTargetNatureID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 TargetNatureID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETNATUREID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTargetNatureID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTargetNatureID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETNATUREID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTargetNatureID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTargetNatureID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETNATUREID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetNatureID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetNatureID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETNATUREID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetNatureID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetNatureID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETNATUREID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
