#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define NOGJOPOJDCJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x115AF5E0)
#define NOGJOPOJDCJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x115AF320)
#define NOGJOPOJDCJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x115AFEB0)
#define NOGJOPOJDCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x115AFCB0)

inline static constexpr unsigned int NOGJOPOJDCJ_TypeDefinitionIndex = 84372;

class NOGJOPOJDCJ : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* LFHGAOBKDMB; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* EIGAFDDMKJO; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* KFIHLOMGBCI; // 0x30
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x38
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x40
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGJOPOJDCJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGJOPOJDCJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NOGJOPOJDCJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGJOPOJDCJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
