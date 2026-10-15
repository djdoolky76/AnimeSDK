#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureExtraMPCost; }

#define RPG_GAMECORE_ADVENTUREEXTRAMPCOST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C79B0)
#define RPG_GAMECORE_ADVENTUREEXTRAMPCOST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3C79C0)
#define RPG_GAMECORE_ADVENTUREEXTRAMPCOST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C7980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureExtraMPCost_TypeDefinitionIndex = 21805;

	class AdventureExtraMPCost : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SkillIndex; // 0x18
		::System::UInt32 ExtraCost; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREEXTRAMPCOST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureExtraMPCost* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureExtraMPCost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREEXTRAMPCOST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureExtraMPCost* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureExtraMPCost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREEXTRAMPCOST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
