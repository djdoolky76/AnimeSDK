#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define NKIMFJIKNML_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x105C6550)
#define NKIMFJIKNML_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x105C63A0)
#define NKIMFJIKNML_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x105C6830)
#define NKIMFJIKNML__CTOR_OFFSET UNITYSDK_OFFSET(0x105C66A0)

inline static constexpr unsigned int NKIMFJIKNML_TypeDefinitionIndex = 83237;

class NKIMFJIKNML : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* DCPMEBHKAEA; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::CPABOPKIGAL* IGLBCCJGBLO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIMFJIKNML__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIMFJIKNML_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NKIMFJIKNML_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIMFJIKNML_GDEOPIBNOIN_OFFSET))(this);
	}
};
