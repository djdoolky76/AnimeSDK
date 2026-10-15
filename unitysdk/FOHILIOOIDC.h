#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class ENFDMFGIJDC;
class FOHILIOOIDC;
class HCFLAPPBPOP;

#define FOHILIOOIDC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x158E6E20)
#define FOHILIOOIDC_CTOR_OFFSET UNITYSDK_OFFSET(0x158E6ED0)
#define FOHILIOOIDC_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0x158E6DB0)
#define FOHILIOOIDC_MKGDCMKBFIN_OFFSET UNITYSDK_OFFSET(0x158E6DD0)
#define FOHILIOOIDC_NEDMMKBANED_OFFSET UNITYSDK_OFFSET(0x158E6DC0)

inline static constexpr unsigned int FOHILIOOIDC_TypeDefinitionIndex = 78058;

	class FOHILIOOIDC
	{
	public:
		::System::Void _ctor(::HCFLAPPBPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + FOHILIOOIDC_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHILIOOIDC_JOHPKPGOGHD_OFFSET))(this);
		}

		::ENFDMFGIJDC* NEDMMKBANED()
		{
			return ((::ENFDMFGIJDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHILIOOIDC_NEDMMKBANED_OFFSET))(this);
		}

		::System::UInt32 MKGDCMKBFIN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHILIOOIDC_MKGDCMKBFIN_OFFSET))(this);
		}

		static ::FOHILIOOIDC* BPLPBPMEODA(::HCFLAPPBPOP* a1)
		{
			return ((::FOHILIOOIDC*(*)(::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + FOHILIOOIDC_BPLPBPMEODA_OFFSET))(a1);
		}

	};
