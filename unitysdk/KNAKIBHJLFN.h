#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLGCPNNDLK.h"
class ADHKPAMIMPF;
namespace RPG::Client::Promises { class Promise; }

#define KNAKIBHJLFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB577580)
#define KNAKIBHJLFN_HHPPFNLDKOP_OFFSET UNITYSDK_OFFSET(0xB577280)
#define KNAKIBHJLFN_KEFIMHLAFIA_OFFSET UNITYSDK_OFFSET(0xB5772D0)
#define KNAKIBHJLFN_OMAFIJKBPFC_OFFSET UNITYSDK_OFFSET(0xB577450)
#define KNAKIBHJLFN_PJCLKMEOCJM_OFFSET UNITYSDK_OFFSET(0xB577320)

	class KNAKIBHJLFN : public ::ABLGCPNNDLK
	{
	public:
		::ADHKPAMIMPF* HLPMCLLIHMI; // 0x18
		::ADHKPAMIMPF* HCKBDHLJDCI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAKIBHJLFN_CTOR_OFFSET))(this);
		}

		::System::Void HHPPFNLDKOP(::ADHKPAMIMPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADHKPAMIMPF*))((::PBYTE)hIl2Cpp + KNAKIBHJLFN_HHPPFNLDKOP_OFFSET))(this, a1);
		}

		::System::Void KEFIMHLAFIA(::ADHKPAMIMPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADHKPAMIMPF*))((::PBYTE)hIl2Cpp + KNAKIBHJLFN_KEFIMHLAFIA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* PJCLKMEOCJM()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAKIBHJLFN_PJCLKMEOCJM_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* OMAFIJKBPFC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAKIBHJLFN_OMAFIJKBPFC_OFFSET))(this);
		}

	};
