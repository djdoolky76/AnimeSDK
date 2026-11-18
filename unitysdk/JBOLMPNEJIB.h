#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define JBOLMPNEJIB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x187279F0)
#define JBOLMPNEJIB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x187278B0)
#define JBOLMPNEJIB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18727CA0)
#define JBOLMPNEJIB__CTOR_OFFSET UNITYSDK_OFFSET(0x18727BA0)

inline static constexpr unsigned int JBOLMPNEJIB_TypeDefinitionIndex = 66014;

class JBOLMPNEJIB : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* CFLDFOBOLME; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOLMPNEJIB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOLMPNEJIB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JBOLMPNEJIB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOLMPNEJIB_GDEOPIBNOIN_OFFSET))(this);
	}
};
