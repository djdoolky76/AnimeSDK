#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;

#define NONDANEDMNE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13173B10)
#define NONDANEDMNE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x131739D0)
#define NONDANEDMNE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13173CE0)
#define NONDANEDMNE__CTOR_OFFSET UNITYSDK_OFFSET(0x13173BE0)

inline static constexpr unsigned int NONDANEDMNE_TypeDefinitionIndex = 87106;

class NONDANEDMNE : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::String*>* CFLDFOBOLME; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONDANEDMNE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONDANEDMNE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NONDANEDMNE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONDANEDMNE_GDEOPIBNOIN_OFFSET))(this);
	}
};
