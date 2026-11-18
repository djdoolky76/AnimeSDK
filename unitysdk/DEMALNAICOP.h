#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DEMALNAICOP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x149A0E80)
#define DEMALNAICOP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x149A0CD0)
#define DEMALNAICOP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x149A1380)
#define DEMALNAICOP__CTOR_OFFSET UNITYSDK_OFFSET(0x149A1240)

inline static constexpr unsigned int DEMALNAICOP_TypeDefinitionIndex = 64417;

class DEMALNAICOP : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMALNAICOP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMALNAICOP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DEMALNAICOP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMALNAICOP_GDEOPIBNOIN_OFFSET))(this);
	}
};
