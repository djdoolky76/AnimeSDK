#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define KAMDEPKHFEO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18A2CAE0)
#define KAMDEPKHFEO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18A2C9A0)
#define KAMDEPKHFEO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18A2CD70)
#define KAMDEPKHFEO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A2CC70)

inline static constexpr unsigned int KAMDEPKHFEO_TypeDefinitionIndex = 55574;

class KAMDEPKHFEO : public ::CGJEMKCKIJG
{
public:
	// static const ::System::String* NOMHBCCKDNE; // 0x0
	::KCMIFNGABDC_1<::System::Boolean>* CGDDAIOFHPN; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMDEPKHFEO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMDEPKHFEO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KAMDEPKHFEO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMDEPKHFEO_GDEOPIBNOIN_OFFSET))(this);
	}
};
