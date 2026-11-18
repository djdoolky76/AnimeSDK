#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define EJIINBAIOCF_FFMPNDONKAO_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x11CAB610)
#define EJIINBAIOCF_FFMPNDONKAO__CTOR_OFFSET UNITYSDK_OFFSET(0x11CAB760)

inline static constexpr unsigned int EJIINBAIOCF_FFMPNDONKAO_TypeDefinitionIndex = 59042;

class EJIINBAIOCF_FFMPNDONKAO : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* BHCLKJMGJJE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIINBAIOCF_FFMPNDONKAO__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIINBAIOCF_FFMPNDONKAO_LBJEOHBBBPN_OFFSET))(this);
	}
};
