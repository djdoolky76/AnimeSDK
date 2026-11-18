#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define JLLGFKLACDA_AFHDMGBFGFI_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x14FC2410)
#define JLLGFKLACDA_AFHDMGBFGFI__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC2560)

inline static constexpr unsigned int JLLGFKLACDA_AFHDMGBFGFI_TypeDefinitionIndex = 45975;

class JLLGFKLACDA_AFHDMGBFGFI : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* FPBNHPCLHMI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLGFKLACDA_AFHDMGBFGFI__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLGFKLACDA_AFHDMGBFGFI_LBJEOHBBBPN_OFFSET))(this);
	}
};
