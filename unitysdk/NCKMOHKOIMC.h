#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NCKMOHKOIMC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1157F4C0)
#define NCKMOHKOIMC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1157F310)
#define NCKMOHKOIMC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1157F870)
#define NCKMOHKOIMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1157F730)

inline static constexpr unsigned int NCKMOHKOIMC_TypeDefinitionIndex = 50732;

class NCKMOHKOIMC : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::System::String*>* NGMPAIHFBMJ; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKMOHKOIMC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKMOHKOIMC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NCKMOHKOIMC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKMOHKOIMC_GDEOPIBNOIN_OFFSET))(this);
	}
};
