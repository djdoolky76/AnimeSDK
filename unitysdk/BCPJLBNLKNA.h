#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define BCPJLBNLKNA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x143826A0)
#define BCPJLBNLKNA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14382380)
#define BCPJLBNLKNA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14383270)
#define BCPJLBNLKNA__CTOR_OFFSET UNITYSDK_OFFSET(0x14383040)

inline static constexpr unsigned int BCPJLBNLKNA_TypeDefinitionIndex = 72075;

class BCPJLBNLKNA : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* KHDNJCMPDOF; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* GPJCGPEGFIG; // 0x20
	::KCMIFNGABDC_1<::System::String*>* OPNFMCBPBLH; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Single>*>* MFLLMOHCONB; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* BPJNDNHDFDH; // 0x40
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x48
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Boolean>*>* CKMLCIGGLLH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPJLBNLKNA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPJLBNLKNA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BCPJLBNLKNA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPJLBNLKNA_GDEOPIBNOIN_OFFSET))(this);
	}
};
