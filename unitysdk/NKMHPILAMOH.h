#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define NKMHPILAMOH_EALAOHJLMFK_OFFSET UNITYSDK_OFFSET(0xE0A77A0)
#define NKMHPILAMOH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xE0A7300)
#define NKMHPILAMOH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE0A71C0)
#define NKMHPILAMOH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE0A7A20)
#define NKMHPILAMOH_NCBFDIMBPAI_OFFSET UNITYSDK_OFFSET(0xE0A7420)
#define NKMHPILAMOH_PCJKKEDDFCM_OFFSET UNITYSDK_OFFSET(0xE0A7480)
#define NKMHPILAMOH__CTOR_OFFSET UNITYSDK_OFFSET(0xE0A7900)

inline static constexpr unsigned int NKMHPILAMOH_TypeDefinitionIndex = 75568;

class NKMHPILAMOH : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* OFCMLGGAPAM; // 0x18
	::AAMKEDEDHPD_1<::System::Int32>* IFPKMMKCBEI; // 0x20
	::AAMKEDEDHPD_1<::System::Int32>* GJBJHFBIDFD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMHPILAMOH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMHPILAMOH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NKMHPILAMOH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Int32 NCBFDIMBPAI()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NKMHPILAMOH_NCBFDIMBPAI_OFFSET))();
	}

	static ::System::Int32 PCJKKEDDFCM()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NKMHPILAMOH_PCJKKEDDFCM_OFFSET))();
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMHPILAMOH_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Int32 EALAOHJLMFK()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NKMHPILAMOH_EALAOHJLMFK_OFFSET))();
	}
};
