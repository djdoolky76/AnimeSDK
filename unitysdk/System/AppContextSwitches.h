#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	class AppContextSwitches : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_ThrowExceptionIfDisposedCancellationTokenSource()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "AppContextSwitches")->GetStaticField(0x3E10);
		}

		static ::System::Boolean* StaticGet_PreserveEventListnerObjectIdentity()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "AppContextSwitches")->GetStaticField(0x3E11);
		}

		static ::System::Boolean* StaticGet_SetActorAsReferenceWhenCopyingClaimsIdentity()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "AppContextSwitches")->GetStaticField(0x3E12);
		}

	};
}
