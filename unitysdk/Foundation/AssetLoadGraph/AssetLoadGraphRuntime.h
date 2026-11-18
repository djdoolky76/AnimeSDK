#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraph_Status.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken.h"

namespace Foundation::AssetLoadGraph { class AssetLoadGraph; }
namespace Foundation::AssetLoadGraph { class AssetLoadGraphNode; }
namespace Foundation::AssetLoadGraph { class AssetLoadGraphNodeRuntime; }
namespace Foundation::AssetLoadGraph { template <typename T> class AssetLoadGraphNode_1; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_ABORTPENDINGANDRUNNINGNODES_OFFSET UNITYSDK_OFFSET(0x1F3A0100)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_ADDCHILDSUBGRAPHNODE_OFFSET UNITYSDK_OFFSET(0x1F39EED0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_ADDCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1F39FED0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_ADDSUBGRAPHNODE_OFFSET UNITYSDK_OFFSET(0x1F39E6F0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_ADDSUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1F39E690)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_AREDEPENDENCIESREADY_OFFSET UNITYSDK_OFFSET(0x1F3A15D0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_CANACCEPTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F3A11C0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_CANCEL_OFFSET UNITYSDK_OFFSET(0x1F39FFE0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_CHECKCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1F39FD70)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_COLLECTFAILEDNODES_OFFSET UNITYSDK_OFFSET(0x1F3A0D30)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_COMPLETERUNNINGNODESIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1F3A0610)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F3A0EE0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_ENSUREACCEPTINGNODES_OFFSET UNITYSDK_OFFSET(0x1F39E930)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_ENSURECHILDPARENT_OFFSET UNITYSDK_OFFSET(0x1F39F100)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_FAILGRAPH_OFFSET UNITYSDK_OFFSET(0x1F3A07E0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_FINDNODEBYNAME_OFFSET UNITYSDK_OFFSET(0x1F39F480)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_FINDNODE_OFFSET UNITYSDK_OFFSET(0x1F3A0A20)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_FINDRUNTIMENODE_OFFSET UNITYSDK_OFFSET(0x1F3A0C10)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GETNODEERROR_OFFSET UNITYSDK_OFFSET(0x1F3A0AD0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GETNODE_OFFSET UNITYSDK_OFFSET(0x1F3A14F0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_CANCELREQUESTED_OFFSET UNITYSDK_OFFSET(0x1F39F6B0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x1F39F680)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_ERRORS_OFFSET UNITYSDK_OFFSET(0x1F39F6A0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1F39F690)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_GRAPHID_OFFSET UNITYSDK_OFFSET(0x1F39F640)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1F39F660)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1F39F670)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1F39E2C0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F39F650)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_HASSCHEDULABLEPENDINGNODE_OFFSET UNITYSDK_OFFSET(0x1F3A0710)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_NOTIFYNODEFAILED_OFFSET UNITYSDK_OFFSET(0x1F39D180)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_NOTIFYNODESTOPPED_OFFSET UNITYSDK_OFFSET(0x1F39D350)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_NOTIFYNODESUCCEEDED_OFFSET UNITYSDK_OFFSET(0x1F3A1010)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_RAISECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F3A0350)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_RECORDERRORSFROM_OFFSET UNITYSDK_OFFSET(0x1F3A1230)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_RECORDERROR_OFFSET UNITYSDK_OFFSET(0x1F3A1110)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_REGISTERCHILDNODE_OFFSET UNITYSDK_OFFSET(0x1F39F250)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_REGISTERNODERUNTIME_OFFSET UNITYSDK_OFFSET(0x1F39ECE0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_RUN_OFFSET UNITYSDK_OFFSET(0x1F39FA30)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_SCHEDULEREADYNODES_OFFSET UNITYSDK_OFFSET(0x1F39FB40)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3A1430)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_TRYFINDTOKEN_OFFSET UNITYSDK_OFFSET(0x1F39F300)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_TRYGETNODESTATE_OFFSET UNITYSDK_OFFSET(0x1F3A08D0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_UNLOADALLHANDLES_OFFSET UNITYSDK_OFFSET(0x1F3A0290)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_VALIDATEDEPENDENCYTOKENS_OFFSET UNITYSDK_OFFSET(0x1F39EA00)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_WAITFORCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F3A03E0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1F39F6C0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3A19A0)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphRuntime_TypeDefinitionIndex = 7976;

