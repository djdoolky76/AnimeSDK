#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define GKJFHONHAKO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15B25E00)
#define GKJFHONHAKO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15B25D30)
#define GKJFHONHAKO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15B26140)
#define GKJFHONHAKO__CTOR_OFFSET UNITYSDK_OFFSET(0x15B26050)

inline static constexpr unsigned int GKJFHONHAKO_TypeDefinitionIndex = 46042;

class GKJFHONHAKO : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* ELEGHNLJEFC; // 0x18
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJFHONHAKO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJFHONHAKO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GKJFHONHAKO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJFHONHAKO_GDEOPIBNOIN_OFFSET))(this);
	}
};
