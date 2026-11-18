#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define CGPAPIIPKLC_PPMOCNBGFLK_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x139C5DE0)
#define CGPAPIIPKLC_PPMOCNBGFLK__CTOR_OFFSET UNITYSDK_OFFSET(0x139C5F30)

inline static constexpr unsigned int CGPAPIIPKLC_PPMOCNBGFLK_TypeDefinitionIndex = 42077;

class CGPAPIIPKLC_PPMOCNBGFLK : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* KNLPBPPPHBE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPAPIIPKLC_PPMOCNBGFLK__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPAPIIPKLC_PPMOCNBGFLK_LBJEOHBBBPN_OFFSET))(this);
	}
};
