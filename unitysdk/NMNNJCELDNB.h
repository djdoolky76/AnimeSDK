#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define NMNNJCELDNB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11F89CC0)
#define NMNNJCELDNB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11F89AC0)
#define NMNNJCELDNB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11F8A250)
#define NMNNJCELDNB_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x11F8A2E0)
#define NMNNJCELDNB_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x11F89970)
#define NMNNJCELDNB__CTOR_OFFSET UNITYSDK_OFFSET(0x11F8A0D0)

inline static constexpr unsigned int NMNNJCELDNB_TypeDefinitionIndex = 90990;

class NMNNJCELDNB : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* DHNBAAAPOHP; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* PGDCHJBDKIK; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* LLIEEJCEIAJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNNJCELDNB__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + NMNNJCELDNB_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNNJCELDNB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NMNNJCELDNB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNNJCELDNB_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + NMNNJCELDNB_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
