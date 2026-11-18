#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAJGCLDPEFI.h"
#include "unitysdk/System/Object.h"

class LFEBKBLPAOA;
class NKEGAKMNAGM;

#define NKEGAKMNAGM_HKABGPAPDPF_HFCDHOAGMBJ_OFFSET UNITYSDK_OFFSET(0x172948C0)
#define NKEGAKMNAGM_HKABGPAPDPF__CTOR_OFFSET UNITYSDK_OFFSET(0x172948B0)

inline static constexpr unsigned int NKEGAKMNAGM_HKABGPAPDPF_TypeDefinitionIndex = 82171;

class NKEGAKMNAGM_HKABGPAPDPF : public ::System::Object
{
public:
	::LFEBKBLPAOA* GIAKBPKAKDD; // 0x10
	::NKEGAKMNAGM* KLHPEBKNIFB; // 0x18
	::MAJGCLDPEFI FCPCLIJNDLA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_HKABGPAPDPF__CTOR_OFFSET))(this);
	}

	::System::Void HFCDHOAGMBJ(::System::Boolean APBONFCBAMB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_HKABGPAPDPF_HFCDHOAGMBJ_OFFSET))(this, APBONFCBAMB);
	}
};
