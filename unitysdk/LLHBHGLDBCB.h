#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHCEEHPIGFL.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class ICKLANINJDB;
class LLHBHGLDBCB;

#define LLHBHGLDBCB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB76CCC0)
#define LLHBHGLDBCB_CTOR_OFFSET UNITYSDK_OFFSET(0xB76CD40)
#define LLHBHGLDBCB_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0xB76CCB0)

	class LLHBHGLDBCB : public ::BHCEEHPIGFL
	{
	public:
		::System::Void _ctor(::ICKLANINJDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICKLANINJDB*))((::PBYTE)hIl2Cpp + LLHBHGLDBCB_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + LLHBHGLDBCB_JOHPKPGOGHD_OFFSET))(this);
		}

		static ::LLHBHGLDBCB* BPLPBPMEODA(::ICKLANINJDB* a1)
		{
			return ((::LLHBHGLDBCB*(*)(::ICKLANINJDB*))((::PBYTE)hIl2Cpp + LLHBHGLDBCB_BPLPBPMEODA_OFFSET))(a1);
		}

	};
