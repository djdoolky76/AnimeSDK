#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define PMELLNPCDNM_JHIDFOGIIDP_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x11997E80)
#define PMELLNPCDNM_JHIDFOGIIDP__CTOR_OFFSET UNITYSDK_OFFSET(0x11998280)

inline static constexpr unsigned int PMELLNPCDNM_JHIDFOGIIDP_TypeDefinitionIndex = 73895;

class PMELLNPCDNM_JHIDFOGIIDP : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* FPBNHPCLHMI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMELLNPCDNM_JHIDFOGIIDP__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMELLNPCDNM_JHIDFOGIIDP_LBJEOHBBBPN_OFFSET))(this);
	}
};
