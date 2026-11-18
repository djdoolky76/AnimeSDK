#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphContext.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"

namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS6_0__CASE6_DYNAMICLOADANDLETASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1F3DB450)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS6_0__CASE6_DYNAMICLOADANDLETASYNC_B__3_OFFSET UNITYSDK_OFFSET(0x1F3DB600)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3DB440)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphTest___c__DisplayClass6_0_TypeDefinitionIndex = 8210;

	class AssetLoadGraphTest___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> afterSelectedToken; // 0x10
		::System::Byte _padding0[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> branchToken; // 0x28
		::System::Byte _padding1[0x10];
		::Il2CppArray<::Foundation::AssetPath>* paths; // 0x40
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::Int32> lengthToken; // 0x48
		::System::Byte _padding2[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> rootToken; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::Foundation::AssetPath _Case6_DynamicLoadAndLetAsync_b__0(::Foundation::AssetLoadGraph::AssetLoadGraphContext ctx, ::UnityEngine::TextAsset* root)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS6_0__CASE6_DYNAMICLOADANDLETASYNC_B__0_OFFSET))(this, ctx, root);
		}

		::System::Void _Case6_DynamicLoadAndLetAsync_b__3(::Foundation::AssetLoadGraph::AssetLoadGraphHandle h)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS6_0__CASE6_DYNAMICLOADANDLETASYNC_B__3_OFFSET))(this, h);
		}
	};
}
