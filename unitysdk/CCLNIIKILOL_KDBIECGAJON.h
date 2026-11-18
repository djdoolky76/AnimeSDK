#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define CCLNIIKILOL_KDBIECGAJON_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x13253F20)
#define CCLNIIKILOL_KDBIECGAJON__CTOR_OFFSET UNITYSDK_OFFSET(0x13254070)

inline static constexpr unsigned int CCLNIIKILOL_KDBIECGAJON_TypeDefinitionIndex = 88189;

class CCLNIIKILOL_KDBIECGAJON : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* FPBNHPCLHMI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLNIIKILOL_KDBIECGAJON__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLNIIKILOL_KDBIECGAJON_LBJEOHBBBPN_OFFSET))(this);
	}
};
