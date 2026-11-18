#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class RectTransform; }

#define BGNJMFPNBKO_EDKDJGDKGJD_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x15077090)
#define BGNJMFPNBKO_EDKDJGDKGJD__CTOR_OFFSET UNITYSDK_OFFSET(0x150771E0)

inline static constexpr unsigned int BGNJMFPNBKO_EDKDJGDKGJD_TypeDefinitionIndex = 48621;

class BGNJMFPNBKO_EDKDJGDKGJD : public ::PIOMHDMPINF
{
public:
	::UnityEngine::RectTransform* JLKELGNIHLA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNJMFPNBKO_EDKDJGDKGJD__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNJMFPNBKO_EDKDJGDKGJD_LBJEOHBBBPN_OFFSET))(this);
	}
};
