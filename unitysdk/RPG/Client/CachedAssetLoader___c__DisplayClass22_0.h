#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }

#define RPG_CLIENT_CACHEDASSETLOADER___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD6B430)
#define RPG_CLIENT_CACHEDASSETLOADER___C__DISPLAYCLASS22_0__ASYNCLOADASSET_B__0_OFFSET UNITYSDK_OFFSET(0x1BD6D540)

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLoader___c__DisplayClass22_0_TypeDefinitionIndex = 60715;

	class CachedAssetLoader___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::String* assetName; // 0x10
		::RPG::Client::OnAssetOperationDelegate* handle; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AsyncLoadAsset_b__0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER___C__DISPLAYCLASS22_0__ASYNCLOADASSET_B__0_OFFSET))(this, a1);
		}

	};
}
