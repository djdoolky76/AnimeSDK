#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { class Graph_BinderConnection_Formatter; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER_GETFORMATTERDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1E95C470)
#define MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95CB10)
#define MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__CREATEGENERICFORMATTER_OFFSET UNITYSDK_OFFSET(0x1E95C990)
#define MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E95C280)
#define MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__GETORCREATEMYFORMATTER_OFFSET UNITYSDK_OFFSET(0x1E95C320)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int Graph_FirstPriority_Resolver_TypeDefinitionIndex = 30514;

	class Graph_FirstPriority_Resolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::Graph_FirstPriority_Resolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::Graph_FirstPriority_Resolver**)Il2CppClass::FromTypeDefinitionIndex(Graph_FirstPriority_Resolver_TypeDefinitionIndex)->GetStaticField(0x26520);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>** StaticGet__HandWriteTypedFormatters()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>**)Il2CppClass::FromTypeDefinitionIndex(Graph_FirstPriority_Resolver_TypeDefinitionIndex)->GetStaticField(0x26528);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>** StaticGet_s_PriorityFormatters()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>**)Il2CppClass::FromTypeDefinitionIndex(Graph_FirstPriority_Resolver_TypeDefinitionIndex)->GetStaticField(0x26530);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_genericFormatterTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Graph_FirstPriority_Resolver_TypeDefinitionIndex)->GetStaticField(0x26538);
		}
		::MessagePack::Formatters::Graph_BinderConnection_Formatter* BinderConnectionFormatter; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>* _formatters; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__CCTOR_OFFSET))();
		}

		::MessagePack::Formatters::IMessagePackFormatter* _GetOrCreateMyFormatter(::System::Type* type, ::System::Func_1<::MessagePack::Formatters::IMessagePackFormatter*>* fmtCreater)
		{
			return ((::MessagePack::Formatters::IMessagePackFormatter*(*)(::PVOID, ::System::Type*, ::System::Func_1<::MessagePack::Formatters::IMessagePackFormatter*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__GETORCREATEMYFORMATTER_OFFSET))(this, type, fmtCreater);
		}

		::MessagePack::Formatters::IMessagePackFormatter* GetFormatterDynamic(::System::Type* checkType)
		{
			return ((::MessagePack::Formatters::IMessagePackFormatter*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER_GETFORMATTERDYNAMIC_OFFSET))(this, checkType);
		}

		::MessagePack::Formatters::IMessagePackFormatter* _CreateGenericFormatter(::System::Type* genericFormatter, ::System::Reflection::TypeInfo* ti)
		{
			return ((::MessagePack::Formatters::IMessagePackFormatter*(*)(::PVOID, ::System::Type*, ::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPH_FIRSTPRIORITY_RESOLVER__CREATEGENERICFORMATTER_OFFSET))(this, genericFormatter, ti);
		}
	};
}
