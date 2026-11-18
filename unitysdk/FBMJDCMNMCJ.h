#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FBMJDCMNMCJ_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0xBB37180)
#define FBMJDCMNMCJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xBB37110)
#define FBMJDCMNMCJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xBB36FD0)
#define FBMJDCMNMCJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xBB37460)
#define FBMJDCMNMCJ__CTOR_OFFSET UNITYSDK_OFFSET(0xBB37360)

inline static constexpr unsigned int FBMJDCMNMCJ_TypeDefinitionIndex = 38926;

class FBMJDCMNMCJ : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::System::String*>* PPOFKBOEDCM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMJDCMNMCJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMJDCMNMCJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FBMJDCMNMCJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMJDCMNMCJ_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FBMJDCMNMCJ_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
