#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleAssetPreload_AssetPreloadGroupCreateParam.h"

#define RPG_CLIENT_BATTLEASSETPRELOAD_SERVANTASSETPRELOADGROUPCREATEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xC812190)

namespace RPG::Client
{
	class BattleAssetPreload_ServantAssetPreloadGroupCreateParam : public ::RPG::Client::BattleAssetPreload_AssetPreloadGroupCreateParam
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_SERVANTASSETPRELOADGROUPCREATEPARAM_CTOR_OFFSET))(this);
		}

	};
}
