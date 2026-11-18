#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int FILLPGNODHD_PCLauncherVerifyData_TypeDefinitionIndex = 59932;

struct alignas(8) FILLPGNODHD_PCLauncherVerifyData
{
	::System::String* game_version; // 0x10
	::System::String* verify_result; // 0x18
	::System::String* verify_time; // 0x20
};
