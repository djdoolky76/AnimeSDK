#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3DA6D0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS13_0__RUNLOADASSETSFAILFAST_B__0_OFFSET UNITYSDK_OFFSET(0x1F3DA6E0)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphTest___c__DisplayClass13_0_TypeDefinitionIndex = 8214;

	class AssetLoadGraphTest___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*> batch; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _RunLoadAssetsFailFast_b__0(::Foundation::AssetLoadGraph::AssetLoadGraphHandle h)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS13_0__RUNLOADASSETSFAILFAST_B__0_OFFSET))(this, h);
		}
	};
}
