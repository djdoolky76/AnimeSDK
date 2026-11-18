#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define OJFBIMJGCPP_HFJEBGLOFEA_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0xFB910F0)
#define OJFBIMJGCPP_HFJEBGLOFEA__CTOR_OFFSET UNITYSDK_OFFSET(0xFB91240)

inline static constexpr unsigned int OJFBIMJGCPP_HFJEBGLOFEA_TypeDefinitionIndex = 59012;

class OJFBIMJGCPP_HFJEBGLOFEA : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* JLMKGMCAHFO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBIMJGCPP_HFJEBGLOFEA__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBIMJGCPP_HFJEBGLOFEA_LBJEOHBBBPN_OFFSET))(this);
	}
};
