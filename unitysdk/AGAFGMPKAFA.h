#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DKGMJNOADGM;
class EJHHPFFPFOJ;
namespace System { class String; }

#define AGAFGMPKAFA_ALCPMNLAMMG_OFFSET UNITYSDK_OFFSET(0x7C0AB0)
#define AGAFGMPKAFA_CJFILLGHDFE_OFFSET UNITYSDK_OFFSET(0x427960)
#define AGAFGMPKAFA_DFOCLCHBDMD_OFFSET UNITYSDK_OFFSET(0x7C0AC0)
#define AGAFGMPKAFA_DOIBICMPNDN_OFFSET UNITYSDK_OFFSET(0x7C0A50)
#define AGAFGMPKAFA_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x7C0A60)

inline static constexpr unsigned int AGAFGMPKAFA_TypeDefinitionIndex = 54831;

struct alignas(8) AGAFGMPKAFA
{
	::System::String* PHOKNECLIDH; // 0x10
	::System::String* NOOEJFOFINA; // 0x18
	::System::Int32 DMJFMJAJFCI; // 0x20
	::System::Int32 HCLMCGMKMCH; // 0x24
	::System::Int32 LFHJMALLCED; // 0x28
	::System::Byte _padding0[0x4];
	::System::String* EANDAEOADOF; // 0x30
	::System::Boolean OPDLICBOBGE; // 0x38
	::System::Byte _padding1[0x3];
	::System::Int32 CPEHNCKBLHE; // 0x3C
	::System::Nullable_1<::UnityEngine::Vector3> LCNJJKJFAAN; // 0x40
	::System::Byte _padding2[0x8];
	::System::Nullable_1<::UnityEngine::Vector3> AGCPDHKEGEL; // 0x50
	::System::Byte _padding3[0x8];
	::UnityEngine::Vector2 _MGOFFIGLGEN_k__BackingField; // 0x60
	::DKGMJNOADGM* JIBNMDCKJHM; // 0x68

	::System::String* DOIBICMPNDN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAFGMPKAFA_DOIBICMPNDN_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAFGMPKAFA_FFCPIEDHBDP_OFFSET))(this);
	}

	::UnityEngine::Vector2 CJFILLGHDFE()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAFGMPKAFA_CJFILLGHDFE_OFFSET))(this);
	}

	::System::Void ALCPMNLAMMG(::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + AGAFGMPKAFA_ALCPMNLAMMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DFOCLCHBDMD(::EJHHPFFPFOJ*& OIKMICDBAPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::EJHHPFFPFOJ*&))((::PBYTE)hIl2Cpp + AGAFGMPKAFA_DFOCLCHBDMD_OFFSET))(this, OIKMICDBAPP);
	}
};
