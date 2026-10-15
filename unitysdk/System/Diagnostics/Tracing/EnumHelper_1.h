#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Reflection { class MethodInfo; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EnumHelper_1_TypeDefinitionIndex = 1593;

	template <typename T>
	class EnumHelper_1 : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_IdentityInfo()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("System.Diagnostics.Tracing", "EnumHelper`1")->GetStaticField(0x0);
		}

	};
}
