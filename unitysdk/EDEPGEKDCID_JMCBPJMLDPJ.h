#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJBMLMHDOME;

#define EDEPGEKDCID_JMCBPJMLDPJ_HIHNLKOHMFD_OFFSET UNITYSDK_OFFSET(0xF9B9F80)
#define EDEPGEKDCID_JMCBPJMLDPJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF9B9F70)

inline static constexpr unsigned int EDEPGEKDCID_JMCBPJMLDPJ_TypeDefinitionIndex = 62892;

class EDEPGEKDCID_JMCBPJMLDPJ : public ::System::Object
{
public:
	::System::Int32 KJMPMHECMMB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEPGEKDCID_JMCBPJMLDPJ__CTOR_OFFSET))(this);
	}

	::System::Boolean HIHNLKOHMFD(::BJBMLMHDOME* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::BJBMLMHDOME*))((::PBYTE)hIl2Cpp + EDEPGEKDCID_JMCBPJMLDPJ_HIHNLKOHMFD_OFFSET))(this, IMLLDOHDCNC);
	}
};
