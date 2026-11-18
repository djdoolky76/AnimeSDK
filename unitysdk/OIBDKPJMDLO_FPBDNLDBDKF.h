#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define OIBDKPJMDLO_FPBDNLDBDKF_GNJCEODCOCD_OFFSET UNITYSDK_OFFSET(0x14F797D0)
#define OIBDKPJMDLO_FPBDNLDBDKF_OKFGCNFDDLC_OFFSET UNITYSDK_OFFSET(0x14F79640)
#define OIBDKPJMDLO_FPBDNLDBDKF__CTOR_OFFSET UNITYSDK_OFFSET(0x14F79630)

inline static constexpr unsigned int OIBDKPJMDLO_FPBDNLDBDKF_TypeDefinitionIndex = 52479;

class OIBDKPJMDLO_FPBDNLDBDKF : public ::System::Object
{
public:
	::UnityEngine::Material* EBIDGDBLDPI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_FPBDNLDBDKF__CTOR_OFFSET))(this);
	}

	::System::Void OKFGCNFDDLC(::System::Single HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_FPBDNLDBDKF_OKFGCNFDDLC_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Single GNJCEODCOCD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBDKPJMDLO_FPBDNLDBDKF_GNJCEODCOCD_OFFSET))(this);
	}
};
