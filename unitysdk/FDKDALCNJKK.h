#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define FDKDALCNJKK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x116A88D0)
#define FDKDALCNJKK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x116A8790)
#define FDKDALCNJKK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x116A8B70)
#define FDKDALCNJKK__CTOR_OFFSET UNITYSDK_OFFSET(0x116A8A70)

inline static constexpr unsigned int FDKDALCNJKK_TypeDefinitionIndex = 90470;

class FDKDALCNJKK : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HPEFMJFCIHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKDALCNJKK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKDALCNJKK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FDKDALCNJKK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKDALCNJKK_GDEOPIBNOIN_OFFSET))(this);
	}
};
