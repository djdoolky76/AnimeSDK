#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define AJMPOEMIHBH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12D008F0)
#define AJMPOEMIHBH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12D007B0)
#define AJMPOEMIHBH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12D00A40)
#define AJMPOEMIHBH__CTOR_OFFSET UNITYSDK_OFFSET(0x12D00940)

inline static constexpr unsigned int AJMPOEMIHBH_TypeDefinitionIndex = 91390;

class AJMPOEMIHBH : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMPOEMIHBH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMPOEMIHBH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AJMPOEMIHBH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMPOEMIHBH_GDEOPIBNOIN_OFFSET))(this);
	}
};
