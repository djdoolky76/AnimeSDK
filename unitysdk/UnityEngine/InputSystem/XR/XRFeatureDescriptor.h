#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B78B7B52011909F4/E74714A5745D452C.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/XR/UsageHint.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRFeatureDescriptor_TypeDefinitionIndex = 14505;

	struct alignas(8) XRFeatureDescriptor
	{
		::System::String* name; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>* usageHints; // 0x18
		::B78B7B52011909F4::E74714A5745D452C featureType; // 0x20
		::System::UInt32 customSize; // 0x24
	};
}
