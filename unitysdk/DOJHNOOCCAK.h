#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"
#include "unitysdk/UnityEngine/Keyframe.h"

class JOOHBDMHGCA;

#define DOJHNOOCCAK_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x1587F6E0)
#define DOJHNOOCCAK_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x1587F7E0)
#define DOJHNOOCCAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1587F770)

inline static constexpr unsigned int DOJHNOOCCAK_TypeDefinitionIndex = 84349;

class DOJHNOOCCAK : public ::PKMJPMFCNBK
{
public:
	::JOOHBDMHGCA* MJKEEOJJDNP; // 0x80
	::UnityEngine::Keyframe MPGKIENNEBH; // 0x88
	::UnityEngine::Keyframe ECFJJBPEFGG; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJHNOOCCAK__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJHNOOCCAK_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJHNOOCCAK_KHJELIBOECB_OFFSET))(this);
	}
};
