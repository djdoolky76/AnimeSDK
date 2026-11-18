#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define HCEMILJJHIM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14932950)
#define HCEMILJJHIM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x149328C0)
#define HCEMILJJHIM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14932A40)
#define HCEMILJJHIM__CTOR_OFFSET UNITYSDK_OFFSET(0x149329A0)

inline static constexpr unsigned int HCEMILJJHIM_TypeDefinitionIndex = 82556;

class HCEMILJJHIM : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* JPIHKNPJKPH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEMILJJHIM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEMILJJHIM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HCEMILJJHIM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEMILJJHIM_GDEOPIBNOIN_OFFSET))(this);
	}
};
