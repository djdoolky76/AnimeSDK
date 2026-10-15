#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleAssetPreload_AssetPreloadGroupCreateParam.h"

#define RPG_CLIENT_BATTLEASSETPRELOAD_MONSTERASSETPRELOADGROUPCREATEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xC80DCC0)

namespace RPG::Client
{
	class BattleAssetPreload_MonsterAssetPreloadGroupCreateParam : public ::RPG::Client::BattleAssetPreload_AssetPreloadGroupCreateParam
	{
	public:
		::System::Boolean IsSummonMonster; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_MONSTERASSETPRELOADGROUPCREATEPARAM_CTOR_OFFSET))(this);
		}

	};
}
