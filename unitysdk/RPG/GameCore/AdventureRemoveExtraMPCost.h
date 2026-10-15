#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureRemoveExtraMPCost; }

#define RPG_GAMECORE_ADVENTUREREMOVEEXTRAMPCOST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39EF30)
#define RPG_GAMECORE_ADVENTUREREMOVEEXTRAMPCOST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39EF40)
#define RPG_GAMECORE_ADVENTUREREMOVEEXTRAMPCOST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39EF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureRemoveExtraMPCost_TypeDefinitionIndex = 21806;

	class AdventureRemoveExtraMPCost : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SkillIndex; // 0x18
		::System::UInt32 ExtraCost; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREREMOVEEXTRAMPCOST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureRemoveExtraMPCost* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureRemoveExtraMPCost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREREMOVEEXTRAMPCOST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureRemoveExtraMPCost* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureRemoveExtraMPCost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREREMOVEEXTRAMPCOST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
