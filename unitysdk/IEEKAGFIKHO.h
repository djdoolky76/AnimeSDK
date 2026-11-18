#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define IEEKAGFIKHO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15EAA600)
#define IEEKAGFIKHO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15EAA4C0)
#define IEEKAGFIKHO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15EAA880)
#define IEEKAGFIKHO__CTOR_OFFSET UNITYSDK_OFFSET(0x15EAA780)

inline static constexpr unsigned int IEEKAGFIKHO_TypeDefinitionIndex = 44148;

class IEEKAGFIKHO : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* JIEFDIANKAH; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEKAGFIKHO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEKAGFIKHO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IEEKAGFIKHO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEKAGFIKHO_GDEOPIBNOIN_OFFSET))(this);
	}
};
