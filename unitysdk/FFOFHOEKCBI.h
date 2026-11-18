#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define FFOFHOEKCBI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10F663D0)
#define FFOFHOEKCBI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10F66340)
#define FFOFHOEKCBI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10F66740)
#define FFOFHOEKCBI__CTOR_OFFSET UNITYSDK_OFFSET(0x10F666A0)

inline static constexpr unsigned int FFOFHOEKCBI_TypeDefinitionIndex = 50924;

class FFOFHOEKCBI : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* LAGLMEAICOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOFHOEKCBI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOFHOEKCBI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FFOFHOEKCBI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOFHOEKCBI_GDEOPIBNOIN_OFFSET))(this);
	}
};
