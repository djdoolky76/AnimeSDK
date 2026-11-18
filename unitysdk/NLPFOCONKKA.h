#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define NLPFOCONKKA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xE0A8EC0)
#define NLPFOCONKKA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE0A8D80)
#define NLPFOCONKKA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE0A94D0)
#define NLPFOCONKKA__CTOR_OFFSET UNITYSDK_OFFSET(0xE0A93D0)

inline static constexpr unsigned int NLPFOCONKKA_TypeDefinitionIndex = 51821;

class NLPFOCONKKA : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* MGCMLBHOELA; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPFOCONKKA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPFOCONKKA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NLPFOCONKKA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPFOCONKKA_GDEOPIBNOIN_OFFSET))(this);
	}
};
