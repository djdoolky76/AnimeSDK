#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_MESSAGEPACKWRITERTYPEINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x174C5880)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_MessagePackWriterTypeInfo_TypeDefinitionIndex = 7324;

	class DynamicObjectTypeBuilder_MessagePackWriterTypeInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_WriteMapHeader()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "MessagePackWriterTypeInfo")->GetStaticField(0x2DEF0);
		}

		static ::System::Reflection::MethodInfo** StaticGet_WriteBytes()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "MessagePackWriterTypeInfo")->GetStaticField(0x2DEF8);
		}

		static ::System::Reflection::MethodInfo** StaticGet_WriteRaw()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "MessagePackWriterTypeInfo")->GetStaticField(0x2DF00);
		}

		static ::System::Reflection::MethodInfo** StaticGet_WriteNil()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "MessagePackWriterTypeInfo")->GetStaticField(0x2DF08);
		}

		static ::System::Reflection::TypeInfo** StaticGet_TypeInfo()
		{
			return (::System::Reflection::TypeInfo**)UnitySDK::FromName("MessagePack.Internal", "MessagePackWriterTypeInfo")->GetStaticField(0x2DF10);
		}

		static ::System::Reflection::MethodInfo** StaticGet_WriteArrayHeader()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "MessagePackWriterTypeInfo")->GetStaticField(0x2DF18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_MESSAGEPACKWRITERTYPEINFO_CCTOR_OFFSET))();
		}

	};
}
