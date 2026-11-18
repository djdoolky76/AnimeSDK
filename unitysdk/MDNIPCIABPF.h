#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;

#define MDNIPCIABPF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A6384E0)
#define MDNIPCIABPF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A638210)
#define MDNIPCIABPF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A638720)
#define MDNIPCIABPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A638540)

inline static constexpr unsigned int MDNIPCIABPF_TypeDefinitionIndex = 52721;

class MDNIPCIABPF : public ::MHMFINLCNFN
{
public:
	::HOFAIFGAHGJ* AJDJFKBJHHG; // 0x28
	::HOFAIFGAHGJ* LCLEGMFINPE; // 0x30
	::HOFAIFGAHGJ* DLBLJAGFNCM; // 0x38
	::AAMKEDEDHPD_1<::System::String*>* JHDIIIKHLCK; // 0x40
	::CPABOPKIGAL* OGBCLPDHONL; // 0x48
	::HOFAIFGAHGJ* EEDJCJLBILJ; // 0x50
	::HOFAIFGAHGJ* DFIAGBPACEM; // 0x58
	::HOFAIFGAHGJ* NNJHMDONEBC; // 0x60
	::CPABOPKIGAL* JMBPGMDOIAF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNIPCIABPF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNIPCIABPF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MDNIPCIABPF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNIPCIABPF_GDEOPIBNOIN_OFFSET))(this);
	}
};
