#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;

#define NLCBNPDHMEC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16B85F50)
#define NLCBNPDHMEC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16B85EC0)
#define NLCBNPDHMEC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16B86110)
#define NLCBNPDHMEC__CTOR_OFFSET UNITYSDK_OFFSET(0x16B86070)

inline static constexpr unsigned int NLCBNPDHMEC_TypeDefinitionIndex = 69907;

class NLCBNPDHMEC : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* JAGDPCKAAFH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCBNPDHMEC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCBNPDHMEC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NLCBNPDHMEC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCBNPDHMEC_GDEOPIBNOIN_OFFSET))(this);
	}
};
