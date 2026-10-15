#pragma once
#include "unitysdk/unitysdk.h"

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UnsafeNativeMethods_ManifestEtw_ActivityControl_TypeDefinitionIndex = 95;

	enum class UnsafeNativeMethods_ManifestEtw_ActivityControl : ::System::UInt32
	{
		EVENT_ACTIVITY_CTRL_GET_ID = 1,
		EVENT_ACTIVITY_CTRL_SET_ID = 2,
		EVENT_ACTIVITY_CTRL_CREATE_ID = 3,
		EVENT_ACTIVITY_CTRL_GET_SET_ID = 4,
		EVENT_ACTIVITY_CTRL_CREATE_SET_ID = 5,
	};
}
