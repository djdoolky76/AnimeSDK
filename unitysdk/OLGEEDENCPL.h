#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define OLGEEDENCPL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFD8EA90)
#define OLGEEDENCPL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFD8E9B0)
#define OLGEEDENCPL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFD8EC40)
#define OLGEEDENCPL__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8EBA0)

inline static constexpr unsigned int OLGEEDENCPL_TypeDefinitionIndex = 40566;

class OLGEEDENCPL : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* PICDFHGCJOK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGEEDENCPL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGEEDENCPL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OLGEEDENCPL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGEEDENCPL_GDEOPIBNOIN_OFFSET))(this);
	}
};
