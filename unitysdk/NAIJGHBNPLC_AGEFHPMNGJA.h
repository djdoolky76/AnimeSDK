#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class RectTransform; }

#define NAIJGHBNPLC_AGEFHPMNGJA_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x18C48830)
#define NAIJGHBNPLC_AGEFHPMNGJA__CTOR_OFFSET UNITYSDK_OFFSET(0x18C48980)

inline static constexpr unsigned int NAIJGHBNPLC_AGEFHPMNGJA_TypeDefinitionIndex = 73602;

class NAIJGHBNPLC_AGEFHPMNGJA : public ::PIOMHDMPINF
{
public:
	::UnityEngine::RectTransform* KJIODBNPLIN; // 0x10
	::UnityEngine::RectTransform* DPKGCBIIHJI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJGHBNPLC_AGEFHPMNGJA__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJGHBNPLC_AGEFHPMNGJA_LBJEOHBBBPN_OFFSET))(this);
	}
};
