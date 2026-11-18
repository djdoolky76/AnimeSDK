#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8DED00)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x8DEC70)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8DED10)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_GET_GRAPHID_OFFSET UNITYSDK_OFFSET(0x282350)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x8DEC10)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x363D60)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x3CED50)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E080450)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E080540)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8DED70)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E080760)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x6CFF90)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8DED80)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8DEDF0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8DEE60)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadNodeToken_TypeDefinitionIndex = 8435;

	struct alignas(8) AssetLoadNodeToken
	{
		static ::Foundation::AssetLoadGraph::AssetLoadNodeToken* StaticGet_None()
		{
			return (::Foundation::AssetLoadGraph::AssetLoadNodeToken*)Il2CppClass::FromTypeDefinitionIndex(AssetLoadNodeToken_TypeDefinitionIndex)->GetStaticField(0x6FB0);
		}
		::System::Int64 _graphId; // 0x10
		::System::Int32 _nodeId; // 0x18
		::System::Byte _padding0[0x4];
		::System::Type* _valueType; // 0x20

		::System::Void _ctor(::System::Int64 graphId, ::System::Int32 nodeId, ::System::Type* valueType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN__CTOR_OFFSET))(this, graphId, nodeId, valueType);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_GET_ISVALID_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Int64 get_GraphId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_GET_GRAPHID_OFFSET))(this);
		}

		::System::Int32 get_NodeId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_GET_NODEID_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::Foundation::AssetLoadGraph::AssetLoadNodeToken other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetLoadGraph::AssetLoadNodeToken))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_EQUALS_OFFSET))(this, other);
		}
		*/

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::Foundation::AssetLoadGraph::AssetLoadNodeToken left, ::Foundation::AssetLoadGraph::AssetLoadNodeToken right)
		{
			return ((::System::Boolean(*)(::Foundation::AssetLoadGraph::AssetLoadNodeToken, ::Foundation::AssetLoadGraph::AssetLoadNodeToken))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_OP_EQUALITY_OFFSET))(left, right);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::Foundation::AssetLoadGraph::AssetLoadNodeToken left, ::Foundation::AssetLoadGraph::AssetLoadNodeToken right)
		{
			return ((::System::Boolean(*)(::Foundation::AssetLoadGraph::AssetLoadNodeToken, ::Foundation::AssetLoadGraph::AssetLoadNodeToken))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_OP_INEQUALITY_OFFSET))(left, right);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADNODETOKEN___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
