#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class CNCFCDJAFOJ;
class EBCEGDPGHLE;
class KFFEEDHEOOH;
class MGODMMLBALG;

#define BOEGKAIICMG_AGJGFNGGALL_OFFSET UNITYSDK_OFFSET(0x1A783660)
#define BOEGKAIICMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7839D0)
#define BOEGKAIICMG_GET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A7839B0)
#define BOEGKAIICMG_MJNOADLKLGD_OFFSET UNITYSDK_OFFSET(0x1A783590)
#define BOEGKAIICMG_MPPBLAAAGKN_OFFSET UNITYSDK_OFFSET(0x1A783730)
#define BOEGKAIICMG_NGJJKNEOLGB_OFFSET UNITYSDK_OFFSET(0x1A783910)
#define BOEGKAIICMG_SET_PLAYERRETURNTRIALAVATARINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A7839C0)
#define BOEGKAIICMG_START_OFFSET UNITYSDK_OFFSET(0x1A783460)
#define BOEGKAIICMG_STOP_OFFSET UNITYSDK_OFFSET(0x1A783960)

inline static constexpr unsigned int BOEGKAIICMG_TypeDefinitionIndex = 63298;

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
