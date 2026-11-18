#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"

namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3DA4E0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS12_0__RUNFAILUREKEEPSLOADED_B__0_OFFSET UNITYSDK_OFFSET(0x1F3DA4F0)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphTest___c__DisplayClass12_0_TypeDefinitionIndex = 8202;

	class AssetLoadGraphTest___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> good; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _RunFailureKeepsLoaded_b__0(::Foundation::AssetLoadGraph::AssetLoadGraphHandle h)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS12_0__RUNFAILUREKEEPSLOADED_B__0_OFFSET))(this, h);
		}
	};
}
