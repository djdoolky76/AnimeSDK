#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCOAGGHCODK;

#define HJGOAJHNEGC_FDOIJAONOHD_BIGEINDJKHH_OFFSET UNITYSDK_OFFSET(0x14A1B530)
#define HJGOAJHNEGC_FDOIJAONOHD__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1B520)

inline static constexpr unsigned int HJGOAJHNEGC_FDOIJAONOHD_TypeDefinitionIndex = 59077;

class HJGOAJHNEGC_FDOIJAONOHD : public ::System::Object
{
public:
	::System::Int32 HBJOLKHGGDD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGOAJHNEGC_FDOIJAONOHD__CTOR_OFFSET))(this);
	}

	::System::Boolean BIGEINDJKHH(::KCOAGGHCODK* HEAJMIGHEHG)
	{
		return ((::System::Boolean(*)(::PVOID, ::KCOAGGHCODK*))((::PBYTE)hIl2Cpp + HJGOAJHNEGC_FDOIJAONOHD_BIGEINDJKHH_OFFSET))(this, HEAJMIGHEHG);
	}
};
