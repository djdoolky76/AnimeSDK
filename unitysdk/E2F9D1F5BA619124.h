#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E3850DE56028A1AB.h"

namespace ABC::UI { class MonoUIAudioBehavior; }

#define E2F9D1F5BA619124_A6DB474A37A0EA50_OFFSET UNITYSDK_OFFSET(0x2081EA0)
#define E2F9D1F5BA619124_F3E9BFF09C08956D_OFFSET UNITYSDK_OFFSET(0x2081DF0)
#define E2F9D1F5BA619124_FE54CCFB7A90ADB1_OFFSET UNITYSDK_OFFSET(0x2081D40)
#define E2F9D1F5BA619124__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E2F9D1F5BA619124_TypeDefinitionIndex = 8437;

class E2F9D1F5BA619124 : public ::E3850DE56028A1AB
{
public:
	::System::Void F3E9BFF09C08956D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2F9D1F5BA619124_F3E9BFF09C08956D_OFFSET))(this);
	}

	::System::Void FE54CCFB7A90ADB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2F9D1F5BA619124_FE54CCFB7A90ADB1_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2F9D1F5BA619124__CTOR_OFFSET))(this);
	}

	::ABC::UI::MonoUIAudioBehavior* A6DB474A37A0EA50()
	{
		return ((::ABC::UI::MonoUIAudioBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + E2F9D1F5BA619124_A6DB474A37A0EA50_OFFSET))(this);
	}
};
