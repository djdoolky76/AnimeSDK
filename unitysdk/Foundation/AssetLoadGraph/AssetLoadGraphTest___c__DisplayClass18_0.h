#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"

namespace Foundation::AssetLoadGraph { class AssetLoadGraph; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3DAE20)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS18_0__RUNRESET_B__0_OFFSET UNITYSDK_OFFSET(0x1F3DAE30)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphTest___c__DisplayClass18_0_TypeDefinitionIndex = 8211;

	class AssetLoadGraphTest___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> first; // 0x10
		::System::Byte _padding0[0x10];
		::Foundation::AssetPath secondPath; // 0x28
		::Foundation::AssetLoadGraph::AssetLoadGraph* graph; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _RunReset_b__0(::Foundation::AssetLoadGraph::AssetLoadGraphHandle h)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS18_0__RUNRESET_B__0_OFFSET))(this, h);
		}
	};
}
