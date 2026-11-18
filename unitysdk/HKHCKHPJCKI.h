#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;

#define HKHCKHPJCKI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15B63E80)
#define HKHCKHPJCKI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15B63D40)
#define HKHCKHPJCKI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15B64050)
#define HKHCKHPJCKI__CTOR_OFFSET UNITYSDK_OFFSET(0x15B63F50)

inline static constexpr unsigned int HKHCKHPJCKI_TypeDefinitionIndex = 60245;

class HKHCKHPJCKI : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::AAMKEDEDHPD_1<::System::Int32>* MEJABOMNNGN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHCKHPJCKI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHCKHPJCKI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HKHCKHPJCKI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHCKHPJCKI_GDEOPIBNOIN_OFFSET))(this);
	}
};
