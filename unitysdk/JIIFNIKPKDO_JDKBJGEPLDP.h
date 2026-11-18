#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define JIIFNIKPKDO_JDKBJGEPLDP_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x1557D260)
#define JIIFNIKPKDO_JDKBJGEPLDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1557D3B0)

inline static constexpr unsigned int JIIFNIKPKDO_JDKBJGEPLDP_TypeDefinitionIndex = 93161;

class JIIFNIKPKDO_JDKBJGEPLDP : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* MMNNLOMMNGL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIFNIKPKDO_JDKBJGEPLDP__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIFNIKPKDO_JDKBJGEPLDP_LBJEOHBBBPN_OFFSET))(this);
	}
};
