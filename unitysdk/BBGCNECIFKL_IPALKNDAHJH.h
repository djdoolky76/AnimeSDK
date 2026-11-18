#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define BBGCNECIFKL_IPALKNDAHJH_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0xF787C40)
#define BBGCNECIFKL_IPALKNDAHJH__CTOR_OFFSET UNITYSDK_OFFSET(0xF787E80)

inline static constexpr unsigned int BBGCNECIFKL_IPALKNDAHJH_TypeDefinitionIndex = 61905;

class BBGCNECIFKL_IPALKNDAHJH : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* EMMAMCKDJBG; // 0x10
	::UnityEngine::Transform* GJPHJOPLFNK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGCNECIFKL_IPALKNDAHJH__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGCNECIFKL_IPALKNDAHJH_LBJEOHBBBPN_OFFSET))(this);
	}
};
