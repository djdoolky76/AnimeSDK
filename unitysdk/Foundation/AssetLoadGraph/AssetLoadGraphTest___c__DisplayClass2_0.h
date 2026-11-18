#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"

namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS2_0__CASE2_CHAINWITHLAMBDA_B__0_OFFSET UNITYSDK_OFFSET(0x1F3A19F0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS2_0__CASE2_CHAINWITHLAMBDA_B__1_OFFSET UNITYSDK_OFFSET(0x1F3A1B40)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A19E0)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphTest___c__DisplayClass2_0_TypeDefinitionIndex = 8216;

	class AssetLoadGraphTest___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> first; // 0x10
		::System::Byte _padding0[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> second; // 0x28
		::System::Byte _padding1[0x10];
		::Foundation::AssetPath secondPath; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::Foundation::AssetPath _Case2_ChainWithLambda_b__0(::UnityEngine::TextAsset* asset)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS2_0__CASE2_CHAINWITHLAMBDA_B__0_OFFSET))(this, asset);
		}

		::System::Void _Case2_ChainWithLambda_b__1(::Foundation::AssetLoadGraph::AssetLoadGraphHandle h)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS2_0__CASE2_CHAINWITHLAMBDA_B__1_OFFSET))(this, h);
		}
	};
}
