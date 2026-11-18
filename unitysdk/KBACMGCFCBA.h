#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define KBACMGCFCBA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13C48520)
#define KBACMGCFCBA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13C48370)
#define KBACMGCFCBA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13C48A80)
#define KBACMGCFCBA__CTOR_OFFSET UNITYSDK_OFFSET(0x13C48940)

inline static constexpr unsigned int KBACMGCFCBA_TypeDefinitionIndex = 91012;

class KBACMGCFCBA : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* HCDMGOIIDDK; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* CDGEMJKPNPA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACMGCFCBA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACMGCFCBA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KBACMGCFCBA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBACMGCFCBA_GDEOPIBNOIN_OFFSET))(this);
	}
};
