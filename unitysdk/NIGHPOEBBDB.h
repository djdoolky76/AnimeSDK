#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJPKGKGOAFP.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournPersonaRoomCompositionTypeData; }
namespace System { class Object; }

#define NIGHPOEBBDB_CTOR_OFFSET UNITYSDK_OFFSET(0xBBEABB0)
#define NIGHPOEBBDB_IJOONKNIDKI_OFFSET UNITYSDK_OFFSET(0xBBEABC0)
#define NIGHPOEBBDB_PIDDJCJPLDL_OFFSET UNITYSDK_OFFSET(0xBBEAC50)

	class NIGHPOEBBDB : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* KMDCEKEHADA; // 0x10
		::HJPKGKGOAFP LNPLJMDCPEP; // 0x18
		::System::Void _ctor(::HJPKGKGOAFP a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJPKGKGOAFP))((::PBYTE)hIl2Cpp + NIGHPOEBBDB_CTOR_OFFSET))(this, a1);
		}

		::System::Object* IJOONKNIDKI()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGHPOEBBDB_IJOONKNIDKI_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* PIDDJCJPLDL()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGHPOEBBDB_PIDDJCJPLDL_OFFSET))(this);
		}

	};
