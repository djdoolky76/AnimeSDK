#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::GameCore
{
	struct alignas(8) EvolveBuildGearManager_EvolveBuildPauseConfig
	{
		::System::String* PausePanelPath; // 0x10
		::System::String* PauseBinderPath; // 0x18
		::System::UInt32 PausePrefabIndex; // 0x20
	};
}
