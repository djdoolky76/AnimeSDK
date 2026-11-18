#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define CPFEBIAPPCM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1204B9C0)
#define CPFEBIAPPCM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1204B580)
#define CPFEBIAPPCM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1204C550)
#define CPFEBIAPPCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1204C250)

inline static constexpr unsigned int CPFEBIAPPCM_TypeDefinitionIndex = 76949;

class CPFEBIAPPCM : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* ODJMIMPGPFC; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* ELCMOJGDOGP; // 0x30
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* MDBBNPHHDKM; // 0x40
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* GILBDBEGCFL; // 0x48
	::KCMIFNGABDC_1<::System::Boolean>* CFNOEEGCIOM; // 0x50
	::KCMIFNGABDC_1<::System::Boolean>* HIMDGELKGDG; // 0x58
	::KCMIFNGABDC_1<::System::Boolean>* HJIKENGPMKD; // 0x60
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JAIIPLHKGME; // 0x68
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* FDHDFJNOKOB; // 0x70
	::KCMIFNGABDC_1<::System::Boolean>* EAKCCBILBJM; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFEBIAPPCM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFEBIAPPCM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CPFEBIAPPCM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFEBIAPPCM_GDEOPIBNOIN_OFFSET))(this);
	}
};
