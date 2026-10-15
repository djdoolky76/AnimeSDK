#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net
{
	class Logging : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_On()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Net", "Logging")->GetStaticField(0x8120);
		}

	};
}
