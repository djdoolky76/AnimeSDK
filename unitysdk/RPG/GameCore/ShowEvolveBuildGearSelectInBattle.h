#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ShowEvolveBuildGearSelectInBattle; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAE300)
#define RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAE310)
#define RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAE2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEvolveBuildGearSelectInBattle_TypeDefinitionIndex = 22512;

	class ShowEvolveBuildGearSelectInBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* SpecifiedGearIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelect; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEvolveBuildGearSelectInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEvolveBuildGearSelectInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEvolveBuildGearSelectInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEvolveBuildGearSelectInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDGEARSELECTINBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
