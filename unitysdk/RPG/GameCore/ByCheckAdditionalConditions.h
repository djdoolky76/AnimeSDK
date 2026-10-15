#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckAdditionalConditions; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D45DA80)
#define RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D45DC60)
#define RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D45DC30)
#define RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D45DA90)
#define RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D45DA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckAdditionalConditions_TypeDefinitionIndex = 23436;

	class ByCheckAdditionalConditions : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean CheckForWin; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckAdditionalConditions* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckAdditionalConditions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckAdditionalConditions* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckAdditionalConditions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdditionalConditions* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdditionalConditions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdditionalConditions* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdditionalConditions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADDITIONALCONDITIONS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
