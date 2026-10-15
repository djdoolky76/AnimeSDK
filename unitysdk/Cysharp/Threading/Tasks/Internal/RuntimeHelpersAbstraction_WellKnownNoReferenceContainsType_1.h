#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Internal
{
	template <typename T>
	class RuntimeHelpersAbstraction_WellKnownNoReferenceContainsType_1 : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_IsWellKnownType()
		{
			return (::System::Boolean*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "WellKnownNoReferenceContainsType`1")->GetStaticField(0x0);
		}

	};
}
