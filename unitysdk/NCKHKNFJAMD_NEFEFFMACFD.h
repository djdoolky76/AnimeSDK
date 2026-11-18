#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define NCKHKNFJAMD_NEFEFFMACFD_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x13135590)
#define NCKHKNFJAMD_NEFEFFMACFD__CTOR_OFFSET UNITYSDK_OFFSET(0x131356E0)

inline static constexpr unsigned int NCKHKNFJAMD_NEFEFFMACFD_TypeDefinitionIndex = 61836;

class NCKHKNFJAMD_NEFEFFMACFD : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* HGGOKMIANAL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKHKNFJAMD_NEFEFFMACFD__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKHKNFJAMD_NEFEFFMACFD_LBJEOHBBBPN_OFFSET))(this);
	}
};
