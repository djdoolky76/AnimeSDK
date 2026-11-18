#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define OLGCKGGLBDG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFB96E20)
#define OLGCKGGLBDG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFB96C20)
#define OLGCKGGLBDG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFB971A0)
#define OLGCKGGLBDG__CTOR_OFFSET UNITYSDK_OFFSET(0xFB97020)

inline static constexpr unsigned int OLGCKGGLBDG_TypeDefinitionIndex = 50926;

class OLGCKGGLBDG : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* OJOPNICAFIH; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* LOLFFPGJMML; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* APHCANJKCOF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGCKGGLBDG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGCKGGLBDG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OLGCKGGLBDG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGCKGGLBDG_GDEOPIBNOIN_OFFSET))(this);
	}
};
