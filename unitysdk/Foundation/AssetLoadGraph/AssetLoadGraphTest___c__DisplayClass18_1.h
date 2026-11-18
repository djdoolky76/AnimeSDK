#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"

namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS18_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3DB260)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS18_1__RUNRESET_B__1_OFFSET UNITYSDK_OFFSET(0x1F3DB270)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphTest___c__DisplayClass18_1_TypeDefinitionIndex = 8213;

	template <typename T>
	class AssetLoadGraphTest___c__DisplayClass18_1 : public ::System::Object
	{
	public:
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> second; // 0x10
		::System::Byte _padding0[0x10];
		::System::Boolean firstOk; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS18_1__CTOR_OFFSET))(this);
		}

		::System::Void _RunReset_b__1(::Foundation::AssetLoadGraph::AssetLoadGraphHandle h2)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS18_1__RUNRESET_B__1_OFFSET))(this, h2);
		}
	};
}
