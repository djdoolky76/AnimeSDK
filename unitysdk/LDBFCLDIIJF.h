#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define LDBFCLDIIJF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18655FF0)
#define LDBFCLDIIJF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18655EB0)
#define LDBFCLDIIJF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18656620)
#define LDBFCLDIIJF__CTOR_OFFSET UNITYSDK_OFFSET(0x18656520)

inline static constexpr unsigned int LDBFCLDIIJF_TypeDefinitionIndex = 81346;

class LDBFCLDIIJF : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::KCMIFNGABDC_1<::System::String*>* OPNFMCBPBLH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBFCLDIIJF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBFCLDIIJF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LDBFCLDIIJF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBFCLDIIJF_GDEOPIBNOIN_OFFSET))(this);
	}
};
