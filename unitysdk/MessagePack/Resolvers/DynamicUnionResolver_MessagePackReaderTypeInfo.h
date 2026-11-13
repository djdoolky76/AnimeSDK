#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_MESSAGEPACKREADERTYPEINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF69190)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver_MessagePackReaderTypeInfo_TypeDefinitionIndex = 7274;

	class DynamicUnionResolver_MessagePackReaderTypeInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_ReadInt32()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "MessagePackReaderTypeInfo")->GetStaticField(0x33C30);
		}

		static ::System::Reflection::MethodInfo** StaticGet_Skip()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "MessagePackReaderTypeInfo")->GetStaticField(0x33C38);
		}

		static ::System::Reflection::TypeInfo** StaticGet_ReaderTypeInfo()
		{
			return (::System::Reflection::TypeInfo**)UnitySDK::FromName("MessagePack.Resolvers", "MessagePackReaderTypeInfo")->GetStaticField(0x33C40);
		}

		static ::System::Reflection::MethodInfo** StaticGet_ReadArrayHeader()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "MessagePackReaderTypeInfo")->GetStaticField(0x33C48);
		}

		static ::System::Reflection::MethodInfo** StaticGet_ReadString()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "MessagePackReaderTypeInfo")->GetStaticField(0x33C50);
		}

		static ::System::Reflection::MethodInfo** StaticGet_TryReadNil()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "MessagePackReaderTypeInfo")->GetStaticField(0x33C58);
		}

		static ::System::Reflection::MethodInfo** StaticGet_ReadMapHeader()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "MessagePackReaderTypeInfo")->GetStaticField(0x33C60);
		}

		static ::System::Reflection::MethodInfo** StaticGet_ReadBytes()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Resolvers", "MessagePackReaderTypeInfo")->GetStaticField(0x33C68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER_MESSAGEPACKREADERTYPEINFO_CCTOR_OFFSET))();
		}

	};
}
