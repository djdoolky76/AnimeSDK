#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelShopGuideDragUpgrade; }

#define RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AA150)
#define RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AA160)
#define RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AA120)

namespace RPG::GameCore
{
	class ChimeraDuelShopGuideDragUpgrade : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enabled; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 ChimeraID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPGUIDEDRAGUPGRADE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
