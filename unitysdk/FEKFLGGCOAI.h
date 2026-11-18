#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define FEKFLGGCOAI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1713DCF0)
#define FEKFLGGCOAI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1713DB40)
#define FEKFLGGCOAI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1713E060)
#define FEKFLGGCOAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1713DF20)

inline static constexpr unsigned int FEKFLGGCOAI_TypeDefinitionIndex = 60837;

class FEKFLGGCOAI : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* JOECHPCHKFM; // 0x18
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* OILHOKBIMAH; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKFLGGCOAI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKFLGGCOAI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FEKFLGGCOAI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKFLGGCOAI_GDEOPIBNOIN_OFFSET))(this);
	}
};
