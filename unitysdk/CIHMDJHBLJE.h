#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CIHMDJHBLJE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1970C8B0)
#define CIHMDJHBLJE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1970C6B0)
#define CIHMDJHBLJE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1970D060)
#define CIHMDJHBLJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1970CEC0)

inline static constexpr unsigned int CIHMDJHBLJE_TypeDefinitionIndex = 39085;

class CIHMDJHBLJE : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Single>* DOJCEDCELKP; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* GLAAOKKDOMF; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* CDOIJJAFFBG; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* CPABEAHEGJM; // 0x30
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* COCHCJCLKOK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHMDJHBLJE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHMDJHBLJE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CIHMDJHBLJE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHMDJHBLJE_GDEOPIBNOIN_OFFSET))(this);
	}
};
