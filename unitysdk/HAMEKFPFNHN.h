#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HAMEKFPFNHN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15D93B00)
#define HAMEKFPFNHN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15D93900)
#define HAMEKFPFNHN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15D945C0)
#define HAMEKFPFNHN_NKCAEBAFDIG_OFFSET UNITYSDK_OFFSET(0x15D943F0)
#define HAMEKFPFNHN__CTOR_OFFSET UNITYSDK_OFFSET(0x15D94440)

inline static constexpr unsigned int HAMEKFPFNHN_TypeDefinitionIndex = 78310;

class HAMEKFPFNHN : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::System::String*>* PPOFKBOEDCM; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HHMPFIANODF; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HPEFMJFCIHN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMEKFPFNHN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMEKFPFNHN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HAMEKFPFNHN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::String* NKCAEBAFDIG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::String*(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HAMEKFPFNHN_NKCAEBAFDIG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMEKFPFNHN_GDEOPIBNOIN_OFFSET))(this);
	}
};
