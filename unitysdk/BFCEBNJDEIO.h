#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define BFCEBNJDEIO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1854EE20)
#define BFCEBNJDEIO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1854ECE0)
#define BFCEBNJDEIO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1854F040)
#define BFCEBNJDEIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1854EF20)

inline static constexpr unsigned int BFCEBNJDEIO_TypeDefinitionIndex = 91767;

class BFCEBNJDEIO : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* POOKKBNANGB; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* LLEJGHKCANJ; // 0x20
	::AAMKEDEDHPD_1<::System::Int32>* FDPMDEJANJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCEBNJDEIO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCEBNJDEIO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BFCEBNJDEIO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCEBNJDEIO_GDEOPIBNOIN_OFFSET))(this);
	}
};
