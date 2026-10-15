#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	inline static constexpr unsigned int AppContextSwitches_TypeDefinitionIndex = 156;

	class AppContextSwitches : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_ThrowExceptionIfDisposedCancellationTokenSource()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "AppContextSwitches")->GetStaticField(0x4100);
		}

		static ::System::Boolean* StaticGet_PreserveEventListnerObjectIdentity()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "AppContextSwitches")->GetStaticField(0x4101);
		}

		static ::System::Boolean* StaticGet_SetActorAsReferenceWhenCopyingClaimsIdentity()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "AppContextSwitches")->GetStaticField(0x4102);
		}

	};
}
