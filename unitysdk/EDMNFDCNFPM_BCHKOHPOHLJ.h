#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JLBMDEILONG;

#define EDMNFDCNFPM_BCHKOHPOHLJ_EHPDMHKNELC_OFFSET UNITYSDK_OFFSET(0xF9BAED0)
#define EDMNFDCNFPM_BCHKOHPOHLJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF9BAEC0)

inline static constexpr unsigned int EDMNFDCNFPM_BCHKOHPOHLJ_TypeDefinitionIndex = 56106;

class EDMNFDCNFPM_BCHKOHPOHLJ : public ::System::Object
{
public:
	::JLBMDEILONG* KNHIFHIKHIO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMNFDCNFPM_BCHKOHPOHLJ__CTOR_OFFSET))(this);
	}

	::System::Int32 EHPDMHKNELC(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EDMNFDCNFPM_BCHKOHPOHLJ_EHPDMHKNELC_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
