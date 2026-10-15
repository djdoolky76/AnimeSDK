#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHCEEHPIGFL.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class ICKLANINJDB;
class LBJPGAHFLEK;

#define LBJPGAHFLEK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB5FAA10)
#define LBJPGAHFLEK_CTOR_OFFSET UNITYSDK_OFFSET(0xB5FAA90)
#define LBJPGAHFLEK_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0xB5FAA00)

inline static constexpr unsigned int LBJPGAHFLEK_TypeDefinitionIndex = 78075;

	class LBJPGAHFLEK : public ::BHCEEHPIGFL
	{
	public:
		::System::Void _ctor(::ICKLANINJDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICKLANINJDB*))((::PBYTE)hIl2Cpp + LBJPGAHFLEK_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJPGAHFLEK_JOHPKPGOGHD_OFFSET))(this);
		}

		static ::LBJPGAHFLEK* BPLPBPMEODA(::ICKLANINJDB* a1)
		{
			return ((::LBJPGAHFLEK*(*)(::ICKLANINJDB*))((::PBYTE)hIl2Cpp + LBJPGAHFLEK_BPLPBPMEODA_OFFSET))(a1);
		}

	};
