#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadGraph { class AssetLoadGraph; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_CREATETOKEN_OFFSET UNITYSDK_OFFSET(0x1DB02750)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_GET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1DB024F0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1DB02500)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DB024B0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DB024C0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_GET_RESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1DB024E0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_SETNAME_OFFSET UNITYSDK_OFFSET(0x1DB02600)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1DB024D0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB02650)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB027E0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB02510)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB02830)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphNode_TypeDefinitionIndex = 8558;

	class AssetLoadGraphNode : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Foundation::AssetLoadGraph::AssetLoadNodeToken>** StaticGet_EmptyDependencies()
		{
			return (::Il2CppArray<::Foundation::AssetLoadGraph::AssetLoadNodeToken>**)Il2CppClass::FromTypeDefinitionIndex(AssetLoadGraphNode_TypeDefinitionIndex)->GetStaticField(0x6D90);
		}
		::System::Collections::Generic::IReadOnlyList_1<::Foundation::AssetLoadGraph::AssetLoadNodeToken>* _dependencies; // 0x10
		::System::Type* _ResultType_k__BackingField; // 0x18
		::Foundation::AssetLoadGraph::AssetLoadGraph* _Graph_k__BackingField; // 0x20
		::System::String* _Name_k__BackingField; // 0x28
		::System::Int32 _Id_k__BackingField; // 0x30

		::System::Void _ctor(::Foundation::AssetLoadGraph::AssetLoadGraph* graph, ::System::Int32 id, ::System::String* name, ::System::Type* resultType, ::Il2CppArray<::Foundation::AssetLoadGraph::AssetLoadNodeToken>* dependencies)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadGraph*, ::System::Int32, ::System::String*, ::System::Type*, ::Il2CppArray<::Foundation::AssetLoadGraph::AssetLoadNodeToken>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE__CTOR_OFFSET))(this, graph, id, name, resultType, dependencies);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE__CCTOR_OFFSET))();
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_GET_ID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_SET_NAME_OFFSET))(this, value);
		}

		::System::Type* get_ResultType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_GET_RESULTTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Foundation::AssetLoadGraph::AssetLoadNodeToken>* get_Dependencies()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Foundation::AssetLoadGraph::AssetLoadNodeToken>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_GET_DEPENDENCIES_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadGraph* get_Graph()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_GET_GRAPH_OFFSET))(this);
		}

		::System::Void SetName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_SETNAME_OFFSET))(this, name);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_TOSTRING_OFFSET))(this);
		}

		::Foundation::AssetLoadGraph::AssetLoadNodeToken CreateToken()
		{
			return ((::Foundation::AssetLoadGraph::AssetLoadNodeToken(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE_CREATETOKEN_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHNODE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
