#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define PDFJOFJEMHK_OICKOICHHNO_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x16F9E860)
#define PDFJOFJEMHK_OICKOICHHNO__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9E9B0)

inline static constexpr unsigned int PDFJOFJEMHK_OICKOICHHNO_TypeDefinitionIndex = 48055;

class PDFJOFJEMHK_OICKOICHHNO : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* MCLGPCKJCIP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFJOFJEMHK_OICKOICHHNO__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFJOFJEMHK_OICKOICHHNO_LBJEOHBBBPN_OFFSET))(this);
	}
};
