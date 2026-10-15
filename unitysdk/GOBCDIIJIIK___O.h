#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class ReleaseAssetDel; }
namespace RPG::CustomRP { class SyncLoadAssetDel; }

	class GOBCDIIJIIK___O : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::ReleaseAssetDel** StaticGet__1___ReleaseAsset()
		{
			return (::RPG::CustomRP::ReleaseAssetDel**)UnitySDK::FromName("", "<>O")->GetStaticField(0x6CB90);
		}

		static ::RPG::CustomRP::SyncLoadAssetDel** StaticGet__0___LoadFun()
		{
			return (::RPG::CustomRP::SyncLoadAssetDel**)UnitySDK::FromName("", "<>O")->GetStaticField(0x6CB98);
		}

	};
