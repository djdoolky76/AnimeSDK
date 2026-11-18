#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class EBNPOEHOAGD;
class FKNKBAOGJOA;
template <typename T> class KCMIFNGABDC_1;

#define CPHPPAIJGDM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x145E1630)
#define CPHPPAIJGDM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x145E14F0)
#define CPHPPAIJGDM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x145E1EB0)
#define CPHPPAIJGDM__CTOR_OFFSET UNITYSDK_OFFSET(0x145E1E00)

inline static constexpr unsigned int CPHPPAIJGDM_TypeDefinitionIndex = 42252;

class CPHPPAIJGDM : public ::CGJEMKCKIJG
{
public:
	::EBNPOEHOAGD* ACDKKCINLON; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* MLNKCNJEOMI; // 0x20
	::FKNKBAOGJOA* HHGILNNMNAK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHPPAIJGDM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHPPAIJGDM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CPHPPAIJGDM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHPPAIJGDM_GDEOPIBNOIN_OFFSET))(this);
	}
};
