#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class HGIDAMPAOGK;
class OKAFHOGLKIC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class LJHFMILANJA_1;

#define APKEHDDPGOD_APPCLMIANHI_OFFSET UNITYSDK_OFFSET(0x134EEE30)
#define APKEHDDPGOD_COKGLHCGLIM_OFFSET UNITYSDK_OFFSET(0x134EF220)
#define APKEHDDPGOD_HJHAJPNNHLC_OFFSET UNITYSDK_OFFSET(0x134EF570)
#define APKEHDDPGOD_KHHDPMBLBHG_OFFSET UNITYSDK_OFFSET(0x134EF3A0)
#define APKEHDDPGOD_MJCJKPFIIIK_OFFSET UNITYSDK_OFFSET(0x134EF240)
#define APKEHDDPGOD_OKKKBMDAJJP_OFFSET UNITYSDK_OFFSET(0x134EF1F0)
#define APKEHDDPGOD_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x134EF140)
#define APKEHDDPGOD_PCLKOENFLAN_OFFSET UNITYSDK_OFFSET(0x134EF230)
#define APKEHDDPGOD_PFABBMJIODM_OFFSET UNITYSDK_OFFSET(0x134EF210)
#define APKEHDDPGOD__CTOR_OFFSET UNITYSDK_OFFSET(0x134EEC50)

inline static constexpr unsigned int APKEHDDPGOD_TypeDefinitionIndex = 39238;

class APKEHDDPGOD : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* AMGBGFDJNFG; // 0x88
	::LJHFMILANJA_1<::System::Int32>* PMCNDKMMFDG; // 0x90
	::OKAFHOGLKIC* _BCMGPGPLIMB_k__BackingField; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _DHMFMICMIOK_k__BackingField; // 0xA0
	::LJHFMILANJA_1<::System::Boolean>* IGAGINDJKCH; // 0xA8

	::System::Void _ctor(::OKAFHOGLKIC* BMNCHNFJFGE)
	{
		return ((::System::Void(*)(::PVOID, ::OKAFHOGLKIC*))((::PBYTE)hIl2Cpp + APKEHDDPGOD__CTOR_OFFSET))(this, BMNCHNFJFGE);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKEHDDPGOD_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean OKKKBMDAJJP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APKEHDDPGOD_OKKKBMDAJJP_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* PFABBMJIODM()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKEHDDPGOD_PFABBMJIODM_OFFSET))(this);
	}

	::OKAFHOGLKIC* COKGLHCGLIM()
	{
		return ((::OKAFHOGLKIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKEHDDPGOD_COKGLHCGLIM_OFFSET))(this);
	}

	::System::Void PCLKOENFLAN(::OKAFHOGLKIC* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OKAFHOGLKIC*))((::PBYTE)hIl2Cpp + APKEHDDPGOD_PCLKOENFLAN_OFFSET))(this, EGEGIMGMJHN);
	}

	::HGIDAMPAOGK* MJCJKPFIIIK()
	{
		return ((::HGIDAMPAOGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKEHDDPGOD_MJCJKPFIIIK_OFFSET))(this);
	}

	::System::Void APPCLMIANHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKEHDDPGOD_APPCLMIANHI_OFFSET))(this);
	}

	::System::Int32 HJHAJPNNHLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APKEHDDPGOD_HJHAJPNNHLC_OFFSET))(this);
	}

	::System::Void KHHDPMBLBHG(::HGIDAMPAOGK* OGEIJOKAANM)
	{
		return ((::System::Void(*)(::PVOID, ::HGIDAMPAOGK*))((::PBYTE)hIl2Cpp + APKEHDDPGOD_KHHDPMBLBHG_OFFSET))(this, OGEIJOKAANM);
	}
};
