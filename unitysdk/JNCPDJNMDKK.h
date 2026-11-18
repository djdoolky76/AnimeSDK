#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define JNCPDJNMDKK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1386AD00)
#define JNCPDJNMDKK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1386ABC0)
#define JNCPDJNMDKK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1386AE60)
#define JNCPDJNMDKK__CTOR_OFFSET UNITYSDK_OFFSET(0x1386AD60)

inline static constexpr unsigned int JNCPDJNMDKK_TypeDefinitionIndex = 73582;

class JNCPDJNMDKK : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* ELOCGINEIEO; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCPDJNMDKK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCPDJNMDKK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JNCPDJNMDKK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCPDJNMDKK_GDEOPIBNOIN_OFFSET))(this);
	}
};
