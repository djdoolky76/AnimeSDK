#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define CADMKBEODOB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x115281C0)
#define CADMKBEODOB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11527FC0)
#define CADMKBEODOB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11528500)
#define CADMKBEODOB__CTOR_OFFSET UNITYSDK_OFFSET(0x11528380)

inline static constexpr unsigned int CADMKBEODOB_TypeDefinitionIndex = 73985;

class CADMKBEODOB : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* OKEPGOMHOMM; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* CGDDAIOFHPN; // 0x30
	::KCMIFNGABDC_1<::System::String*>* MFOIHNFNKKG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMKBEODOB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMKBEODOB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CADMKBEODOB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMKBEODOB_GDEOPIBNOIN_OFFSET))(this);
	}
};
