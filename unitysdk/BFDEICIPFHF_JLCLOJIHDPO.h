#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define BFDEICIPFHF_JLCLOJIHDPO_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x17022450)
#define BFDEICIPFHF_JLCLOJIHDPO__CTOR_OFFSET UNITYSDK_OFFSET(0x170225A0)

inline static constexpr unsigned int BFDEICIPFHF_JLCLOJIHDPO_TypeDefinitionIndex = 92675;

class BFDEICIPFHF_JLCLOJIHDPO : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* NKGJGOIKICF; // 0x10
	::UnityEngine::Transform* MCGOJKFECEB; // 0x18
	::UnityEngine::Transform* PMPLFHAHHHC; // 0x20
	::UnityEngine::Transform* NGLIFDOENMB; // 0x28
	::UnityEngine::Transform* AOOGENHJHPM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDEICIPFHF_JLCLOJIHDPO__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDEICIPFHF_JLCLOJIHDPO_LBJEOHBBBPN_OFFSET))(this);
	}
};
