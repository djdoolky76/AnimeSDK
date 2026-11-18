#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/System/ValueTuple_5.h"
#include "unitysdk/System/ValueTuple_6.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS3_0__CASE3_DAGDEPENDENCIES_B__0_OFFSET UNITYSDK_OFFSET(0x1F7D3480)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7D3470)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphTest___c__DisplayClass3_0_TypeDefinitionIndex = 8207;

	class AssetLoadGraphTest___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::ValueTuple_3<::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*>> abc; // 0x10
		::System::Byte _padding0[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::ValueTuple_5<::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*>> abcde; // 0x28
		::System::Byte _padding1[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::ValueTuple_4<::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*>> abcd; // 0x40
		::System::Byte _padding2[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> e; // 0x58
		::System::Byte _padding3[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> b; // 0x70
		::System::Byte _padding4[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> d; // 0x88
		::System::Byte _padding5[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> f; // 0xA0
		::System::Byte _padding6[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::ValueTuple_6<::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*>> abcdef; // 0xB8
		::System::Byte _padding7[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> c; // 0xD0
		::System::Byte _padding8[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> g; // 0xE8
		::System::Byte _padding9[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*> abcList; // 0x100
		::System::Byte _padding10[0x10];
		::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::UnityEngine::TextAsset*> a; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _Case3_DagDependencies_b__0(::Foundation::AssetLoadGraph::AssetLoadGraphHandle h)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__DISPLAYCLASS3_0__CASE3_DAGDEPENDENCIES_B__0_OFFSET))(this, h);
		}
	};
}
