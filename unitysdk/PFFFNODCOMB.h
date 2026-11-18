#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PFFFNODCOMB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A7EF000)
#define PFFFNODCOMB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A7EEE50)
#define PFFFNODCOMB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A7EF4E0)
#define PFFFNODCOMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EF3A0)

inline static constexpr unsigned int PFFFNODCOMB_TypeDefinitionIndex = 80342;

class PFFFNODCOMB : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* KIIDLHMOMLC; // 0x18
	::KCMIFNGABDC_1<::System::String*>* DCPEBJMPODI; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFFNODCOMB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFFNODCOMB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PFFFNODCOMB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFFNODCOMB_GDEOPIBNOIN_OFFSET))(this);
	}
};
