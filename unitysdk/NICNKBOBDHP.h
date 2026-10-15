#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class ICKLANINJDB;
class NICNKBOBDHP;

#define NICNKBOBDHP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBBDFB90)
#define NICNKBOBDHP_CTOR_OFFSET UNITYSDK_OFFSET(0xBBDFC40)
#define NICNKBOBDHP_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0xBBDFB80)

inline static constexpr unsigned int NICNKBOBDHP_TypeDefinitionIndex = 78078;

	class NICNKBOBDHP
	{
	public:
		::System::Void _ctor(::ICKLANINJDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICKLANINJDB*))((::PBYTE)hIl2Cpp + NICNKBOBDHP_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + NICNKBOBDHP_JOHPKPGOGHD_OFFSET))(this);
		}

		static ::NICNKBOBDHP* BPLPBPMEODA(::ICKLANINJDB* a1)
		{
			return ((::NICNKBOBDHP*(*)(::ICKLANINJDB*))((::PBYTE)hIl2Cpp + NICNKBOBDHP_BPLPBPMEODA_OFFSET))(a1);
		}

	};
