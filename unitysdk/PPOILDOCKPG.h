#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PPOILDOCKPG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1D63B3F0)
#define PPOILDOCKPG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1D63B240)
#define PPOILDOCKPG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1D63B790)
#define PPOILDOCKPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D63B650)

inline static constexpr unsigned int PPOILDOCKPG_TypeDefinitionIndex = 88971;

class PPOILDOCKPG : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* GJIGGAONIDE; // 0x20
	::KCMIFNGABDC_1<::System::String*>* HOPNPPIOIMM; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOILDOCKPG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOILDOCKPG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PPOILDOCKPG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOILDOCKPG_GDEOPIBNOIN_OFFSET))(this);
	}
};
