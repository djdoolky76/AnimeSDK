#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	inline static constexpr unsigned int LocalAppContextSwitches_1CE24FA4FCA6D388_TypeDefinitionIndex = 2485;

	class LocalAppContextSwitches_1CE24FA4FCA6D388 : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_MemberDescriptorEqualsReturnsFalseIfEquivalent()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "LocalAppContextSwitches")->GetStaticField(0x93B0);
		}

	};
}
