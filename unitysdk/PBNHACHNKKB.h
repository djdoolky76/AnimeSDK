#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PBNHACHNKKB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x173127C0)
#define PBNHACHNKKB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17312610)
#define PBNHACHNKKB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17312CF0)
#define PBNHACHNKKB__CTOR_OFFSET UNITYSDK_OFFSET(0x17312BB0)

inline static constexpr unsigned int PBNHACHNKKB_TypeDefinitionIndex = 87095;

class PBNHACHNKKB : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x18
	::KCMIFNGABDC_1<::System::String*>* IEIFDJCLFPK; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNHACHNKKB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNHACHNKKB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PBNHACHNKKB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNHACHNKKB_GDEOPIBNOIN_OFFSET))(this);
	}
};
