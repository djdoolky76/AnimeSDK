#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/OHCFLICGFEF.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define KNHMILFLEMM_ACFCBJFOPLN_OFFSET UNITYSDK_OFFSET(0x15227960)
#define KNHMILFLEMM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15227010)
#define KNHMILFLEMM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15226E60)
#define KNHMILFLEMM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15227B40)
#define KNHMILFLEMM__CTOR_OFFSET UNITYSDK_OFFSET(0x152279B0)

inline static constexpr unsigned int KNHMILFLEMM_TypeDefinitionIndex = 72181;

class KNHMILFLEMM : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* EGCCIODCJIA; // 0x18
	::CPABOPKIGAL* DIKJPLPKJFC; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* ELOCGINEIEO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHMILFLEMM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHMILFLEMM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KNHMILFLEMM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHMILFLEMM_GDEOPIBNOIN_OFFSET))(this);
	}

	::OHCFLICGFEF ACFCBJFOPLN()
	{
		return ((::OHCFLICGFEF(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHMILFLEMM_ACFCBJFOPLN_OFFSET))(this);
	}
};
