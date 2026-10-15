#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class CNCFCDJAFOJ;
class EBCEGDPGHLE;
class KFFEEDHEOOH;
class MGODMMLBALG;

#define BOEGKAIICMG_AGJGFNGGALL_OFFSET UNITYSDK_OFFSET(0xC18F2A0)
#define BOEGKAIICMG_CTOR_OFFSET UNITYSDK_OFFSET(0xC18F610)
#define BOEGKAIICMG_GET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0xC18F5F0)
#define BOEGKAIICMG_MJNOADLKLGD_OFFSET UNITYSDK_OFFSET(0xC18F1D0)
#define BOEGKAIICMG_MPPBLAAAGKN_OFFSET UNITYSDK_OFFSET(0xC18F370)
#define BOEGKAIICMG_NGJJKNEOLGB_OFFSET UNITYSDK_OFFSET(0xC18F550)
#define BOEGKAIICMG_SET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0xC18F600)
#define BOEGKAIICMG_START_OFFSET UNITYSDK_OFFSET(0xC18F0A0)
#define BOEGKAIICMG_STOP_OFFSET UNITYSDK_OFFSET(0xC18F5A0)

	class BOEGKAIICMG : public ::BHPMNMMGLHI
	{
	public:
		::MGODMMLBALG* _PlayerReturnTrialAvatarInfoProvider_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEGKAIICMG_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEGKAIICMG_START_OFFSET))(this);
		}

		::System::Void MJNOADLKLGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOEGKAIICMG_MJNOADLKLGD_OFFSET))(this, a1);
		}

		::System::Void AGJGFNGGALL(::System::UInt16 a1, ::KFFEEDHEOOH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::KFFEEDHEOOH*))((::PBYTE)hIl2Cpp + BOEGKAIICMG_AGJGFNGGALL_OFFSET))(this, a1, a2);
		}

		::System::Void MPPBLAAAGKN(::System::UInt16 a1, ::EBCEGDPGHLE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::EBCEGDPGHLE*))((::PBYTE)hIl2Cpp + BOEGKAIICMG_MPPBLAAAGKN_OFFSET))(this, a1, a2);
		}

		::System::Void NGJJKNEOLGB(::System::UInt16 a1, ::CNCFCDJAFOJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::CNCFCDJAFOJ*))((::PBYTE)hIl2Cpp + BOEGKAIICMG_NGJJKNEOLGB_OFFSET))(this, a1, a2);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEGKAIICMG_STOP_OFFSET))(this);
		}

		::MGODMMLBALG* get_PlayerReturnTrialAvatarInfoProvider()
		{
			return ((::MGODMMLBALG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEGKAIICMG_GET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET))(this);
		}

		::System::Void set_PlayerReturnTrialAvatarInfoProvider(::MGODMMLBALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGODMMLBALG*))((::PBYTE)hIl2Cpp + BOEGKAIICMG_SET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET))(this, a1);
		}

	};
