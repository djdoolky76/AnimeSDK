#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class ReleaseAssetDel; }
namespace RPG::CustomRP { class SyncLoadAssetDel; }

inline static constexpr unsigned int GOBCDIIJIIK___O_TypeDefinitionIndex = 70180;

	class GOBCDIIJIIK___O : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::SyncLoadAssetDel** StaticGet__0___LoadFun()
		{
			return (::RPG::CustomRP::SyncLoadAssetDel**)UnitySDK::FromName("", "<>O")->GetStaticField(0x6B970);
		}

		static ::RPG::CustomRP::ReleaseAssetDel** StaticGet__1___ReleaseAsset()
		{
			return (::RPG::CustomRP::ReleaseAssetDel**)UnitySDK::FromName("", "<>O")->GetStaticField(0x6B978);
		}

	};
