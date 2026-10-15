#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimGrenadierBakedMoveConfig; }

#define RPG_GAMECORE_FIVEDIMGRENADIERBAKEDMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6952C0)
#define RPG_GAMECORE_FIVEDIMGRENADIERBAKEDMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6952D0)
#define RPG_GAMECORE_FIVEDIMGRENADIERBAKEDMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D695290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGrenadierBakedMoveConfig_TypeDefinitionIndex = 16685;

	class FiveDimGrenadierBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::System::Single LaunchSpeed; // 0x30
		::System::Single AttackDistance; // 0x34
		::RPG::MVector3 CreationOffset; // 0x38
		::System::Single ParabolaHeightOffset; // 0x44
		::System::Single AttackDistancePerpendicular; // 0x48
		::System::Single TraceOffset; // 0x4C
		::System::Single TraceAcceleration; // 0x50
		::System::Single TraceDeceleration; // 0x54
		::System::Single TraceDistanceThreshold; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERBAKEDMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGrenadierBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGrenadierBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERBAKEDMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGrenadierBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGrenadierBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERBAKEDMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
