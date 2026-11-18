#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MESSAGEPACK_RESOLVERS_GRAPHOBJECT_RESOLVER_GENERATEUNITYOBJECTFORMATTERDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1EF8C830)
#define MESSAGEPACK_RESOLVERS_GRAPHOBJECT_RESOLVER_GETFORMATTERDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1EF8C4B0)
#define MESSAGEPACK_RESOLVERS_GRAPHOBJECT_RESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF8C2C0)
#define MESSAGEPACK_RESOLVERS_GRAPHOBJECT_RESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8C4A0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int GraphObject_Resolver_TypeDefinitionIndex = 30712;

	class GraphObject_Resolver : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet__UnitObjectType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(GraphObject_Resolver_TypeDefinitionIndex)->GetStaticField(0x26580);
		}
		static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet__knownUnityTypes()
		{
			return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(GraphObject_Resolver_TypeDefinitionIndex)->GetStaticField(0x26588);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_waitCheckTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(GraphObject_Resolver_TypeDefinitionIndex)->GetStaticField(0x26590);
		}
		static ::MessagePack::Resolvers::GraphObject_Resolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::GraphObject_Resolver**)Il2CppClass::FromTypeDefinitionIndex(GraphObject_Resolver_TypeDefinitionIndex)->GetStaticField(0x26598);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPHOBJECT_RESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPHOBJECT_RESOLVER__CTOR_OFFSET))(this);
		}

		::MessagePack::Formatters::IMessagePackFormatter* GetFormatterDynamic(::System::Type* checkType)
		{
			return ((::MessagePack::Formatters::IMessagePackFormatter*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPHOBJECT_RESOLVER_GETFORMATTERDYNAMIC_OFFSET))(this, checkType);
		}

		static ::MessagePack::Formatters::IMessagePackFormatter* GenerateUnityObjectFormatterDynamic(::System::Type* type)
		{
			return ((::MessagePack::Formatters::IMessagePackFormatter*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPHOBJECT_RESOLVER_GENERATEUNITYOBJECTFORMATTERDYNAMIC_OFFSET))(type);
		}
	};
}
