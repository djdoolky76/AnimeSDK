#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelPortalActionConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F1120)
#define RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F1130)
#define RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F1030)

namespace RPG::GameCore
{
	class FourRotateVoxelPortalActionConfig : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Int32 TargetPortalID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelPortalActionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelPortalActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelPortalActionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelPortalActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
