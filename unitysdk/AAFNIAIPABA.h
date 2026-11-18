#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define AAFNIAIPABA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16FD0880)
#define AAFNIAIPABA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16FD06D0)
#define AAFNIAIPABA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16FD0B90)
#define AAFNIAIPABA__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD0A50)

inline static constexpr unsigned int AAFNIAIPABA_TypeDefinitionIndex = 85258;

class AAFNIAIPABA : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* JKGCLPKEEDB; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* HFPPCGHDGIM; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFNIAIPABA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFNIAIPABA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AAFNIAIPABA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAFNIAIPABA_GDEOPIBNOIN_OFFSET))(this);
	}
};
