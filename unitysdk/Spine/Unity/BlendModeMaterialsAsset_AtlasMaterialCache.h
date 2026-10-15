#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Spine { class AtlasPage; }
namespace Spine { class AtlasRegion; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE_CLONEATLASREGIONWITHMATERIAL_OFFSET UNITYSDK_OFFSET(0x1ED00DD0)
#define SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED00D40)
#define SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ED00E30)
#define SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE_GETATLASPAGEWITHMATERIAL_OFFSET UNITYSDK_OFFSET(0x1ED00EB0)

namespace Spine::Unity
{
	class BlendModeMaterialsAsset_AtlasMaterialCache : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair*, ::Spine::AtlasPage*>* cache; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE_CTOR_OFFSET))(this);
		}

		::Spine::AtlasRegion* CloneAtlasRegionWithMaterial(::Spine::AtlasRegion* a1, ::UnityEngine::Material* a2)
		{
			return ((::Spine::AtlasRegion*(*)(::PVOID, ::Spine::AtlasRegion*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE_CLONEATLASREGIONWITHMATERIAL_OFFSET))(this, a1, a2);
		}

		::Spine::AtlasPage* GetAtlasPageWithMaterial(::Spine::AtlasPage* a1, ::UnityEngine::Material* a2)
		{
			return ((::Spine::AtlasPage*(*)(::PVOID, ::Spine::AtlasPage*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE_GETATLASPAGEWITHMATERIAL_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALSASSET_ATLASMATERIALCACHE_DISPOSE_OFFSET))(this);
		}

	};
}
