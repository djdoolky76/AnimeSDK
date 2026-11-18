#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define IOLAGGLDCHB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x160C0D80)
#define IOLAGGLDCHB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x160C0B20)
#define IOLAGGLDCHB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x160C1370)
#define IOLAGGLDCHB__CTOR_OFFSET UNITYSDK_OFFSET(0x160C11B0)

inline static constexpr unsigned int IOLAGGLDCHB_TypeDefinitionIndex = 46810;

class IOLAGGLDCHB : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x20
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* NCDNKEOLKFD; // 0x28
	::KCMIFNGABDC_1<::System::String*>* AFFNAHDCFJE; // 0x30
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x38
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLAGGLDCHB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLAGGLDCHB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IOLAGGLDCHB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLAGGLDCHB_GDEOPIBNOIN_OFFSET))(this);
	}
};
