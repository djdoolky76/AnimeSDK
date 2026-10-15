#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class KFCMGNCLHMD;
namespace RPG::Client::Prop { class TeleportGatePuzzleBoard; }
namespace RPG::GameCore { class PropComponent; }

#define RPG_CLIENT_PROP_TELEPORTGATESWITCH_CTOR_OFFSET UNITYSDK_OFFSET(0xDDC7AA0)
#define RPG_CLIENT_PROP_TELEPORTGATESWITCH_INITSWITCH_OFFSET UNITYSDK_OFFSET(0xDDC77C0)
#define RPG_CLIENT_PROP_TELEPORTGATESWITCH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDDC79D0)
#define RPG_CLIENT_PROP_TELEPORTGATESWITCH_ONUSESWITCH_OFFSET UNITYSDK_OFFSET(0xDDC7A60)

namespace RPG::Client::Prop
{
	class TeleportGateSwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 LFPJNINEGHM; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::Prop::TeleportGatePuzzleBoard* CFKHNPGEAJA; // 0x20
		::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x28
		::KFCMGNCLHMD* BCALOKFAJFH; // 0x30
		// static const ::System::String* KDJFACFCOIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATESWITCH_CTOR_OFFSET))(this);
		}

		::System::Void InitSwitch(::RPG::Client::Prop::TeleportGatePuzzleBoard* a1, ::RPG::GameCore::PropComponent* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::TeleportGatePuzzleBoard*, ::RPG::GameCore::PropComponent*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATESWITCH_INITSWITCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATESWITCH_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUseSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATESWITCH_ONUSESWITCH_OFFSET))(this);
		}

	};
}
