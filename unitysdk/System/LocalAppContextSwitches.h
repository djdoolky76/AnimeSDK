#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	inline static constexpr unsigned int LocalAppContextSwitches_TypeDefinitionIndex = 1785;

	class LocalAppContextSwitches : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_DontThrowOnInvalidSurrogatePairs()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "LocalAppContextSwitches")->GetStaticField(0x9D10);
		}

	};
}
