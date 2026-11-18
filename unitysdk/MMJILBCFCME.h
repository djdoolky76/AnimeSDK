#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define MMJILBCFCME_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1302B560)
#define MMJILBCFCME_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1302B490)
#define MMJILBCFCME_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1302BCA0)
#define MMJILBCFCME__CTOR_OFFSET UNITYSDK_OFFSET(0x1302BBB0)

inline static constexpr unsigned int MMJILBCFCME_TypeDefinitionIndex = 39186;

class MMJILBCFCME : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* EJLELLBHBLA; // 0x18
	::KCMIFNGABDC_1<::System::String*>* GNJKHDBFAFL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJILBCFCME__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJILBCFCME_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MMJILBCFCME_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJILBCFCME_GDEOPIBNOIN_OFFSET))(this);
	}
};
