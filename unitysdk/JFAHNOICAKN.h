#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define JFAHNOICAKN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17B221A0)
#define JFAHNOICAKN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17B21FF0)
#define JFAHNOICAKN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17B22440)
#define JFAHNOICAKN__CTOR_OFFSET UNITYSDK_OFFSET(0x17B22300)

inline static constexpr unsigned int JFAHNOICAKN_TypeDefinitionIndex = 41295;

class JFAHNOICAKN : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* ELEGHNLJEFC; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* PAMBCPNHEEC; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAHNOICAKN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAHNOICAKN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JFAHNOICAKN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAHNOICAKN_GDEOPIBNOIN_OFFSET))(this);
	}
};
