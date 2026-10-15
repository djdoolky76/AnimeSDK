#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	class LocalAppContextSwitches : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_DontThrowOnInvalidSurrogatePairs()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "LocalAppContextSwitches")->GetStaticField(0x9D10);
		}

	};
}
