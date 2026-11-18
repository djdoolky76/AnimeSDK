#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define PFFJCEMNCKC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16FA8900)
#define PFFJCEMNCKC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16FA8750)
#define PFFJCEMNCKC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16FA8BC0)
#define PFFJCEMNCKC__CTOR_OFFSET UNITYSDK_OFFSET(0x16FA8A80)

inline static constexpr unsigned int PFFJCEMNCKC_TypeDefinitionIndex = 75325;

class PFFJCEMNCKC : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* AJKNEHLMKOI; // 0x18
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFJCEMNCKC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFJCEMNCKC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PFFJCEMNCKC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFJCEMNCKC_GDEOPIBNOIN_OFFSET))(this);
	}
};
