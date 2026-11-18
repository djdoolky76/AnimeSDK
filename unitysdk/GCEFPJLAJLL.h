#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GCEFPJLAJLL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15CD1FC0)
#define GCEFPJLAJLL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15CD1E80)
#define GCEFPJLAJLL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15CD2320)
#define GCEFPJLAJLL__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD2220)

inline static constexpr unsigned int GCEFPJLAJLL_TypeDefinitionIndex = 50910;

class GCEFPJLAJLL : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::System::String*>* OPNFMCBPBLH; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEFPJLAJLL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEFPJLAJLL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GCEFPJLAJLL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEFPJLAJLL_GDEOPIBNOIN_OFFSET))(this);
	}
};
