#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDLOGICTYPEGETTER_CCTOR_OFFSET UNITYSDK_OFFSET(0xC8D64E0)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDLOGICTYPEGETTER_GET_1_OFFSET UNITYSDK_OFFSET(0xC8D4C80)

namespace RPG::Client
{
	class CachedAssetLoader_CachedLogicTypeGetter : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::Client::CachedAssetLogicType>** StaticGet__CachedAssetLogicTypeMapping()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::Client::CachedAssetLogicType>**)UnitySDK::FromName("RPG.Client", "CachedLogicTypeGetter")->GetStaticField(0x60410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDLOGICTYPEGETTER_CCTOR_OFFSET))();
		}

		static ::RPG::Client::CachedAssetLogicType Get_1(::System::Type* a1)
		{
			return ((::RPG::Client::CachedAssetLogicType(*)(::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDLOGICTYPEGETTER_GET_1_OFFSET))(a1);
		}

	};
}
