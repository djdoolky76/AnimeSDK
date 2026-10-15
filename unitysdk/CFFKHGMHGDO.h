#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class CFFKHGMHGDO;
class FGJAKGPJCKB;
class HCFLAPPBPOP;

#define CFFKHGMHGDO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCA0A7E0)
#define CFFKHGMHGDO_CTOR_OFFSET UNITYSDK_OFFSET(0xCA0A890)
#define CFFKHGMHGDO_DLFKFGBKPIN_OFFSET UNITYSDK_OFFSET(0xCA0A7D0)
#define CFFKHGMHGDO_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0xCA0A7C0)

inline static constexpr unsigned int CFFKHGMHGDO_TypeDefinitionIndex = 78059;

	class CFFKHGMHGDO
	{
	public:
		::System::Void _ctor(::HCFLAPPBPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + CFFKHGMHGDO_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFKHGMHGDO_JOHPKPGOGHD_OFFSET))(this);
		}

		::FGJAKGPJCKB* DLFKFGBKPIN()
		{
			return ((::FGJAKGPJCKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFKHGMHGDO_DLFKFGBKPIN_OFFSET))(this);
		}

		static ::CFFKHGMHGDO* BPLPBPMEODA(::HCFLAPPBPOP* a1)
		{
			return ((::CFFKHGMHGDO*(*)(::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + CFFKHGMHGDO_BPLPBPMEODA_OFFSET))(a1);
		}

	};
