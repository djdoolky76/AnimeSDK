#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphContext.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"

namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS1_0__CASE1_SINGLEASSET_B__0_OFFSET UNITYSDK_OFFSET(0x1D72E900)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS1_0__CASE1_SINGLEASSET_B__1_OFFSET UNITYSDK_OFFSET(0x1D72E910)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D72E8F0)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphTest___c__DisplayClass1_0_TypeDefinitionIndex = 8215;

	class AssetLoadGraphTest___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::Foundation::AssetPath path; // 0x10
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> byPath; // 0x20
		::System::Byte _padding0[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> byResolver; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::Foundation::AssetPath _Case1_SingleAsset_b__0(::Foundation::AssetLoadGraph::AssetLoadGraphContext ctx)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphContext))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS1_0__CASE1_SINGLEASSET_B__0_OFFSET))(this, ctx);
		}

		::System::Void _Case1_SingleAsset_b__1(::Foundation::AssetLoadGraph::AssetLoadGraphHandle h)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS1_0__CASE1_SINGLEASSET_B__1_OFFSET))(this, h);
		}
	};
}
