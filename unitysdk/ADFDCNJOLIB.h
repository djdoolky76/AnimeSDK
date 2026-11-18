#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FICCPHGIIPL.h"
#include "unitysdk/AGAFGMPKAFA.h"

class DEIKKEMCGOI;

#define ADFDCNJOLIB_ALHHKFBPMDD_OFFSET UNITYSDK_OFFSET(0x143455F0)
#define ADFDCNJOLIB_CDJMJPJMGBB_OFFSET UNITYSDK_OFFSET(0x14345480)
#define ADFDCNJOLIB__CTOR_OFFSET UNITYSDK_OFFSET(0x14345380)

inline static constexpr unsigned int ADFDCNJOLIB_TypeDefinitionIndex = 69767;

class ADFDCNJOLIB : public ::FICCPHGIIPL
{
public:
	::System::Void _ctor(::AGAFGMPKAFA HNOPAJLDCFB, ::System::Int32 AMCNCFDFMEM, ::System::Int32 KJGDJMKKEGM, ::DEIKKEMCGOI* LNKHLINIKDJ)
	{
		return ((::System::Void(*)(::PVOID, ::AGAFGMPKAFA, ::System::Int32, ::System::Int32, ::DEIKKEMCGOI*))((::PBYTE)hIl2Cpp + ADFDCNJOLIB__CTOR_OFFSET))(this, HNOPAJLDCFB, AMCNCFDFMEM, KJGDJMKKEGM, LNKHLINIKDJ);
	}

	::System::Void CDJMJPJMGBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFDCNJOLIB_CDJMJPJMGBB_OFFSET))(this);
	}

	::System::Void ALHHKFBPMDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFDCNJOLIB_ALHHKFBPMDD_OFFSET))(this);
	}
};
