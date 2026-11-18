#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class RectTransform; }

#define LIIANLMBDEG_CHNOJDCAOOF_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x11F19210)
#define LIIANLMBDEG_CHNOJDCAOOF__CTOR_OFFSET UNITYSDK_OFFSET(0x11F19360)

inline static constexpr unsigned int LIIANLMBDEG_CHNOJDCAOOF_TypeDefinitionIndex = 47999;

class LIIANLMBDEG_CHNOJDCAOOF : public ::PIOMHDMPINF
{
public:
	::UnityEngine::RectTransform* FFPIPKNMDOK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIANLMBDEG_CHNOJDCAOOF__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIANLMBDEG_CHNOJDCAOOF_LBJEOHBBBPN_OFFSET))(this);
	}
};
