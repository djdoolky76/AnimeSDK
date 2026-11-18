#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NJEIOPJKEGH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xE5831E0)
#define NJEIOPJKEGH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE582F20)
#define NJEIOPJKEGH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE583900)
#define NJEIOPJKEGH__CTOR_OFFSET UNITYSDK_OFFSET(0xE583700)

inline static constexpr unsigned int NJEIOPJKEGH_TypeDefinitionIndex = 82800;

class NJEIOPJKEGH : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* NCOCNPDNFLL; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* DCMCBFOBJMD; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JBNEIAECMPG; // 0x30
	::KCMIFNGABDC_1<::System::String*>* JJEKFMNOGEE; // 0x38
	::KCMIFNGABDC_1<::System::String*>* ABMCDKLBDGE; // 0x40
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIOPJKEGH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIOPJKEGH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NJEIOPJKEGH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIOPJKEGH_GDEOPIBNOIN_OFFSET))(this);
	}
};
