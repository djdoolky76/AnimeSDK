#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define CKNKMJJEIOL_NOLCJHOPOAF_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x19A14710)
#define CKNKMJJEIOL_NOLCJHOPOAF__CTOR_OFFSET UNITYSDK_OFFSET(0x19A14B30)

inline static constexpr unsigned int CKNKMJJEIOL_NOLCJHOPOAF_TypeDefinitionIndex = 51745;

class CKNKMJJEIOL_NOLCJHOPOAF : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* JHALEALNFIK; // 0x10
	::UnityEngine::Transform* KOIJDEHLKCO; // 0x18
	::UnityEngine::Transform* FFPIPKNMDOK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNKMJJEIOL_NOLCJHOPOAF__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNKMJJEIOL_NOLCJHOPOAF_LBJEOHBBBPN_OFFSET))(this);
	}
};
