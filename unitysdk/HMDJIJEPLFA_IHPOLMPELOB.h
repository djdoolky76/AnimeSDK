#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define HMDJIJEPLFA_IHPOLMPELOB_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x12E89B20)
#define HMDJIJEPLFA_IHPOLMPELOB__CTOR_OFFSET UNITYSDK_OFFSET(0x12E89C70)

inline static constexpr unsigned int HMDJIJEPLFA_IHPOLMPELOB_TypeDefinitionIndex = 58367;

class HMDJIJEPLFA_IHPOLMPELOB : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* FPBNHPCLHMI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDJIJEPLFA_IHPOLMPELOB__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDJIJEPLFA_IHPOLMPELOB_LBJEOHBBBPN_OFFSET))(this);
	}
};
