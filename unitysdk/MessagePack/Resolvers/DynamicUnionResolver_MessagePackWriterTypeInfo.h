#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_MESSAGEPACKWRITERTYPEINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF69560)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver_MessagePackWriterTypeInfo_TypeDefinitionIndex = 7275;

	class DynamicUnionResolver_MessagePackWriterTypeInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::TypeInfo** StaticGet_WriterTypeInfo()
		{
			return (::System::Reflection::TypeInfo**)UnitySDK::FromName("MessagePack.Resolvers", "MessagePackWriterTypeInfo")->GetStaticField(0x33B50);
		}

		static ::System::Reflection::MethodInfo** StaticGet_WriteInt32()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "MessagePackWriterTypeInfo")->GetStaticField(0x33B58);
		}

		static ::System::Reflection::MethodInfo** StaticGet_WriteNil()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "MessagePackWriterTypeInfo")->GetStaticField(0x33B60);
		}

		static ::System::Reflection::MethodInfo** StaticGet_WriteArrayHeader()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "MessagePackWriterTypeInfo")->GetStaticField(0x33B68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_MESSAGEPACKWRITERTYPEINFO_CCTOR_OFFSET))();
		}

	};
}
