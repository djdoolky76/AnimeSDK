#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"

namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS8_0__CASE8_CAPTURENAMEDANDFINDTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1DB02880)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB02870)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphTest___c__DisplayClass8_0_TypeDefinitionIndex = 8206;

	class AssetLoadGraphTest___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> explicitDependency; // 0x10
		::System::Byte _padding0[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> free; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _Case8_CaptureNamedAndFindToken_b__0(::Foundation::AssetLoadGraph::AssetLoadGraphHandle h)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS8_0__CASE8_CAPTURENAMEDANDFINDTOKEN_B__0_OFFSET))(this, h);
		}
	};
}
