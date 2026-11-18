#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define HDHNAPNIBCO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16F245F0)
#define HDHNAPNIBCO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16F244B0)
#define HDHNAPNIBCO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16F24820)
#define HDHNAPNIBCO__CTOR_OFFSET UNITYSDK_OFFSET(0x16F24720)

inline static constexpr unsigned int HDHNAPNIBCO_TypeDefinitionIndex = 58922;

class HDHNAPNIBCO : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JGGNCCPFDNH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHNAPNIBCO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHNAPNIBCO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HDHNAPNIBCO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHNAPNIBCO_GDEOPIBNOIN_OFFSET))(this);
	}
};
