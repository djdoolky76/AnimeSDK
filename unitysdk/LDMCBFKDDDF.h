#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKIKKFOMCEP.h"
#include "unitysdk/PKIKKFOMCEP_EEKHGOHHMBF.h"

class GDGBPCOGIEN;

#define LDMCBFKDDDF_BICCBEEMNJJ_OFFSET UNITYSDK_OFFSET(0x1EDFCB90)
#define LDMCBFKDDDF_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1EDFCC20)
#define LDMCBFKDDDF_NIHOLHLLHIF_OFFSET UNITYSDK_OFFSET(0x1EDFCB80)
#define LDMCBFKDDDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDFCC00)

inline static constexpr unsigned int LDMCBFKDDDF_TypeDefinitionIndex = 18754;

class LDMCBFKDDDF : public ::PKIKKFOMCEP
{
public:
	::System::Single EBFCACIEKBC; // 0x20
	::System::Single IJKOLMELBBC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMCBFKDDDF__CTOR_OFFSET))(this);
	}

	::PKIKKFOMCEP_EEKHGOHHMBF NIHOLHLLHIF()
	{
		return ((::PKIKKFOMCEP_EEKHGOHHMBF(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMCBFKDDDF_NIHOLHLLHIF_OFFSET))(this);
	}

	::System::Single BICCBEEMNJJ(::GDGBPCOGIEN* JIJFBNLHFGK, ::System::Single HLFFCMIFFIB)
	{
		return ((::System::Single(*)(::PVOID, ::GDGBPCOGIEN*, ::System::Single))((::PBYTE)hIl2Cpp + LDMCBFKDDDF_BICCBEEMNJJ_OFFSET))(this, JIJFBNLHFGK, HLFFCMIFFIB);
	}

	static ::LDMCBFKDDDF* COKNIICCODC(::System::Single IJKOLMELBBC, ::System::Single EBFCACIEKBC)
	{
		return ((::LDMCBFKDDDF*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LDMCBFKDDDF_COKNIICCODC_OFFSET))(IJKOLMELBBC, EBFCACIEKBC);
	}
};
