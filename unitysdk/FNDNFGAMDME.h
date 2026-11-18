#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FNDNFGAMDME_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x14110820)
#define FNDNFGAMDME_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x141107B0)
#define FNDNFGAMDME_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14110550)
#define FNDNFGAMDME_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14110D50)
#define FNDNFGAMDME__CTOR_OFFSET UNITYSDK_OFFSET(0x14110B90)

inline static constexpr unsigned int FNDNFGAMDME_TypeDefinitionIndex = 67477;

class FNDNFGAMDME : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JGGNCCPFDNH; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* OKEPGOMHOMM; // 0x30
	::KCMIFNGABDC_1<::System::String*>* JHEPMADEOIN; // 0x38
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDNFGAMDME__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDNFGAMDME_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FNDNFGAMDME_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FNDNFGAMDME_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDNFGAMDME_GDEOPIBNOIN_OFFSET))(this);
	}
};
