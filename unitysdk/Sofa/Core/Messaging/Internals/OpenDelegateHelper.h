#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Reflection { class MethodInfo; }

#define SOFA_CORE_MESSAGING_INTERNALS_OPENDELEGATEHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC90C20)

namespace Sofa::Core::Messaging::Internals
{
	inline static constexpr unsigned int OpenDelegateHelper_TypeDefinitionIndex = 44276;

	class OpenDelegateHelper : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet__CreateOpenHandlerCoreMethod()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("Sofa.Core.Messaging.Internals", "OpenDelegateHelper")->GetStaticField(0x4FFA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_CORE_MESSAGING_INTERNALS_OPENDELEGATEHELPER_CCTOR_OFFSET))();
		}

	};
}
