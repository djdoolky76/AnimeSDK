#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_MESSAGEPACKREADERTYPEINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x174C5590)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_MessagePackReaderTypeInfo_TypeDefinitionIndex = 7325;

	class DynamicObjectTypeBuilder_MessagePackReaderTypeInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_TryReadNil()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "MessagePackReaderTypeInfo")->GetStaticField(0x2E0A0);
		}

		static ::System::Reflection::MethodInfo** StaticGet_Skip()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "MessagePackReaderTypeInfo")->GetStaticField(0x2E0A8);
		}

		static ::System::Reflection::MethodInfo** StaticGet_ReadArrayHeader()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "MessagePackReaderTypeInfo")->GetStaticField(0x2E0B0);
		}

		static ::System::Reflection::MethodInfo** StaticGet_ReadMapHeader()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "MessagePackReaderTypeInfo")->GetStaticField(0x2E0B8);
		}

		static ::System::Reflection::TypeInfo** StaticGet_TypeInfo()
		{
			return (::System::Reflection::TypeInfo**)UnitySDK::FromName("MessagePack.Internal", "MessagePackReaderTypeInfo")->GetStaticField(0x2E0C0);
		}

		static ::System::Reflection::MethodInfo** StaticGet_ReadBytes()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "MessagePackReaderTypeInfo")->GetStaticField(0x2E0C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_MESSAGEPACKREADERTYPEINFO_CCTOR_OFFSET))();
		}

	};
}
