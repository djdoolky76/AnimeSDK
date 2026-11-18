#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define IODLKFGHMEC_IAHNMPGHNGJ_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x15C27A70)
#define IODLKFGHMEC_IAHNMPGHNGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15C27BC0)

inline static constexpr unsigned int IODLKFGHMEC_IAHNMPGHNGJ_TypeDefinitionIndex = 44642;

class IODLKFGHMEC_IAHNMPGHNGJ : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* BHCLKJMGJJE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODLKFGHMEC_IAHNMPGHNGJ__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IODLKFGHMEC_IAHNMPGHNGJ_LBJEOHBBBPN_OFFSET))(this);
	}
};
