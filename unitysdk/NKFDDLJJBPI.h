#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NKFDDLJJBPI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10D7D8C0)
#define NKFDDLJJBPI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10D7D830)
#define NKFDDLJJBPI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10D7DB90)
#define NKFDDLJJBPI__CTOR_OFFSET UNITYSDK_OFFSET(0x10D7DAF0)

inline static constexpr unsigned int NKFDDLJJBPI_TypeDefinitionIndex = 48696;

class NKFDDLJJBPI : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* FMMECCNEOCO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKFDDLJJBPI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKFDDLJJBPI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NKFDDLJJBPI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKFDDLJJBPI_GDEOPIBNOIN_OFFSET))(this);
	}
};
