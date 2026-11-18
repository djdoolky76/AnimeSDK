#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define BDIFGBFHKBO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14C35AC0)
#define BDIFGBFHKBO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14C35910)
#define BDIFGBFHKBO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14C36000)
#define BDIFGBFHKBO__CTOR_OFFSET UNITYSDK_OFFSET(0x14C35EC0)

inline static constexpr unsigned int BDIFGBFHKBO_TypeDefinitionIndex = 77180;

class BDIFGBFHKBO : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x20
	::KCMIFNGABDC_1<::System::Single>* NOFPAHEIALI; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIFGBFHKBO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIFGBFHKBO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BDIFGBFHKBO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIFGBFHKBO_GDEOPIBNOIN_OFFSET))(this);
	}
};
