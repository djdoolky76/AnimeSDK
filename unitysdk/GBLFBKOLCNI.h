#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define GBLFBKOLCNI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x141275E0)
#define GBLFBKOLCNI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14127510)
#define GBLFBKOLCNI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14127720)
#define GBLFBKOLCNI__CTOR_OFFSET UNITYSDK_OFFSET(0x14127630)

inline static constexpr unsigned int GBLFBKOLCNI_TypeDefinitionIndex = 68688;

class GBLFBKOLCNI : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* JOECHPCHKFM; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* CNFGPELOPNM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLFBKOLCNI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLFBKOLCNI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GBLFBKOLCNI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLFBKOLCNI_GDEOPIBNOIN_OFFSET))(this);
	}
};
