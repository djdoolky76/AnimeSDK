#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define IPMBEFHMAPO_PCNMHINAJBI_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x160C4680)
#define IPMBEFHMAPO_PCNMHINAJBI__CTOR_OFFSET UNITYSDK_OFFSET(0x160C47D0)

inline static constexpr unsigned int IPMBEFHMAPO_PCNMHINAJBI_TypeDefinitionIndex = 82731;

class IPMBEFHMAPO_PCNMHINAJBI : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* FPBNHPCLHMI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMBEFHMAPO_PCNMHINAJBI__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMBEFHMAPO_PCNMHINAJBI_LBJEOHBBBPN_OFFSET))(this);
	}
};
