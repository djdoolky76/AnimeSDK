#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphContext.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"

namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS7_0__CASE7_THENDYNAMICBRANCHWAIT_B__0_OFFSET UNITYSDK_OFFSET(0x1F3EA040)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS7_0__CASE7_THENDYNAMICBRANCHWAIT_B__1_OFFSET UNITYSDK_OFFSET(0x1F3EA340)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3EA030)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphTest___c__DisplayClass7_0_TypeDefinitionIndex = 8205;

	class AssetLoadGraphTest___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> branchToken; // 0x10
		::System::Byte _padding0[0x10];
		::Il2CppArray<::Foundation::AssetPath>* paths; // 0x28
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> afterThenToken; // 0x30
		::System::Byte _padding1[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> rootToken; // 0x48
		::System::Byte _padding2[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::Int32> childLetToken; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::TextAsset* _Case7_ThenDynamicBranchWait_b__0(::Foundation::AssetLoadGraph::AssetLoadGraphContext ctx, ::UnityEngine::TextAsset* root)
		{
			return ((::UnityEngine::TextAsset*(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS7_0__CASE7_THENDYNAMICBRANCHWAIT_B__0_OFFSET))(this, ctx, root);
		}

		::System::Void _Case7_ThenDynamicBranchWait_b__1(::Foundation::AssetLoadGraph::AssetLoadGraphHandle h)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS7_0__CASE7_THENDYNAMICBRANCHWAIT_B__1_OFFSET))(this, h);
		}
	};
}
