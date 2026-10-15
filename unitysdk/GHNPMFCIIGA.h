#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesGameType.h"
#include "unitysdk/System/Object.h"
class CPAPEMAMFLL;
namespace RPG::Client { class PlanetFesMiniGame; }
namespace RPG::Client { class PlanetFesMiniGameBetUp; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GHNPMFCIIGA_BIMPIILOION_OFFSET UNITYSDK_OFFSET(0x15A20F20)
#define GHNPMFCIIGA_CTOR_OFFSET UNITYSDK_OFFSET(0x15A20FB0)
#define GHNPMFCIIGA_FIJHAOKHGDJ_OFFSET UNITYSDK_OFFSET(0x15A20860)
#define GHNPMFCIIGA_OGJEADJKMNF_OFFSET UNITYSDK_OFFSET(0x15A20B40)

inline static constexpr unsigned int GHNPMFCIIGA_TypeDefinitionIndex = 66611;

	class GHNPMFCIIGA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNPMFCIIGA_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesGameType, ::RPG::Client::PlanetFesMiniGame*>* FIJHAOKHGDJ()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesGameType, ::RPG::Client::PlanetFesMiniGame*>*(*)())((::PBYTE)hIl2Cpp + GHNPMFCIIGA_FIJHAOKHGDJ_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>* OGJEADJKMNF(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GHNPMFCIIGA_OGJEADJKMNF_OFFSET))(a1);
		}

		static ::CPAPEMAMFLL* BIMPIILOION(::RPG::GameCore::PlanetFesGameType a1)
		{
			return ((::CPAPEMAMFLL*(*)(::RPG::GameCore::PlanetFesGameType))((::PBYTE)hIl2Cpp + GHNPMFCIIGA_BIMPIILOION_OFFSET))(a1);
		}

	};
