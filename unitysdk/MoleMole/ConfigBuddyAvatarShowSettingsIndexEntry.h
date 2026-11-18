#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBuddyAvatarShowSettingsIndexEntry_TypeDefinitionIndex = 60865;

	struct alignas(4) ConfigBuddyAvatarShowSettingsIndexEntry
	{
		::System::Int32 BuddyID; // 0x10
		::System::Byte _padding0[0x4];
		::Foundation::AssetPath AssetPath; // 0x18
		::System::Boolean HasMainPageInfo; // 0x28
		::System::Byte _padding1[0x7];
		::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo MainPageInfo; // 0x30
	};
}
