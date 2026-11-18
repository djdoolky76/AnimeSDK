#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken.h"

namespace Foundation::AssetLoadGraph { class AssetLoadGraphNode; }
namespace Foundation::AssetLoadGraph { template <typename T> class AssetLoadGraphNode_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_ADDSUBGRAPHNODE_OFFSET UNITYSDK_OFFSET(0x1F36EC80)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_ADDSUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1F36EC20)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_FINDNODEBYNAME_OFFSET UNITYSDK_OFFSET(0x1F36F570)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_FINDTOKEN_OFFSET UNITYSDK_OFFSET(0x1F36F380)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_GETNODE_OFFSET UNITYSDK_OFFSET(0x1F36FB00)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_GET_GRAPHID_OFFSET UNITYSDK_OFFSET(0x1F36F700)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F36F710)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_GET_NODES_OFFSET UNITYSDK_OFFSET(0x1F36F720)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_REGISTERNODE_OFFSET UNITYSDK_OFFSET(0x1F36F280)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_RESET_OFFSET UNITYSDK_OFFSET(0x1F36F910)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_RUN_OFFSET UNITYSDK_OFFSET(0x1F36F860)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_TAKENODEID_OFFSET UNITYSDK_OFFSET(0x1F36F170)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F36FA40)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_TRYFINDTOKEN_OFFSET UNITYSDK_OFFSET(0x1F36F410)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_VALIDATEDEPENDENCYTOKENS_OFFSET UNITYSDK_OFFSET(0x1F36EE90)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36F730)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F36FBE0)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraph_TypeDefinitionIndex = 8569;

	class AssetLoadGraph : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet__nextGraphId()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(AssetLoadGraph_TypeDefinitionIndex)->GetStaticField(0x3A40);
		}
		::System::Collections::Generic::List_1<::Foundation::AssetLoadGraph::AssetLoadGraphNode*>* _nodes; // 0x10
		::System::String* _name; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetLoadGraph::AssetLoadGraphNode*>* _nodeMap; // 0x20
		::System::Int32 _lastNodeId; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 _graphId; // 0x30

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH__CTOR_OFFSET))(this, name);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNode_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>* AddSubGraph(::Foundation::AssetLoadGraph::AssetLoadGraph* subGraph)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNode_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>*(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraph*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_ADDSUBGRAPH_OFFSET))(this, subGraph);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNode_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>* AddSubGraphNode(::System::String* name, ::Foundation::AssetLoadGraph::AssetLoadGraph* subGraph, ::Il2CppArray<::Foundation::AssetLoadGraph::AssetLoadNodeToken>* dependsOn)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNode_1<::Foundation::AssetLoadGraph::AssetLoadGraphHandle>*(*)(::PVOID, ::System::String*, ::Foundation::AssetLoadGraph::AssetLoadGraph*, ::Il2CppArray<::Foundation::AssetLoadGraph::AssetLoadNodeToken>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_ADDSUBGRAPHNODE_OFFSET))(this, name, subGraph, dependsOn);
		}

		::Foundation::AssetLoadGraph::AssetLoadNodeToken FindToken(::System::String* nodeName)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadNodeToken(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_FINDTOKEN_OFFSET))(this, nodeName);
		}

		::System::Boolean TryFindToken(::System::String* nodeName, ::Foundation::AssetLoadGraph::AssetLoadNodeToken& token)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Foundation::AssetLoadGraph::AssetLoadNodeToken&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_TRYFINDTOKEN_OFFSET))(this, nodeName, token);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNode* FindNodeByName(::System::String* nodeName, ::System::Type* expectedType)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNode*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_FINDNODEBYNAME_OFFSET))(this, nodeName, expectedType);
		}

		::System::Int64 get_GraphId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_GET_GRAPHID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_GET_NAME_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Foundation::AssetLoadGraph::AssetLoadGraphNode*>* get_Nodes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Foundation::AssetLoadGraph::AssetLoadGraphNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_GET_NODES_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphHandle Run()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_RUN_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_RESET_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_TOSTRING_OFFSET))(this);
		}

		::System::Int32 TakeNodeId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_TAKENODEID_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraphNode* GetNode(::System::Int32 nodeId)
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraphNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_GETNODE_OFFSET))(this, nodeId);
		}

		::System::Void ValidateDependencyTokens(::Il2CppArray<::Foundation::AssetLoadGraph::AssetLoadNodeToken>* dependsOn)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Foundation::AssetLoadGraph::AssetLoadNodeToken>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_VALIDATEDEPENDENCYTOKENS_OFFSET))(this, dependsOn);
		}

		::System::Void RegisterNode(::Foundation::AssetLoadGraph::AssetLoadGraphNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraphNode*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH_REGISTERNODE_OFFSET))(this, node);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPH___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
