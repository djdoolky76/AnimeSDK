#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define AMGAOLIOAJM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14517250)
#define AMGAOLIOAJM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14517180)
#define AMGAOLIOAJM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14517550)
#define AMGAOLIOAJM__CTOR_OFFSET UNITYSDK_OFFSET(0x14517460)

inline static constexpr unsigned int AMGAOLIOAJM_TypeDefinitionIndex = 71098;

class AMGAOLIOAJM : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* HHGILNNMNAK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGAOLIOAJM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGAOLIOAJM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AMGAOLIOAJM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGAOLIOAJM_GDEOPIBNOIN_OFFSET))(this);
	}
};
