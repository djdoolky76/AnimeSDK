#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOONMNPCCNF.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

#define OEMBLCFJDCG__CTOR_OFFSET UNITYSDK_OFFSET(0x1843DF90)

inline static constexpr unsigned int OEMBLCFJDCG_TypeDefinitionIndex = 46795;

class OEMBLCFJDCG : public ::IOONMNPCCNF
{
public:
	::System::Single KIMNGMMCPJB; // 0x18
	::UnityEngine::Rendering::Universal::DepthOfFieldMode GEJCKFFFKCL; // 0x1C
	::System::Single GJMHIDNKKAD; // 0x20
	::System::Boolean PPDKKHOJBKF; // 0x24
	::System::Boolean ONGKHCJDGAH; // 0x25
	::System::Byte _padding0[0x2];
	::System::Single MNKHIHAKLJI; // 0x28
	::System::Single ANHGLGDMHPO; // 0x2C
	::System::Single MNGCMICHGPL; // 0x30
	::System::Int32 BBCFOPGNEOB; // 0x34
	::System::Single BKCOOBHJOLL; // 0x38
	::UnityEngine::Rendering::Universal::DofDebugMode JLENADPMECB; // 0x3C
	::System::Single FJAOCFAMFIM; // 0x40
	::System::Single DHHPIMIPLJJ; // 0x44
	::System::Boolean DFJADKPNLFC; // 0x48
	::System::Boolean EOCGAKDDOHO; // 0x49
	::System::Boolean GCJMEFJGJPL; // 0x4A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBLCFJDCG__CTOR_OFFSET))(this);
	}
};
