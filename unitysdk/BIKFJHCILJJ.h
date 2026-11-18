#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define BIKFJHCILJJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14C46370)
#define BIKFJHCILJJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14C461C0)
#define BIKFJHCILJJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14C469D0)
#define BIKFJHCILJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14C46890)

inline static constexpr unsigned int BIKFJHCILJJ_TypeDefinitionIndex = 76701;

class BIKFJHCILJJ : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* ILNIIJKGEFP; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFJHCILJJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFJHCILJJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BIKFJHCILJJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKFJHCILJJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
