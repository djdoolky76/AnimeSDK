#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeState.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphContext.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken.h"

namespace Foundation::AssetLoadGraph { class AssetLoadGraphNode; }
namespace Foundation::AssetLoadGraph { class AssetLoadGraphRuntime; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1F39D5C0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_ADDCOMPLETEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F39D7B0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_COMPLETEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1F39D100)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_CREATECONTEXT_OFFSET UNITYSDK_OFFSET(0x1F39D550)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_CREATETOKEN_OFFSET UNITYSDK_OFFSET(0x1F39CF40)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F39DC50)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_FAILMAIN_OFFSET UNITYSDK_OFFSET(0x1F39D0A0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1F39CE00)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1F39CE40)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_GRAPHRUNTIME_OFFSET UNITYSDK_OFFSET(0x1F39CE60)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_HASPENDINGCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F39CE70)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_ID_OFFSET UNITYSDK_OFFSET(0x1F39CDA0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F39CDC0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_NODE_OFFSET UNITYSDK_OFFSET(0x1F39CD90)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_RESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1F39CDE0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1F39CE20)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_ISTERMINALSTATE_OFFSET UNITYSDK_OFFSET(0x1F39D8B0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_LOADHANDLEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1F39E310)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_ONCHILDCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F39DE00)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_ONCHILDSUCCEEDED_OFFSET UNITYSDK_OFFSET(0x1F39DDC0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1F39DD80)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_ONGRAPHABORTED_OFFSET UNITYSDK_OFFSET(0x1F39D140)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_RAISECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F39D900)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_SAFEUNLOAD_OFFSET UNITYSDK_OFFSET(0x1F39DA80)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_SET_ERROR_OFFSET UNITYSDK_OFFSET(0x1F39CE50)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1F39CE30)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_START_OFFSET UNITYSDK_OFFSET(0x1F39CFE0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_STOPMAIN_OFFSET UNITYSDK_OFFSET(0x1F39D2F0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F39E530)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_TRACK_OFFSET UNITYSDK_OFFSET(0x1F39E000)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_UNLOADHANDLES_OFFSET UNITYSDK_OFFSET(0x1F39D990)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1F39CE80)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F39E650)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphNodeRuntime_TypeDefinitionIndex = 8312;

	class AssetLoadGraphNodeRuntime : public ::System::Object
	{
	public:
		::System::Exception* _Error_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*>* _childNodes; // 0x18
		::Foundation::AssetLoadGraph::AssetLoadGraphNode* _Node_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _handles; // 0x28
		::Foundation::AssetLoadGraph::AssetLoadGraphRuntime* _GraphRuntime_k__BackingField; // 0x30
		::System::Action_1<::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*>* _completedCallback; // 0x38
		::System::Int32 _pendingChildCount; // 0x40
		::System::Boolean _disposed; // 0x44
		::System::Byte _padding0[0x3];
		::Foundation::AssetLoadGraph::AssetLoadNodeState _State_k__BackingField; // 0x48

		::System::Void _ctor(::Foundation::AssetLoadGraph::AssetLoadGraphRuntime* graphRuntime, ::Foundation::AssetLoadGraph::AssetLoadGraphNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphRuntime*, ::Foundation::AssetLoadGraph::AssetLoadGraphNode*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME__CTOR_OFFSET))(this, graphRuntime, node);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNode* get_Node()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_NODE_OFFSET))(this);
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_ID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_NAME_OFFSET))(this);
		}

		::System::Type* get_ResultType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_RESULTTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Foundation::AssetLoadGraph::AssetLoadNodeToken>* get_Dependencies()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Foundation::AssetLoadGraph::AssetLoadNodeToken>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_DEPENDENCIES_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadNodeState get_State()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadNodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Foundation::AssetLoadGraph::AssetLoadNodeState value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadNodeState))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_SET_STATE_OFFSET))(this, value);
		}

		::System::Exception* get_Error()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_ERROR_OFFSET))(this);
		}

		::System::Void set_Error(::System::Exception* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_SET_ERROR_OFFSET))(this, value);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphRuntime* get_GraphRuntime()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphRuntime*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_GRAPHRUNTIME_OFFSET))(this);
		}

		::System::Boolean get_HasPendingChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_GET_HASPENDINGCHILDREN_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadNodeToken CreateToken()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadNodeToken(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_CREATETOKEN_OFFSET))(this);
		}

		::System::Void Start(::System::Boolean synchronous)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_START_OFFSET))(this, synchronous);
		}

		::System::Boolean CompleteImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_COMPLETEIMMEDIATELY_OFFSET))(this);
		}

		::System::Void OnGraphAborted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_ONGRAPHABORTED_OFFSET))(this);
		}

		::System::Void FailMain(::System::Exception* error)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_FAILMAIN_OFFSET))(this, error);
		}

		::System::Void StopMain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_STOPMAIN_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphContext CreateContext()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphContext(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_CREATECONTEXT_OFFSET))(this);
		}

		::System::Void AddChild(::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* child)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_ADDCHILD_OFFSET))(this, child);
		}

		::System::Void AddCompletedCallback(::System::Action_1<::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_ADDCOMPLETEDCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RaiseCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_RAISECOMPLETED_OFFSET))(this);
		}

		::System::Void UnloadHandles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_UNLOADHANDLES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_DISPOSE_OFFSET))(this);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_ONDISPOSE_OFFSET))(this);
		}

		::System::Void OnChildSucceeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_ONCHILDSUCCEEDED_OFFSET))(this);
		}

		::System::Void OnChildCompleted(::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* child)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_ONCHILDCOMPLETED_OFFSET))(this, child);
		}

		::System::Void Track(::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_TRACK_OFFSET))(this, handle);
		}

		static ::System::Void LoadHandleImmediately(::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_LOADHANDLEIMMEDIATELY_OFFSET))(handle);
		}

		static ::System::Void SafeUnload(::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_SAFEUNLOAD_OFFSET))(handle);
		}

		static ::System::Boolean IsTerminalState(::Foundation::AssetLoadGraph::AssetLoadNodeState state)
		{
			return ((::System::Boolean(*)(::Foundation::AssetLoadGraph::AssetLoadNodeState))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_ISTERMINALSTATE_OFFSET))(state);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODERUNTIME___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
