#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class IOEFCGGLDKK;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CHJOPOGDJHL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16957AE0)
#define CHJOPOGDJHL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16957A10)
#define CHJOPOGDJHL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16957E20)
#define CHJOPOGDJHL__CTOR_OFFSET UNITYSDK_OFFSET(0x16957D30)

inline static constexpr unsigned int CHJOPOGDJHL_TypeDefinitionIndex = 49201;

class CHJOPOGDJHL : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x18
	::KCMIFNGABDC_1<::IOEFCGGLDKK*>* MFFALNGOFJI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOPOGDJHL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOPOGDJHL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CHJOPOGDJHL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJOPOGDJHL_GDEOPIBNOIN_OFFSET))(this);
	}
};
