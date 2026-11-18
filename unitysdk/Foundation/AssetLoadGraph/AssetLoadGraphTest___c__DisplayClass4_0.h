#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS4_0__CASE4_LOADASSETS_B__0_OFFSET UNITYSDK_OFFSET(0x1F2CEF90)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS4_0__CASE4_LOADASSETS_B__1_OFFSET UNITYSDK_OFFSET(0x1F2CF0C0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2CEF80)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphTest___c__DisplayClass4_0_TypeDefinitionIndex = 8208;

	class AssetLoadGraphTest___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*> staticBatch; // 0x10
		::System::Byte _padding0[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*> resolverBatch; // 0x28
		::System::Byte _padding1[0x10];
		::Il2CppArray<::Foundation::AssetPath>* paths; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Foundation::AssetPath>* _Case4_LoadAssets_b__0(::UnityEngine::TextAsset* asset)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Foundation::AssetPath>*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS4_0__CASE4_LOADASSETS_B__0_OFFSET))(this, asset);
		}

		::System::Void _Case4_LoadAssets_b__1(::Foundation::AssetLoadGraph::AssetLoadGraphHandle h)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS4_0__CASE4_LOADASSETS_B__1_OFFSET))(this, h);
		}
	};
}
