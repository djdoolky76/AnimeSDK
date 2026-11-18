#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECHOLABCMKP.h"

#define IHNCCABJGPA_FHPGALBFNJM_OFFSET UNITYSDK_OFFSET(0x1FB0B1C0)
#define IHNCCABJGPA_GIFOFOCAFCK_OFFSET UNITYSDK_OFFSET(0x1FB0B240)
#define IHNCCABJGPA_GJAJELJLMGP_OFFSET UNITYSDK_OFFSET(0x1FB0B030)
#define IHNCCABJGPA_NLDCGJFLBCF_OFFSET UNITYSDK_OFFSET(0x1FB0B040)
#define IHNCCABJGPA_OOLMFCHNKIA_OFFSET UNITYSDK_OFFSET(0x1FB0B2F0)
#define IHNCCABJGPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB08F70)

inline static constexpr unsigned int IHNCCABJGPA_TypeDefinitionIndex = 18297;

class IHNCCABJGPA : public ::ECHOLABCMKP
{
public:
	::IHNCCABJGPA* HBIGGKNDOFN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHNCCABJGPA__CTOR_OFFSET))(this);
	}

	::System::Boolean GJAJELJLMGP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHNCCABJGPA_GJAJELJLMGP_OFFSET))(this);
	}

	static ::System::Void NLDCGJFLBCF(::IHNCCABJGPA* NAPFALLANDL)
	{
		return ((::System::Void(*)(::IHNCCABJGPA*))((::PBYTE)hIl2Cpp + IHNCCABJGPA_NLDCGJFLBCF_OFFSET))(NAPFALLANDL);
	}

	::System::Void FHPGALBFNJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHNCCABJGPA_FHPGALBFNJM_OFFSET))(this);
	}

	static ::System::Void GIFOFOCAFCK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHNCCABJGPA_GIFOFOCAFCK_OFFSET))();
	}

	static ::System::Void OOLMFCHNKIA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHNCCABJGPA_OOLMFCHNKIA_OFFSET))();
	}
};
