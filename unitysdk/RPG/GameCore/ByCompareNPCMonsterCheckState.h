#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCMonsterCheckState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareNPCMonsterCheckState; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C37D0)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4C3AE0)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4C3AB0)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4C37E0)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4C37A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareNPCMonsterCheckState_TypeDefinitionIndex = 21581;

	class ByCompareNPCMonsterCheckState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x20
		::RPG::GameCore::DynamicFloat* GroupMonsterID; // 0x28
		::System::String* UniqueName; // 0x30
		::RPG::GameCore::NPCMonsterCheckState CheckState; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
