#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphCompletion_1.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphContext.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__CASE13_REUSEDTEMPLATEWAITFORCOMPLETE_B__19_0_OFFSET UNITYSDK_OFFSET(0x1F9C6BF0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__CASE13_REUSEDTEMPLATEWAITFORCOMPLETE_B__19_1_OFFSET UNITYSDK_OFFSET(0x1F9C6C00)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__CASE5_THEN_B__5_0_OFFSET UNITYSDK_OFFSET(0x1F9C66B0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__CASE6_DYNAMICLOADANDLETASYNC_B__6_1_OFFSET UNITYSDK_OFFSET(0x1F9C6720)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__CASE6_DYNAMICLOADANDLETASYNC_B__6_2_OFFSET UNITYSDK_OFFSET(0x1F9C6930)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9C6660)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9C66A0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__RUNCANCEL_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F9C6B50)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__RUNFAILFAST_B__11_0_OFFSET UNITYSDK_OFFSET(0x1F9C6B40)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphTest___c_TypeDefinitionIndex = 8204;

	class AssetLoadGraphTest___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>**)Il2CppClass::FromTypeDefinitionIndex(AssetLoadGraphTest___c_TypeDefinitionIndex)->GetStaticField(0x7430);
		}
		static ::System::Func_4<::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::UnityEngine::TextAsset*, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32>, ::System::Boolean>** StaticGet___9__6_2()
		{
			return (::System::Func_4<::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::UnityEngine::TextAsset*, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AssetLoadGraphTest___c_TypeDefinitionIndex)->GetStaticField(0x7438);
		}
		static ::System::Action_3<::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32>>** StaticGet___9__19_0()
		{
			return (::System::Action_3<::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(AssetLoadGraphTest___c_TypeDefinitionIndex)->GetStaticField(0x7440);
		}
		static ::System::Func_2<::UnityEngine::TextAsset*, ::System::String*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::UnityEngine::TextAsset*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLoadGraphTest___c_TypeDefinitionIndex)->GetStaticField(0x7448);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AssetLoadGraphTest___c_TypeDefinitionIndex)->GetStaticField(0x7450);
		}
		static ::System::Action_3<::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::UnityEngine::TextAsset*, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32>>** StaticGet___9__6_1()
		{
			return (::System::Action_3<::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::UnityEngine::TextAsset*, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(AssetLoadGraphTest___c_TypeDefinitionIndex)->GetStaticField(0x7458);
		}
		static ::System::Func_4<::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32>, ::System::Boolean>** StaticGet___9__19_1()
		{
			return (::System::Func_4<::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AssetLoadGraphTest___c_TypeDefinitionIndex)->GetStaticField(0x7460);
		}
		static ::System::Func_2<::UnityEngine::TextAsset*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::UnityEngine::TextAsset*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AssetLoadGraphTest___c_TypeDefinitionIndex)->GetStaticField(0x7468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__CTOR_OFFSET))(this);
		}

		::System::String* _Case5_Then_b__5_0(::UnityEngine::TextAsset* asset)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__CASE5_THEN_B__5_0_OFFSET))(this, asset);
		}

		::System::Void _Case6_DynamicLoadAndLetAsync_b__6_1(::Foundation::AssetLoadGraph::AssetLoadGraphContext ctx, ::UnityEngine::TextAsset* selected, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32> completion)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::UnityEngine::TextAsset*, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__CASE6_DYNAMICLOADANDLETASYNC_B__6_1_OFFSET))(this, ctx, selected, completion);
		}

		::System::Boolean _Case6_DynamicLoadAndLetAsync_b__6_2(::Foundation::AssetLoadGraph::AssetLoadGraphContext ctx, ::UnityEngine::TextAsset* selected, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32> completion)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::UnityEngine::TextAsset*, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__CASE6_DYNAMICLOADANDLETASYNC_B__6_2_OFFSET))(this, ctx, selected, completion);
		}

		::System::Boolean _RunFailFast_b__11_0(::UnityEngine::TextAsset* asset)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__RUNFAILFAST_B__11_0_OFFSET))(this, asset);
		}

		::System::Void _RunCancel_b__16_0(::Foundation::AssetLoadGraph::AssetLoadGraphHandle h)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__RUNCANCEL_B__16_0_OFFSET))(this, h);
		}

		::System::Void _Case13_ReusedTemplateWaitForComplete_b__19_0(::Foundation::AssetLoadGraph::AssetLoadGraphContext ctx, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* assets, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32> completion)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__CASE13_REUSEDTEMPLATEWAITFORCOMPLETE_B__19_0_OFFSET))(this, ctx, assets, completion);
		}

		::System::Boolean _Case13_ReusedTemplateWaitForComplete_b__19_1(::Foundation::AssetLoadGraph::AssetLoadGraphContext ctx, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* assets, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32> completion)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphContext, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*, ::Foundation::AssetLoadGraph::AssetLoadGraphCompletion_1<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST___C__CASE13_REUSEDTEMPLATEWAITFORCOMPLETE_B__19_1_OFFSET))(this, ctx, assets, completion);
		}
	};
}
