#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GBKKGIDEOJE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10EE1110)
#define GBKKGIDEOJE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10EE0F60)
#define GBKKGIDEOJE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10EE17A0)
#define GBKKGIDEOJE__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE1660)

inline static constexpr unsigned int GBKKGIDEOJE_TypeDefinitionIndex = 69917;

class GBKKGIDEOJE : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* PMEJMLBPAMC; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* BFIPLGDBBIN; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKKGIDEOJE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKKGIDEOJE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GBKKGIDEOJE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKKGIDEOJE_GDEOPIBNOIN_OFFSET))(this);
	}
};
