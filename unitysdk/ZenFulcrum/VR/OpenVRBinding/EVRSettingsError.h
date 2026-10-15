#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	enum class EVRSettingsError : ::System::Int32
	{
		None = 0,
		IPCFailed = 1,
		WriteFailed = 2,
		ReadFailed = 3,
		JsonParseFailed = 4,
		UnsetSettingHasNoDefault = 5,
	};
}
