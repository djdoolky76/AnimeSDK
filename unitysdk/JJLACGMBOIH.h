#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHCEEHPIGFL.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class ICKLANINJDB;
class JJLACGMBOIH;

#define JJLACGMBOIH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA2AE10)
#define JJLACGMBOIH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2AE90)
#define JJLACGMBOIH_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0xBA2AE00)

inline static constexpr unsigned int JJLACGMBOIH_TypeDefinitionIndex = 80802;

	class JJLACGMBOIH : public ::BHCEEHPIGFL
	{
	public:
		::System::Void _ctor(::ICKLANINJDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICKLANINJDB*))((::PBYTE)hIl2Cpp + JJLACGMBOIH_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLACGMBOIH_JOHPKPGOGHD_OFFSET))(this);
		}

		static ::JJLACGMBOIH* BPLPBPMEODA(::ICKLANINJDB* a1)
		{
			return ((::JJLACGMBOIH*(*)(::ICKLANINJDB*))((::PBYTE)hIl2Cpp + JJLACGMBOIH_BPLPBPMEODA_OFFSET))(a1);
		}

	};
