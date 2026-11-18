#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;

#define KJDEKDIAFDG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15B94330)
#define KJDEKDIAFDG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15B941F0)
#define KJDEKDIAFDG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15B94510)
#define KJDEKDIAFDG__CTOR_OFFSET UNITYSDK_OFFSET(0x15B94410)

inline static constexpr unsigned int KJDEKDIAFDG_TypeDefinitionIndex = 80334;

class KJDEKDIAFDG : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* OFCDHOJCFMN; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDEKDIAFDG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDEKDIAFDG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KJDEKDIAFDG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDEKDIAFDG_GDEOPIBNOIN_OFFSET))(this);
	}
};
