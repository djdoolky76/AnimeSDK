#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define ABIPNCNAAIA_JAHFGIBLELE_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x12CD2FD0)
#define ABIPNCNAAIA_JAHFGIBLELE__CTOR_OFFSET UNITYSDK_OFFSET(0x12CD3210)

inline static constexpr unsigned int ABIPNCNAAIA_JAHFGIBLELE_TypeDefinitionIndex = 75053;

class ABIPNCNAAIA_JAHFGIBLELE : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* NLADLFCHHBO; // 0x10
	::UnityEngine::Transform* LGHJNALCIIA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIPNCNAAIA_JAHFGIBLELE__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIPNCNAAIA_JAHFGIBLELE_LBJEOHBBBPN_OFFSET))(this);
	}
};
