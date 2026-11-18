#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class RectTransform; }

#define COHOHOKACPC_GNHOCBEGLNH_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x147AFF00)
#define COHOHOKACPC_GNHOCBEGLNH__CTOR_OFFSET UNITYSDK_OFFSET(0x147B0050)

inline static constexpr unsigned int COHOHOKACPC_GNHOCBEGLNH_TypeDefinitionIndex = 39398;

class COHOHOKACPC_GNHOCBEGLNH : public ::PIOMHDMPINF
{
public:
	::UnityEngine::RectTransform* CPENONMEEMO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COHOHOKACPC_GNHOCBEGLNH__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COHOHOKACPC_GNHOCBEGLNH_LBJEOHBBBPN_OFFSET))(this);
	}
};
