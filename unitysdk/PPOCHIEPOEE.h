#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PPOCHIEPOEE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1EBC0B10)
#define PPOCHIEPOEE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1EBC0730)
#define PPOCHIEPOEE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1EBC0DD0)
#define PPOCHIEPOEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC0B70)

inline static constexpr unsigned int PPOCHIEPOEE_TypeDefinitionIndex = 45635;

class PPOCHIEPOEE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* LGOOKHKCNBP; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* HLMGLKNCLOB; // 0x30
	::KCMIFNGABDC_1<::System::String*>* JEPNNGCILHP; // 0x38
	::HOFAIFGAHGJ* AAODAPGMJIO; // 0x40
	::HOFAIFGAHGJ* LMLBAMFHPLL; // 0x48
	::KCMIFNGABDC_1<::System::String*>* PAMOPLPBHKE; // 0x50
	::KCMIFNGABDC_1<::System::String*>* ANFMAHDICMM; // 0x58
	::KCMIFNGABDC_1<::System::Boolean>* OPIOEKPNDGN; // 0x60
	::KCMIFNGABDC_1<::System::String*>* JJGDOBHCCHF; // 0x68
	::KCMIFNGABDC_1<::System::String*>* NKDHHMFJNLM; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOCHIEPOEE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOCHIEPOEE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PPOCHIEPOEE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOCHIEPOEE_GDEOPIBNOIN_OFFSET))(this);
	}
};
