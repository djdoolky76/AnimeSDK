#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleAssetPreload_AssetPreloadGroupCreateParam.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_AVATARASSETPRELOADGROUPCREATEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xC805FF0)

namespace RPG::Client
{
	class BattleAssetPreload_AvatarAssetPreloadGroupCreateParam : public ::RPG::Client::BattleAssetPreload_AssetPreloadGroupCreateParam
	{
	public:
		::System::String* OverrideModelPath; // 0x10
		::RPG::AvatarSystem::IAvatar* AvatarData; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_AVATARASSETPRELOADGROUPCREATEPARAM_CTOR_OFFSET))(this);
		}

	};
}
