#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceSyncReason.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
class HCFLAPPBPOP;
class HONBPDEJDCC;
class IDLLEGHGJMB;
class LIELJCGKNJN;
class NGJLHMAHIDD;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IDLLEGHGJMB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15EDA080)
#define IDLLEGHGJMB_CTOR_OFFSET UNITYSDK_OFFSET(0x15EDA160)
#define IDLLEGHGJMB_DIMAJMPPHCP_OFFSET UNITYSDK_OFFSET(0x15ED9910)
#define IDLLEGHGJMB_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x15EDA1A0)
#define IDLLEGHGJMB_EOHLKMEAOFD_OFFSET UNITYSDK_OFFSET(0x15ED9FC0)
#define IDLLEGHGJMB_HBHDCFJDMKO_OFFSET UNITYSDK_OFFSET(0x15ED98C0)
#define IDLLEGHGJMB_IHKHBIKDGBI_OFFSET UNITYSDK_OFFSET(0x15ED9DB0)
#define IDLLEGHGJMB_JNCIINCECFN_OFFSET UNITYSDK_OFFSET(0x15EDA020)
#define IDLLEGHGJMB_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0x15ED98A0)
#define IDLLEGHGJMB_KHCOONBFOJO_OFFSET UNITYSDK_OFFSET(0x15ED9F60)
#define IDLLEGHGJMB_NFCLKDJAOIF_OFFSET UNITYSDK_OFFSET(0x15ED98B0)
#define IDLLEGHGJMB_OOBABFDMIIC_OFFSET UNITYSDK_OFFSET(0x15ED9960)
#define IDLLEGHGJMB_OOIAOFDAJKA_OFFSET UNITYSDK_OFFSET(0x15ED99B0)

inline static constexpr unsigned int IDLLEGHGJMB_TypeDefinitionIndex = 78068;

	class IDLLEGHGJMB
	{
	public:
		::System::Void _ctor(::HCFLAPPBPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + IDLLEGHGJMB_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLLEGHGJMB_JOHPKPGOGHD_OFFSET))(this);
		}

		::NGJLHMAHIDD* NFCLKDJAOIF()
		{
			return ((::NGJLHMAHIDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLLEGHGJMB_NFCLKDJAOIF_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceSyncReason HBHDCFJDMKO()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceSyncReason(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLLEGHGJMB_HBHDCFJDMKO_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType DIMAJMPPHCP()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLLEGHGJMB_DIMAJMPPHCP_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::HONBPDEJDCC*>* OOBABFDMIIC()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::HONBPDEJDCC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLLEGHGJMB_OOBABFDMIIC_OFFSET))(this);
		}

		::HONBPDEJDCC* OOIAOFDAJKA()
		{
			return ((::HONBPDEJDCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLLEGHGJMB_OOIAOFDAJKA_OFFSET))(this);
		}

		::System::Int32 IHKHBIKDGBI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLLEGHGJMB_IHKHBIKDGBI_OFFSET))(this);
		}

		::System::UInt32 KHCOONBFOJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLLEGHGJMB_KHCOONBFOJO_OFFSET))(this);
		}

		::System::UInt32 EOHLKMEAOFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLLEGHGJMB_EOHLKMEAOFD_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::LIELJCGKNJN*>* JNCIINCECFN()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::LIELJCGKNJN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLLEGHGJMB_JNCIINCECFN_OFFSET))(this);
		}

		static ::IDLLEGHGJMB* BPLPBPMEODA(::HCFLAPPBPOP* a1)
		{
			return ((::IDLLEGHGJMB*(*)(::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + IDLLEGHGJMB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDLLEGHGJMB_DIOEAJEHHND_OFFSET))(this);
		}

	};
