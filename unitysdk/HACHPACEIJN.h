#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HACHPACEIJN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16CDD710)
#define HACHPACEIJN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16CDD5D0)
#define HACHPACEIJN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16CDD980)
#define HACHPACEIJN__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDD880)

inline static constexpr unsigned int HACHPACEIJN_TypeDefinitionIndex = 87620;

class HACHPACEIJN : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* FNFDOGNGLGN; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HACHPACEIJN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HACHPACEIJN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HACHPACEIJN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HACHPACEIJN_GDEOPIBNOIN_OFFSET))(this);
	}
};
