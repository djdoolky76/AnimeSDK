#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace MoleMole { class UIWindowController; }
template <typename T> class KCMIFNGABDC_1;

#define KCGGEECLBEP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1763CF00)
#define KCGGEECLBEP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1763CDC0)
#define KCGGEECLBEP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1763DCC0)
#define KCGGEECLBEP_NAABPKGCJAF_OFFSET UNITYSDK_OFFSET(0x1763DA40)
#define KCGGEECLBEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1763DBC0)

inline static constexpr unsigned int KCGGEECLBEP_TypeDefinitionIndex = 83739;

class KCGGEECLBEP : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* FJMNMKPGFIF; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGGEECLBEP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGGEECLBEP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KCGGEECLBEP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGGEECLBEP_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void NAABPKGCJAF(::MoleMole::UIWindowController* NCIMBHDKIJM, ::Foundation::ViewObject::ViewObjectHandle JEJJLALJJKH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + KCGGEECLBEP_NAABPKGCJAF_OFFSET))(this, NCIMBHDKIJM, JEJJLALJJKH);
	}
};
