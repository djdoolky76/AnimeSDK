#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define CGMJNELECEM_BBJLJHIHHPE_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x10E39400)
#define CGMJNELECEM_BBJLJHIHHPE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E39550)

inline static constexpr unsigned int CGMJNELECEM_BBJLJHIHHPE_TypeDefinitionIndex = 92100;

class CGMJNELECEM_BBJLJHIHHPE : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* ONNFLOIPMEF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMJNELECEM_BBJLJHIHHPE__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMJNELECEM_BBJLJHIHHPE_LBJEOHBBBPN_OFFSET))(this);
	}
};
