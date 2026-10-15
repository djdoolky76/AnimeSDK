#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }

#define NJNGLDPKCCM_ADLCEJIPFLC_OFFSET UNITYSDK_OFFSET(0xBC26C10)
#define NJNGLDPKCCM_BNDGNGNJMNF_OFFSET UNITYSDK_OFFSET(0xBC26520)
#define NJNGLDPKCCM_CTOR_OFFSET UNITYSDK_OFFSET(0xBC1D9F0)
#define NJNGLDPKCCM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC1ED70)
#define NJNGLDPKCCM_GNKHAOGCGLL_OFFSET UNITYSDK_OFFSET(0xBC1DAB0)
#define NJNGLDPKCCM_GPCODIILIBA_OFFSET UNITYSDK_OFFSET(0xBC26600)
#define NJNGLDPKCCM_INHBJHGKPGP_OFFSET UNITYSDK_OFFSET(0xBC1EAC0)
#define NJNGLDPKCCM_KMAIPBJKHBE_OFFSET UNITYSDK_OFFSET(0xBC26840)
#define NJNGLDPKCCM_KNEMBOFMOKA_OFFSET UNITYSDK_OFFSET(0xBC262B0)
#define NJNGLDPKCCM___SENDSTARTBATTLEREQ_B__8_0_OFFSET UNITYSDK_OFFSET(0xBC26F20)
#define NJNGLDPKCCM___SENDSTARTNODEREQ_B__7_0_OFFSET UNITYSDK_OFFSET(0xBC26E50)

	class NJNGLDPKCCM : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* PFPPONIIGMJ; // 0x10
		::RPG::Client::ActivityIdleLive::StoryLine* GIOECPALNAC; // 0x18
		::RPG::Client::Promises::Promise* EGAGOICMCPA; // 0x20
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::StoryLine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::StoryLine*))((::PBYTE)hIl2Cpp + NJNGLDPKCCM_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* GNKHAOGCGLL(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + NJNGLDPKCCM_GNKHAOGCGLL_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* BNDGNGNJMNF(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + NJNGLDPKCCM_BNDGNGNJMNF_OFFSET))(this, a1);
		}

		::System::Void INHBJHGKPGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNGLDPKCCM_INHBJHGKPGP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* KNEMBOFMOKA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NJNGLDPKCCM_KNEMBOFMOKA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* GPCODIILIBA()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNGLDPKCCM_GPCODIILIBA_OFFSET))(this);
		}

		::System::Void KMAIPBJKHBE(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + NJNGLDPKCCM_KMAIPBJKHBE_OFFSET))(this, a1, a2);
		}

		::System::Void ADLCEJIPFLC(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + NJNGLDPKCCM_ADLCEJIPFLC_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNGLDPKCCM_DISPOSE_OFFSET))(this);
		}

		::System::Void __SendStartNodeReq_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNGLDPKCCM___SENDSTARTNODEREQ_B__7_0_OFFSET))(this);
		}

		::System::Void __SendStartBattleReq_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNGLDPKCCM___SENDSTARTBATTLEREQ_B__8_0_OFFSET))(this);
		}

	};
