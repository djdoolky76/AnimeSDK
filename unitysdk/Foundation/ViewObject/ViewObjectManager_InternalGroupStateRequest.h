#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_InternalGroupStateRequest_TypeDefinitionIndex = 66680;

	struct alignas(8) ViewObjectManager_InternalGroupStateRequest
	{
		::System::UInt32 GroupId; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* StateName; // 0x18
		::System::Action_2<::System::Boolean, ::System::Int32>* ValueCallback; // 0x20
		::System::Action_2<::System::Boolean, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*>* MapCallback; // 0x28
	};
}
