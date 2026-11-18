#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define MDHJDEMNLAC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15927050)
#define MDHJDEMNLAC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15926EA0)
#define MDHJDEMNLAC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x159272D0)
#define MDHJDEMNLAC__CTOR_OFFSET UNITYSDK_OFFSET(0x15927190)

inline static constexpr unsigned int MDHJDEMNLAC_TypeDefinitionIndex = 86585;

class MDHJDEMNLAC : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* JNLHJHOBEHI; // 0x20
	::KCMIFNGABDC_1<::System::String*>* IPKLBPJHOIG; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHJDEMNLAC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHJDEMNLAC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MDHJDEMNLAC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHJDEMNLAC_GDEOPIBNOIN_OFFSET))(this);
	}
};
