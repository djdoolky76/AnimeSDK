#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define AKANCNOAKAJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17CD9D40)
#define AKANCNOAKAJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17CD9C60)
#define AKANCNOAKAJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17CDA040)
#define AKANCNOAKAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD9F50)

inline static constexpr unsigned int AKANCNOAKAJ_TypeDefinitionIndex = 41291;

class AKANCNOAKAJ : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* IFMKKLKCLOO; // 0x18
	::AAMKEDEDHPD_1<::System::Int32>* CMLEPIJFPKH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANCNOAKAJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANCNOAKAJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AKANCNOAKAJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANCNOAKAJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
