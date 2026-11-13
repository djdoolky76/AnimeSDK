#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x174C4420)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex = 7327;

	class DynamicObjectTypeBuilder_EmitInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_TypeGetProperty()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "EmitInfo")->GetStaticField(0x2DE40);
		}

		static ::System::Reflection::MethodInfo** StaticGet_TypeGetField()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "EmitInfo")->GetStaticField(0x2DE48);
		}

		static ::System::Reflection::MethodInfo** StaticGet_GetCustomAttributeMessagePackFormatterAttribute()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "EmitInfo")->GetStaticField(0x2DE50);
		}

		static ::System::Reflection::MethodInfo** StaticGet_GetTypeFromHandle()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "EmitInfo")->GetStaticField(0x2DE58);
		}

		static ::System::Reflection::MethodInfo** StaticGet_ActivatorCreateInstance()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "EmitInfo")->GetStaticField(0x2DE60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_CCTOR_OFFSET))();
		}

	};
}
