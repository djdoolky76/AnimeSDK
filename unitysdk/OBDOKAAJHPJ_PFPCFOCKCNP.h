#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class RectTransform; }

#define OBDOKAAJHPJ_PFPCFOCKCNP_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x1B771450)
#define OBDOKAAJHPJ_PFPCFOCKCNP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7715A0)

inline static constexpr unsigned int OBDOKAAJHPJ_PFPCFOCKCNP_TypeDefinitionIndex = 67994;

class OBDOKAAJHPJ_PFPCFOCKCNP : public ::PIOMHDMPINF
{
public:
	::UnityEngine::RectTransform* BGHECHBEKGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDOKAAJHPJ_PFPCFOCKCNP__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDOKAAJHPJ_PFPCFOCKCNP_LBJEOHBBBPN_OFFSET))(this);
	}
};
