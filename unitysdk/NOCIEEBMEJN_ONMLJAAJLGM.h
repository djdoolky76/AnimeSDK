#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define NOCIEEBMEJN_ONMLJAAJLGM_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x114B26D0)
#define NOCIEEBMEJN_ONMLJAAJLGM__CTOR_OFFSET UNITYSDK_OFFSET(0x114B2820)

inline static constexpr unsigned int NOCIEEBMEJN_ONMLJAAJLGM_TypeDefinitionIndex = 88861;

class NOCIEEBMEJN_ONMLJAAJLGM : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* KOIJDEHLKCO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCIEEBMEJN_ONMLJAAJLGM__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCIEEBMEJN_ONMLJAAJLGM_LBJEOHBBBPN_OFFSET))(this);
	}
};
