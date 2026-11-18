#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FLEJEOOLFBJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xBB4B560)
#define FLEJEOOLFBJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xBB4B360)
#define FLEJEOOLFBJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xBB4B740)
#define FLEJEOOLFBJ__CTOR_OFFSET UNITYSDK_OFFSET(0xBB4B5C0)

inline static constexpr unsigned int FLEJEOOLFBJ_TypeDefinitionIndex = 47659;

class FLEJEOOLFBJ : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* OKEPGOMHOMM; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* BOHBDHAPLDN; // 0x30
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEJEOOLFBJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEJEOOLFBJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FLEJEOOLFBJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEJEOOLFBJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
