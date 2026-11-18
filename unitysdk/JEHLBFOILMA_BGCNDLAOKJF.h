#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BAMCLBBFMBD_AHJEEHCNBLF.h"

class BAMCLBBFMBD;

#define JEHLBFOILMA_BGCNDLAOKJF_JDGBEHPDECP_OFFSET UNITYSDK_OFFSET(0x13ACAA20)
#define JEHLBFOILMA_BGCNDLAOKJF__CTOR_OFFSET UNITYSDK_OFFSET(0x13ACA8F0)

inline static constexpr unsigned int JEHLBFOILMA_BGCNDLAOKJF_TypeDefinitionIndex = 41268;

class JEHLBFOILMA_BGCNDLAOKJF : public ::System::Object
{
public:
	::BAMCLBBFMBD* PMHJBOFDPEJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHLBFOILMA_BGCNDLAOKJF__CTOR_OFFSET))(this);
	}

	::System::Boolean JDGBEHPDECP(::BAMCLBBFMBD_AHJEEHCNBLF IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::BAMCLBBFMBD_AHJEEHCNBLF))((::PBYTE)hIl2Cpp + JEHLBFOILMA_BGCNDLAOKJF_JDGBEHPDECP_OFFSET))(this, IPMMCGDMODG);
	}
};
