#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define MDKDFOBJMBP_ICGLKCJCMAM_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x1A6380B0)
#define MDKDFOBJMBP_ICGLKCJCMAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A638200)

inline static constexpr unsigned int MDKDFOBJMBP_ICGLKCJCMAM_TypeDefinitionIndex = 84982;

class MDKDFOBJMBP_ICGLKCJCMAM : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* AMLGJLFOLKE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKDFOBJMBP_ICGLKCJCMAM__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKDFOBJMBP_ICGLKCJCMAM_LBJEOHBBBPN_OFFSET))(this);
	}
};
