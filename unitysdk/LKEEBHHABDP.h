#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define LKEEBHHABDP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14DBC9B0)
#define LKEEBHHABDP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14DBC920)
#define LKEEBHHABDP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14DBCBD0)
#define LKEEBHHABDP__CTOR_OFFSET UNITYSDK_OFFSET(0x14DBCB30)

inline static constexpr unsigned int LKEEBHHABDP_TypeDefinitionIndex = 59453;

class LKEEBHHABDP : public ::CGJEMKCKIJG
{
public:
	// static const ::System::String* CMBLMOGHCHA; // 0x0
	::AAMKEDEDHPD_1<::System::Int32>* BOBHGKFBPOE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKEEBHHABDP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKEEBHHABDP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LKEEBHHABDP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKEEBHHABDP_GDEOPIBNOIN_OFFSET))(this);
	}
};
