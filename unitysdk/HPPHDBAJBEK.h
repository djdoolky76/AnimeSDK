#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HPPHDBAJBEK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xEBA4310)
#define HPPHDBAJBEK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xEBA4050)
#define HPPHDBAJBEK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xEBA49B0)
#define HPPHDBAJBEK_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0xEBA4920)
#define HPPHDBAJBEK_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0xEBA3E70)
#define HPPHDBAJBEK__CTOR_OFFSET UNITYSDK_OFFSET(0xEBA4720)

inline static constexpr unsigned int HPPHDBAJBEK_TypeDefinitionIndex = 60971;

class HPPHDBAJBEK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* IPHFEENNJDK; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* CABAPLGCFKE; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JGGNCCPFDNH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* MBDHHLFFEKG; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* GJNBFDLIHFD; // 0x38
	::CPABOPKIGAL* MMFNFINOFPN; // 0x40
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPHDBAJBEK__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + HPPHDBAJBEK_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPHDBAJBEK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HPPHDBAJBEK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + HPPHDBAJBEK_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPHDBAJBEK_GDEOPIBNOIN_OFFSET))(this);
	}
};
