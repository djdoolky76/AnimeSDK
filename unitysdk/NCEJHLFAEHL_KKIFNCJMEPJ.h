#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define NCEJHLFAEHL_KKIFNCJMEPJ_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x13132A50)
#define NCEJHLFAEHL_KKIFNCJMEPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13132BA0)

inline static constexpr unsigned int NCEJHLFAEHL_KKIFNCJMEPJ_TypeDefinitionIndex = 89060;

class NCEJHLFAEHL_KKIFNCJMEPJ : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* FPBNHPCLHMI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEJHLFAEHL_KKIFNCJMEPJ__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEJHLFAEHL_KKIFNCJMEPJ_LBJEOHBBBPN_OFFSET))(this);
	}
};
