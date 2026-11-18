#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define HCFAIGBLHPI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17A36CA0)
#define HCFAIGBLHPI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17A36C10)
#define HCFAIGBLHPI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17A370A0)
#define HCFAIGBLHPI__CTOR_OFFSET UNITYSDK_OFFSET(0x17A37000)

inline static constexpr unsigned int HCFAIGBLHPI_TypeDefinitionIndex = 60058;

class HCFAIGBLHPI : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* KNFDDBPELMJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFAIGBLHPI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFAIGBLHPI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HCFAIGBLHPI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFAIGBLHPI_GDEOPIBNOIN_OFFSET))(this);
	}
};
