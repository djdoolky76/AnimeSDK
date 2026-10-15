#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimAnimatorListenType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimAnimatorListenConfig; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMANIMATORLISTENCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AEAF0)
#define RPG_GAMECORE_FIVEDIMANIMATORLISTENCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AE880)

namespace RPG::GameCore
{
	class FiveDimAnimatorListenConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 LayerIndex; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* StateName; // 0x18
		::System::Int32 StateHash; // 0x20
		::RPG::GameCore::FiveDimAnimatorListenType ListenType; // 0x24
		::System::Single ListenRatio; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::GameCore::LittleGameEvent* Event; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMANIMATORLISTENCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAnimatorListenConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAnimatorListenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMANIMATORLISTENCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
