#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEvilSmileMoveConfig; }
namespace RPG::GameCore { class FiveDimEvilSmileStateConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BC8F0)
#define RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BC900)
#define RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BC8B0)

namespace RPG::GameCore
{
	class FiveDimEvilSmileMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::RPG::MVector3 ColliderCenter; // 0x40
		::System::Single AppearDistance; // 0x4C
		::System::String* AnimParamName; // 0x50
		::RPG::GameCore::HoyoTagContainer* TriggerTargetTag; // 0x58
		::System::String* TriggerEventName; // 0x60
		::System::String* OnHitPlayerEventName; // 0x68
		::System::Single TraceDistance; // 0x70
		::RPG::MVector3 TraceOffset; // 0x74
		::System::Single MoveTeleportDistance; // 0x80
		::System::Boolean IsIgnoreTeleportOnTrace; // 0x84
		::System::Boolean IsAdvanceStateConfig; // 0x85
		::System::Byte _padding0[0x2];
		::Il2CppArray<::RPG::GameCore::FiveDimEvilSmileStateConfig*>* StateConfigList; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEvilSmileMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEvilSmileMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEvilSmileMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEvilSmileMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
