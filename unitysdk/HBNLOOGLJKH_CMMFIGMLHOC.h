#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define HBNLOOGLJKH_CMMFIGMLHOC_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x14D0B7B0)
#define HBNLOOGLJKH_CMMFIGMLHOC__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0B900)

inline static constexpr unsigned int HBNLOOGLJKH_CMMFIGMLHOC_TypeDefinitionIndex = 46806;

class HBNLOOGLJKH_CMMFIGMLHOC : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* DENGLFBHKKL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLOOGLJKH_CMMFIGMLHOC__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLOOGLJKH_CMMFIGMLHOC_LBJEOHBBBPN_OFFSET))(this);
	}
};
