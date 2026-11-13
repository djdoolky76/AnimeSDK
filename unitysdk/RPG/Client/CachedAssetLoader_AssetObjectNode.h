#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CachedAssetLoader_AssetObjectNode; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_CACHEDASSETLOADER_ASSETOBJECTNODE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BD6DB40)
#define RPG_CLIENT_CACHEDASSETLOADER_ASSETOBJECTNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD6DBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLoader_AssetObjectNode_TypeDefinitionIndex = 60710;

	class CachedAssetLoader_AssetObjectNode : public ::System::Object
	{
	public:
		::UnityEngine::Object* AssetObject; // 0x10
		::RPG::Client::CachedAssetLoader_AssetObjectNode* NextNode; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASSETOBJECTNODE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASSETOBJECTNODE_CLEAR_OFFSET))(this);
		}

	};
}
