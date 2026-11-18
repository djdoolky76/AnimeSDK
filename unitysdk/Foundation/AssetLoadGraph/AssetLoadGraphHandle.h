#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraph_Status.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeState.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken.h"

namespace Foundation::AssetLoadGraph { class AssetLoadGraphHandle_AssetLoadGraphHandleChecker; }
namespace Foundation::AssetLoadGraph { class AssetLoadGraphRuntime; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ADDCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x990570)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_CANCEL_OFFSET UNITYSDK_OFFSET(0x990580)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_COLLECTFAILEDNODES_OFFSET UNITYSDK_OFFSET(0x990610)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F9C5550)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x990620)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x990720)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9906C0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x990730)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GETNODEERROR_OFFSET UNITYSDK_OFFSET(0x9905E0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GET_ERRORS_OFFSET UNITYSDK_OFFSET(0x990510)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x990500)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GET_ISCANCELED_OFFSET UNITYSDK_OFFSET(0x9904D0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x9904C0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GET_ISFAULTED_OFFSET UNITYSDK_OFFSET(0x9904E0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x990460)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9904F0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F9C6120)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F9C61C0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x990520)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x990630)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x990680)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_TRYFINDTOKEN_OFFSET UNITYSDK_OFFSET(0x9905A0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_TRYGETNODESTATE_OFFSET UNITYSDK_OFFSET(0x9905B0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_WAITFORCOMPLETE_OFFSET UNITYSDK_OFFSET(0x990590)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9C6260)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x990790)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x990800)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphHandle_TypeDefinitionIndex = 8623;

	struct alignas(8) AssetLoadGraphHandle
	{
		static ::Foundation::AssetLoadGraph::AssetLoadGraphHandle* StaticGet_None()
		{
			return (::Foundation::AssetLoadGraph::AssetLoadGraphHandle*)Il2CppClass::FromTypeDefinitionIndex(AssetLoadGraphHandle_TypeDefinitionIndex)->GetStaticField(0x71E0);
		}
		::Foundation::AssetLoadGraph::AssetLoadGraphRuntime* _runtime; // 0x10
		::Foundation::AssetLoadGraph::AssetLoadGraphHandle_AssetLoadGraphHandleChecker* _assetLoadGraphHandleChecker; // 0x18

		::System::Void _ctor(::Foundation::AssetLoadGraph::AssetLoadGraphRuntime* runtime, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle_AssetLoadGraphHandleChecker* assetLoadGraphHandleChecker)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphRuntime*, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle_AssetLoadGraphHandleChecker*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE__CTOR_OFFSET))(this, runtime, assetLoadGraphHandleChecker);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GET_ISDONE_OFFSET))(this);
		}

		::System::Boolean get_IsCanceled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GET_ISCANCELED_OFFSET))(this);
		}

		::System::Boolean get_IsFaulted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GET_ISFAULTED_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraph_Status get_Status()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraph_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GET_STATUS_OFFSET))(this);
		}

		::System::Exception* get_Error()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GET_ERROR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Exception*>* get_Errors()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Exception*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GET_ERRORS_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		/*
		static ::Foundation::AssetLoadGraph::AssetLoadGraphHandle Create(::Foundation::AssetLoadGraph::AssetLoadGraphRuntime* runtime)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphHandle(*)(::Foundation::AssetLoadGraph::AssetLoadGraphRuntime*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_CREATE_OFFSET))(runtime);
		}
		*/

		/*
		::System::Void AddCompleteCallback(::System::Action_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_ADDCOMPLETECALLBACK_OFFSET))(this, callback);
		}
		*/

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_CANCEL_OFFSET))(this);
		}

		::System::Void WaitForComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_WAITFORCOMPLETE_OFFSET))(this);
		}

		::System::Boolean TryFindToken(::System::String* nodeName, ::Foundation::AssetLoadGraph::AssetLoadNodeToken& token)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Foundation::AssetLoadGraph::AssetLoadNodeToken&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_TRYFINDTOKEN_OFFSET))(this, nodeName, token);
		}

		::System::Boolean TryGetNodeState(::Foundation::AssetLoadGraph::AssetLoadNodeToken token, ::Foundation::AssetLoadGraph::AssetLoadNodeState& state)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadNodeToken, ::Foundation::AssetLoadGraph::AssetLoadNodeState&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_TRYGETNODESTATE_OFFSET))(this, token, state);
		}

		::System::Exception* GetNodeError(::Foundation::AssetLoadGraph::AssetLoadNodeToken token)
		{
			return ((::System::Exception*(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadNodeToken))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GETNODEERROR_OFFSET))(this, token);
		}

		::System::Int32 CollectFailedNodes(::System::Collections::Generic::List_1<::Foundation::AssetLoadGraph::AssetLoadNodeToken>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::AssetLoadGraph::AssetLoadNodeToken>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_COLLECTFAILEDNODES_OFFSET))(this, results);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::Foundation::AssetLoadGraph::AssetLoadGraphHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_EQUALS_OFFSET))(this, other);
		}
		*/

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::Foundation::AssetLoadGraph::AssetLoadGraphHandle left, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle right)
		{
			return ((::System::Boolean(*)(::Foundation::AssetLoadGraph::AssetLoadGraphHandle, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_OP_EQUALITY_OFFSET))(left, right);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::Foundation::AssetLoadGraph::AssetLoadGraphHandle left, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle right)
		{
			return ((::System::Boolean(*)(::Foundation::AssetLoadGraph::AssetLoadGraphHandle, ::Foundation::AssetLoadGraph::AssetLoadGraphHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE_OP_INEQUALITY_OFFSET))(left, right);
		}
		*/

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHHANDLE___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
