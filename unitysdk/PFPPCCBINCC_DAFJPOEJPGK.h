#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define PFPPCCBINCC_DAFJPOEJPGK_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x13A92330)
#define PFPPCCBINCC_DAFJPOEJPGK__CTOR_OFFSET UNITYSDK_OFFSET(0x13A92920)

inline static constexpr unsigned int PFPPCCBINCC_DAFJPOEJPGK_TypeDefinitionIndex = 71938;

class PFPPCCBINCC_DAFJPOEJPGK : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* BIOHCGLOINI; // 0x10
	::UnityEngine::Transform* FALICLCLAMJ; // 0x18
	::UnityEngine::Transform* OKJCFCNDJIG; // 0x20
	::UnityEngine::Transform* LDFFLHPBHCH; // 0x28
	::UnityEngine::Transform* CKKPDPGNKFK; // 0x30
	::UnityEngine::Transform* AGEFFLBBHBF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPCCBINCC_DAFJPOEJPGK__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPCCBINCC_DAFJPOEJPGK_LBJEOHBBBPN_OFFSET))(this);
	}
};
