#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	template <typename T>
	class CachedAssetLoader_CachedLogicTypeGetter_1 : public ::System::Object
	{
	public:
		static ::RPG::Client::CachedAssetLogicType* StaticGet_Default()
		{
			return (::RPG::Client::CachedAssetLogicType*)UnitySDK::FromName("RPG.Client", "CachedLogicTypeGetter`1")->GetStaticField(0x0);
		}

	};
}
