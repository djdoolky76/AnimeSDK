#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define IFCPDPILDGG_CELPONGBIAJ_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x141C1390)
#define IFCPDPILDGG_CELPONGBIAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x141C14E0)

inline static constexpr unsigned int IFCPDPILDGG_CELPONGBIAJ_TypeDefinitionIndex = 56239;

class IFCPDPILDGG_CELPONGBIAJ : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* KOIJDEHLKCO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCPDPILDGG_CELPONGBIAJ__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCPDPILDGG_CELPONGBIAJ_LBJEOHBBBPN_OFFSET))(this);
	}
};