	class AssetLoadGraphRuntime : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Exception*>* _errors; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*>* _nodeMap; // 0x18
		::Foundation::AssetLoadGraph::AssetLoadGraph* _Graph_k__BackingField; // 0x20
		::System::Exception* _error; // 0x28
		::System::Collections::Generic::List_1<::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*>* _nodes; // 0x30
		::System::Action_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>* _completeCallback; // 0x38
		::System::String* _name; // 0x40
		::Foundation::AssetLoadGraph::AssetLoadGraphHandle _handle; // 0x48
		::System::Int64 _graphId; // 0x58
		::Foundation::AssetLoadGraph::AssetLoadGraph_Status _status; // 0x60
		::System::Boolean _cancelRequested; // 0x64
		::System::Boolean _disposed; // 0x65
		::System::Boolean _syncMode; // 0x66
		::System::Boolean _scheduling; // 0x67
		::System::Boolean _scheduleAgain; // 0x68

		::System::Void _ctor(::Foundation::AssetLoadGraph::AssetLoadGraph* graph)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraph*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME__CTOR_OFFSET))(this, graph);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNode_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>* AddSubGraph(::System::String* name, ::Foundation::AssetLoadGraph::AssetLoadGraph* subGraph)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNode_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>*(*)(::PVOID, ::System::String*, ::Foundation::AssetLoadGraph::AssetLoadGraph*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_ADDSUBGRAPH_OFFSET))(this, name, subGraph);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNode_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>* AddSubGraphNode(::System::String* name, ::Foundation::AssetLoadGraph::AssetLoadGraph* subGraph, ::Il2CppArray<::Foundation::AssetLoadGraph::AssetLoadNodeToken>* dependsOn)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNode_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>*(*)(::PVOID, ::System::String*, ::Foundation::AssetLoadGraph::AssetLoadGraph*, ::Il2CppArray<::Foundation::AssetLoadGraph::AssetLoadNodeToken>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_ADDSUBGRAPHNODE_OFFSET))(this, name, subGraph, dependsOn);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNode_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>* AddChildSubGraphNode(::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* parent, ::System::String* name, ::Foundation::AssetLoadGraph::AssetLoadGraph* subGraph)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNode_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>*(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*, ::System::String*, ::Foundation::AssetLoadGraph::AssetLoadGraph*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_ADDCHILDSUBGRAPHNODE_OFFSET))(this, parent, name, subGraph);
		}

		::System::Boolean TryFindToken(::System::String* nodeName, ::Foundation::AssetLoadGraph::AssetLoadNodeToken& token)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Foundation::AssetLoadGraph::AssetLoadNodeToken&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_TRYFINDTOKEN_OFFSET))(this, nodeName, token);
		}

		::System::Int64 get_GraphId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_GRAPHID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_NAME_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraph* get_Graph()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_GRAPH_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Boolean get_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_ISDONE_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraph_Status get_CurrentStatus()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraph_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_CURRENTSTATUS_OFFSET))(this);
		}

		::System::Exception* get_Error()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_ERROR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Exception*>* get_Errors()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Exception*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_ERRORS_OFFSET))(this);
		}

		::System::Boolean get_CancelRequested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GET_CANCELREQUESTED_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphHandle Run()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_RUN_OFFSET))(this);
		}

		::System::Void AddCompleteCallback(::System::Action_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_ADDCOMPLETECALLBACK_OFFSET))(this, callback);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_CANCEL_OFFSET))(this);
		}

		::System::Void WaitForComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_WAITFORCOMPLETE_OFFSET))(this);
		}

		::System::Boolean TryGetNodeState(::Foundation::AssetLoadGraph::AssetLoadNodeToken token, ::Foundation::AssetLoadGraph::AssetLoadNodeState& state)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadNodeToken, ::Foundation::AssetLoadGraph::AssetLoadNodeState&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_TRYGETNODESTATE_OFFSET))(this, token, state);
		}

		::System::Exception* GetNodeError(::Foundation::AssetLoadGraph::AssetLoadNodeToken token)
		{
			return ((::System::Exception*(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadNodeToken))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GETNODEERROR_OFFSET))(this, token);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* FindRuntimeNode(::Foundation::AssetLoadGraph::AssetLoadNodeToken token)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadNodeToken))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_FINDRUNTIMENODE_OFFSET))(this, token);
		}

		::System::Int32 CollectFailedNodes(::System::Collections::Generic::List_1<::Foundation::AssetLoadGraph::AssetLoadNodeToken>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::AssetLoadGraph::AssetLoadNodeToken>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_COLLECTFAILEDNODES_OFFSET))(this, results);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_DISPOSE_OFFSET))(this);
		}

		::System::Void NotifyNodeSucceeded(::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* node)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_NOTIFYNODESUCCEEDED_OFFSET))(this, node);
		}

		::System::Void NotifyNodeFailed(::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* node, ::System::Exception* error)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*, ::System::Exception*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_NOTIFYNODEFAILED_OFFSET))(this, node, error);
		}

		::System::Void NotifyNodeStopped(::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* node)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_NOTIFYNODESTOPPED_OFFSET))(this, node);
		}

		::System::Boolean CanAcceptCallback(::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_CANACCEPTCALLBACK_OFFSET))(this, node);
		}

		::System::Void RecordError(::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* node, ::System::Exception* error)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*, ::System::Exception*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_RECORDERROR_OFFSET))(this, node, error);
		}

		::System::Void RecordErrorsFrom(::Foundation::AssetLoadGraph::AssetLoadGraphHandle subHandle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_RECORDERRORSFROM_OFFSET))(this, subHandle);
		}

		::System::Void ValidateDependencyTokens(::Il2CppArray<::Foundation::AssetLoadGraph::AssetLoadNodeToken>* dependsOn)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Foundation::AssetLoadGraph::AssetLoadNodeToken>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_VALIDATEDEPENDENCYTOKENS_OFFSET))(this, dependsOn);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_TOSTRING_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadNodeToken RegisterNodeRuntime(::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* node, ::System::Boolean schedule)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadNodeToken(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_REGISTERNODERUNTIME_OFFSET))(this, node, schedule);
		}

		::System::Void RegisterChildNode(::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* parent, ::Foundation::AssetLoadGraph::AssetLoadGraphNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*, ::Foundation::AssetLoadGraph::AssetLoadGraphNode*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_REGISTERCHILDNODE_OFFSET))(this, parent, node);
		}

		::System::Void EnsureAcceptingNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_ENSUREACCEPTINGNODES_OFFSET))(this);
		}

		::System::Void EnsureChildParent(::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* parent)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_ENSURECHILDPARENT_OFFSET))(this, parent);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* GetNode(::System::Int32 nodeId)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_GETNODE_OFFSET))(this, nodeId);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* FindNode(::Foundation::AssetLoadGraph::AssetLoadNodeToken token)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadNodeToken))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_FINDNODE_OFFSET))(this, token);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* FindNodeByName(::System::String* nodeName, ::System::Type* expectedType)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_FINDNODEBYNAME_OFFSET))(this, nodeName, expectedType);
		}

		::System::Void ScheduleReadyNodes(::System::Boolean synchronous)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_SCHEDULEREADYNODES_OFFSET))(this, synchronous);
		}

		::System::Boolean AreDependenciesReady(::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_AREDEPENDENCIESREADY_OFFSET))(this, node);
		}

		::System::Boolean CheckCompletion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_CHECKCOMPLETION_OFFSET))(this);
		}

		::System::Void FailGraph(::System::Exception* error)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_FAILGRAPH_OFFSET))(this, error);
		}

		::System::Void AbortPendingAndRunningNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_ABORTPENDINGANDRUNNINGNODES_OFFSET))(this);
		}

		::System::Boolean CompleteRunningNodesImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_COMPLETERUNNINGNODESIMMEDIATELY_OFFSET))(this);
		}

		::System::Boolean HasSchedulablePendingNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_HASSCHEDULABLEPENDINGNODE_OFFSET))(this);
		}

		::System::Void RaiseComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_RAISECOMPLETE_OFFSET))(this);
		}

		::System::Void UnloadAllHandles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME_UNLOADALLHANDLES_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHRUNTIME___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
