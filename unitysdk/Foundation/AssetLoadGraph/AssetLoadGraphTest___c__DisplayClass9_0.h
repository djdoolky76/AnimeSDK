#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS9_0__CASE9_SUBGRAPH_B__0_OFFSET UNITYSDK_OFFSET(0x18A69690)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A69680)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphTest___c__DisplayClass9_0_TypeDefinitionIndex = 8212;

	class AssetLoadGraphTest___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> subText; // 0x10
		::System::Byte _padding0[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle> subNode; // 0x28
		::System::Byte _padding1[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> mainText; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _Case9_SubGraph_b__0(::Foundation::AssetLoadGraph::AssetLoadGraphHandle h)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS9_0__CASE9_SUBGRAPH_B__0_OFFSET))(this, h);
		}
	};
}
