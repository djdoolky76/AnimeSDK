#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HFMKKILPJJN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x110139E0)
#define HFMKKILPJJN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x110136C0)
#define HFMKKILPJJN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11014100)
#define HFMKKILPJJN_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x11014190)
#define HFMKKILPJJN_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x11013570)
#define HFMKKILPJJN__CTOR_OFFSET UNITYSDK_OFFSET(0x11013E80)

inline static constexpr unsigned int HFMKKILPJJN_TypeDefinitionIndex = 87649;

class HFMKKILPJJN : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* EECEKEPKHCC; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* KOMABFMGLFF; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* MIAJIKCHBNA; // 0x38
	::CPABOPKIGAL* AIMMIHEEOAO; // 0x40
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* HIBANBCJEMD; // 0x48
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* GKFGJLGPIMP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMKKILPJJN__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + HFMKKILPJJN_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMKKILPJJN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HFMKKILPJJN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMKKILPJJN_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + HFMKKILPJJN_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
