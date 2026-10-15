#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CorrectionPlayerTeleportPosMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CorrectionPlayerTeleportPos; }
namespace RPG::GameCore { class SwitchCharacterAnchor; }

#define RPG_GAMECORE_CORRECTIONPLAYERTELEPORTPOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E00C0)
#define RPG_GAMECORE_CORRECTIONPLAYERTELEPORTPOS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E00D0)
#define RPG_GAMECORE_CORRECTIONPLAYERTELEPORTPOS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E0090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CorrectionPlayerTeleportPos_TypeDefinitionIndex = 20505;

	class CorrectionPlayerTeleportPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CorrectionPlayerTeleportPosMode Mode; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::SwitchCharacterAnchor* AnchorConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CORRECTIONPLAYERTELEPORTPOS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CorrectionPlayerTeleportPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CorrectionPlayerTeleportPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CORRECTIONPLAYERTELEPORTPOS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CorrectionPlayerTeleportPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CorrectionPlayerTeleportPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CORRECTIONPLAYERTELEPORTPOS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
