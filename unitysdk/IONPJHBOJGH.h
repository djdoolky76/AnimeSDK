#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class HCFLAPPBPOP;
class IONPJHBOJGH;
class PCBNCBNOAAE;

#define IONPJHBOJGH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16509EB0)
#define IONPJHBOJGH_CTOR_OFFSET UNITYSDK_OFFSET(0x16509F60)
#define IONPJHBOJGH_IOKBKLLEGON_OFFSET UNITYSDK_OFFSET(0x16509EA0)
#define IONPJHBOJGH_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0x16509E90)

inline static constexpr unsigned int IONPJHBOJGH_TypeDefinitionIndex = 78071;

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
