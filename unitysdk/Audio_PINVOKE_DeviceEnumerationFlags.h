#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Audio_PINVOKE_DeviceEnumerationFlags_TypeDefinitionIndex = 38682;

enum class Audio_PINVOKE_DeviceEnumerationFlags : ::System::Int32
{
	IncludeHidden = 262144,
	AttachedOnly = 1,
	IncludePhantoms = 131072,
	AllDevices = 0,
	None = 0,
	IncludeAliases = 65536,
	ForceFeedback = 256,
};
