#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPortalConfig; }
namespace RPG::GameCore { class FiveDimPortalTarget; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FIVEDIMPORTALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D2B40)
#define RPG_GAMECORE_FIVEDIMPORTALCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D2B50)
#define RPG_GAMECORE_FIVEDIMPORTALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D2B10)

namespace RPG::GameCore
{
	class FiveDimPortalConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsPortal; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* LockValues; // 0x20
		::Il2CppArray<::System::Int16>* UnlockValues; // 0x28
		::RPG::GameCore::FiveDimTriggerShape* TriggerShape; // 0x30
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x38
		::System::Boolean HasCustomTeleport; // 0x40
		::System::Byte _padding1[0x7];
		::RPG::GameCore::FiveDimPortalTarget* Target; // 0x48
		::System::Boolean SyncLoadTargetLevel; // 0x50
		::System::Boolean NoCameraBlend; // 0x51
		::System::Boolean TriggerFiveDimLoadingView; // 0x52
		::System::Boolean AvatarFacingLeft; // 0x53
		::System::Boolean SendEventOnInit; // 0x54
		::System::Byte _padding2[0x3];
		::RPG::GameCore::LittleGameEvent* LockEvent; // 0x58
		::RPG::GameCore::LittleGameEvent* UnlockEvent; // 0x60
		::RPG::GameCore::LittleGameEvent* PortalInteractEvent; // 0x68
		::RPG::GameCore::LittleGameEvent* StartTeleportEvent; // 0x70
		::RPG::GameCore::LittleGameEvent* TeleportFinishEvent; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPORTALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPortalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPortalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPORTALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPortalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPortalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPORTALCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
