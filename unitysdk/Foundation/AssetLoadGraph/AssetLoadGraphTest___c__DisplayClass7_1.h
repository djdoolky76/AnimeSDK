#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphCompletion_1.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphContext.h"

namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS7_1__CASE7_THENDYNAMICBRANCHWAIT_B__2_OFFSET UNITYSDK_OFFSET(0x1F3A1E20)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS7_1__CASE7_THENDYNAMICBRANCHWAIT_B__3_OFFSET UNITYSDK_OFFSET(0x1F3A2040)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A1E10)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphTest___c__DisplayClass7_1_TypeDefinitionIndex = 8203;

	template <typename T>
	class AssetLoadGraphTest___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::UnityEngine::TextAsset* root; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}

		::System::Void _Case7_ThenDynamicBranchWait_b__2(::Foundation::AssetLoadGraph::AssetLoadGraphContext childCtx, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32> completion)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS7_1__CASE7_THENDYNAMICBRANCHWAIT_B__2_OFFSET))(this, childCtx, completion);
		}

		::System::Boolean _Case7_ThenDynamicBranchWait_b__3(::Foundation::AssetLoadGraph::AssetLoadGraphContext childCtx, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32> completion)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS7_1__CASE7_THENDYNAMICBRANCHWAIT_B__3_OFFSET))(this, childCtx, completion);
		}
	};
}
