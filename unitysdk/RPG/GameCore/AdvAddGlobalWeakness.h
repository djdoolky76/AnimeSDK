#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvAddGlobalWeakness; }

#define RPG_GAMECORE_ADVADDGLOBALWEAKNESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38E160)
#define RPG_GAMECORE_ADVADDGLOBALWEAKNESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38E170)
#define RPG_GAMECORE_ADVADDGLOBALWEAKNESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38E130)

namespace RPG::GameCore
{
	class AdvAddGlobalWeakness : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AttackDamageType Weakness; // 0x18
		::System::UInt32 MinRank; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDGLOBALWEAKNESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvAddGlobalWeakness* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvAddGlobalWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDGLOBALWEAKNESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvAddGlobalWeakness* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvAddGlobalWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDGLOBALWEAKNESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
