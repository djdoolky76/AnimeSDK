#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define NMJLLLMLBMC_BDIOJOIGLMA_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0xE766530)
#define NMJLLLMLBMC_BDIOJOIGLMA__CTOR_OFFSET UNITYSDK_OFFSET(0xE766680)

inline static constexpr unsigned int NMJLLLMLBMC_BDIOJOIGLMA_TypeDefinitionIndex = 70597;

class NMJLLLMLBMC_BDIOJOIGLMA : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* KOIJDEHLKCO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLLLMLBMC_BDIOJOIGLMA__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLLLMLBMC_BDIOJOIGLMA_LBJEOHBBBPN_OFFSET))(this);
	}
};
