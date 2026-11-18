#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define KOLOPOPMJLM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16351330)
#define KOLOPOPMJLM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x163510D0)
#define KOLOPOPMJLM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x163517A0)
#define KOLOPOPMJLM__CTOR_OFFSET UNITYSDK_OFFSET(0x163515A0)

inline static constexpr unsigned int KOLOPOPMJLM_TypeDefinitionIndex = 72285;

class KOLOPOPMJLM : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* KNBNCOFHABK; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* LGENBGJDCOM; // 0x28
	::CPABOPKIGAL* JMKHDHDEMKK; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* AKMDOCPLFBE; // 0x38
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLOPOPMJLM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLOPOPMJLM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KOLOPOPMJLM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLOPOPMJLM_GDEOPIBNOIN_OFFSET))(this);
	}
};
