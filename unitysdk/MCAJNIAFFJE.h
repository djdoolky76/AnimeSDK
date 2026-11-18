#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define MCAJNIAFFJE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15693C10)
#define MCAJNIAFFJE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15693A60)
#define MCAJNIAFFJE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15693EF0)
#define MCAJNIAFFJE_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x15693F80)
#define MCAJNIAFFJE_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x15693910)
#define MCAJNIAFFJE__CTOR_OFFSET UNITYSDK_OFFSET(0x15693DB0)

inline static constexpr unsigned int MCAJNIAFFJE_TypeDefinitionIndex = 66098;

class MCAJNIAFFJE : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* JGAPGAJELOL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAJNIAFFJE__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + MCAJNIAFFJE_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAJNIAFFJE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MCAJNIAFFJE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAJNIAFFJE_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + MCAJNIAFFJE_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
