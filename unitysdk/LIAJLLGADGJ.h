#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define LIAJLLGADGJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11F13930)
#define LIAJLLGADGJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11F13780)
#define LIAJLLGADGJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11F13C30)
#define LIAJLLGADGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11F13AF0)

inline static constexpr unsigned int LIAJLLGADGJ_TypeDefinitionIndex = 73774;

class LIAJLLGADGJ : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* BOHBDHAPLDN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAJLLGADGJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAJLLGADGJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LIAJLLGADGJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAJLLGADGJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
