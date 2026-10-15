#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_CODEGENHELPERSTYPEINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB851E0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_CodeGenHelpersTypeInfo_TypeDefinitionIndex = 7315;

	class DynamicObjectTypeBuilder_CodeGenHelpersTypeInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedStringBytes()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack.Internal", "CodeGenHelpersTypeInfo")->GetStaticField(0x4A220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_CODEGENHELPERSTYPEINFO_CCTOR_OFFSET))();
		}

	};
}
