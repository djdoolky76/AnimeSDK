#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONOUITABLESCROLLV2_CONFIGSCROLLVIEWFADE_RESETPARAMS_OFFSET UNITYSDK_OFFSET(0xE54B7F0)
#define MONOUITABLESCROLLV2_CONFIGSCROLLVIEWFADE__CTOR_OFFSET UNITYSDK_OFFSET(0xE54B860)

inline static constexpr unsigned int MonoUITableScrollV2_ConfigScrollViewFade_TypeDefinitionIndex = 40145;

class MonoUITableScrollV2_ConfigScrollViewFade : public ::System::Object
{
public:
	::System::String* AnimationName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_CONFIGSCROLLVIEWFADE__CTOR_OFFSET))(this);
	}

	::System::Void ResetParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_CONFIGSCROLLVIEWFADE_RESETPARAMS_OFFSET))(this);
	}
};
