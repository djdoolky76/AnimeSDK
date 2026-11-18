#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define PFJLPPFAMLI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x178C48E0)
#define PFJLPPFAMLI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x178C4850)
#define PFJLPPFAMLI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x178C4AE0)
#define PFJLPPFAMLI__CTOR_OFFSET UNITYSDK_OFFSET(0x178C4A40)

inline static constexpr unsigned int PFJLPPFAMLI_TypeDefinitionIndex = 90309;

class PFJLPPFAMLI : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* GPFBJFMHOHO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJLPPFAMLI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJLPPFAMLI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PFJLPPFAMLI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJLPPFAMLI_GDEOPIBNOIN_OFFSET))(this);
	}
};
