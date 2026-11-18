#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define BKCPNMJCAIF_MJDGMKPPKAE_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x1507E0C0)
#define BKCPNMJCAIF_MJDGMKPPKAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1507E2A0)

inline static constexpr unsigned int BKCPNMJCAIF_MJDGMKPPKAE_TypeDefinitionIndex = 54774;

class BKCPNMJCAIF_MJDGMKPPKAE : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* FPBNHPCLHMI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCPNMJCAIF_MJDGMKPPKAE__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCPNMJCAIF_MJDGMKPPKAE_LBJEOHBBBPN_OFFSET))(this);
	}
};
