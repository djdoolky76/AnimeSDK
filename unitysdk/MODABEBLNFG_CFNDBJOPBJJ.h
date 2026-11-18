#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define MODABEBLNFG_CFNDBJOPBJJ_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x11A29A00)
#define MODABEBLNFG_CFNDBJOPBJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11A29C40)

inline static constexpr unsigned int MODABEBLNFG_CFNDBJOPBJJ_TypeDefinitionIndex = 82811;

class MODABEBLNFG_CFNDBJOPBJJ : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* LENICOHIIIJ; // 0x10
	::UnityEngine::Transform* ODALDIOFMPH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODABEBLNFG_CFNDBJOPBJJ__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MODABEBLNFG_CFNDBJOPBJJ_LBJEOHBBBPN_OFFSET))(this);
	}
};
