#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GOOPIHEGOAJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15B33080)
#define GOOPIHEGOAJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15B32E80)
#define GOOPIHEGOAJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15B335E0)
#define GOOPIHEGOAJ_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x15B33670)
#define GOOPIHEGOAJ_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x15B32D30)
#define GOOPIHEGOAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15B33460)

inline static constexpr unsigned int GOOPIHEGOAJ_TypeDefinitionIndex = 85300;

class GOOPIHEGOAJ : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* IHLDIOOCHEM; // 0x20
	::KCMIFNGABDC_1<::System::String*>* CBNONNHLPNI; // 0x28
	::KCMIFNGABDC_1<::System::String*>* JMGCJNPNEHH; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPIHEGOAJ__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + GOOPIHEGOAJ_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPIHEGOAJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GOOPIHEGOAJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPIHEGOAJ_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + GOOPIHEGOAJ_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
