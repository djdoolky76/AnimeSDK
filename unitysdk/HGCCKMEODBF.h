#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HGCCKMEODBF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x146F8E30)
#define HGCCKMEODBF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x146F8C80)
#define HGCCKMEODBF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x146F92A0)
#define HGCCKMEODBF__CTOR_OFFSET UNITYSDK_OFFSET(0x146F9110)

inline static constexpr unsigned int HGCCKMEODBF_TypeDefinitionIndex = 78498;

class HGCCKMEODBF : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* PLEJMLIFFHG; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::System::String*>* JCDCFFDJNFB; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCCKMEODBF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCCKMEODBF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HGCCKMEODBF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCCKMEODBF_GDEOPIBNOIN_OFFSET))(this);
	}
};
