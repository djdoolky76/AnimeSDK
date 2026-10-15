#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class HCFLAPPBPOP;
class IONPJHBOJGH;
class PCBNCBNOAAE;

#define IONPJHBOJGH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16517F50)
#define IONPJHBOJGH_CTOR_OFFSET UNITYSDK_OFFSET(0x16518000)
#define IONPJHBOJGH_IOKBKLLEGON_OFFSET UNITYSDK_OFFSET(0x16517F40)
#define IONPJHBOJGH_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0x16517F30)

inline static constexpr unsigned int IONPJHBOJGH_TypeDefinitionIndex = 78072;

	class IONPJHBOJGH
	{
	public:
		::System::Void _ctor(::HCFLAPPBPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + IONPJHBOJGH_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + IONPJHBOJGH_JOHPKPGOGHD_OFFSET))(this);
		}

		::PCBNCBNOAAE* IOKBKLLEGON()
		{
			return ((::PCBNCBNOAAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONPJHBOJGH_IOKBKLLEGON_OFFSET))(this);
		}

		static ::IONPJHBOJGH* BPLPBPMEODA(::HCFLAPPBPOP* a1)
		{
			return ((::IONPJHBOJGH*(*)(::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + IONPJHBOJGH_BPLPBPMEODA_OFFSET))(a1);
		}

	};
