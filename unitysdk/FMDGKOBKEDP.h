#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCommandQueueType.h"
#include "unitysdk/System/Object.h"
class FMDGKOBKEDP;
class IFEABBJBIGK;
class JGBOFNGGDOK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMDGKOBKEDP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15843580)
#define FMDGKOBKEDP_CTOR_OFFSET UNITYSDK_OFFSET(0x15843680)
#define FMDGKOBKEDP_EDDBCKGHBBH_OFFSET UNITYSDK_OFFSET(0x15843AF0)
#define FMDGKOBKEDP_FIPFMCKFGGH_OFFSET UNITYSDK_OFFSET(0x15843DA0)
#define FMDGKOBKEDP_JGFNAMMHFFC_OFFSET UNITYSDK_OFFSET(0x15843710)
#define FMDGKOBKEDP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x158438D0)
#define FMDGKOBKEDP_LOIEIJDEPFL_OFFSET UNITYSDK_OFFSET(0x158437F0)
#define FMDGKOBKEDP_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15843B60)

inline static constexpr unsigned int FMDGKOBKEDP_TypeDefinitionIndex = 78165;

	class FMDGKOBKEDP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType, ::JGBOFNGGDOK*>* FINPLJLNALN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDGKOBKEDP_CTOR_OFFSET))(this);
		}

		static ::FMDGKOBKEDP* BPLPBPMEODA()
		{
			return ((::FMDGKOBKEDP*(*)())((::PBYTE)hIl2Cpp + FMDGKOBKEDP_BPLPBPMEODA_OFFSET))();
		}

		::JGBOFNGGDOK* JGFNAMMHFFC(::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType a1)
		{
			return ((::JGBOFNGGDOK*(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType))((::PBYTE)hIl2Cpp + FMDGKOBKEDP_JGFNAMMHFFC_OFFSET))(this, a1);
		}

		::JGBOFNGGDOK* LOIEIJDEPFL(::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType a1)
		{
			return ((::JGBOFNGGDOK*(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType))((::PBYTE)hIl2Cpp + FMDGKOBKEDP_LOIEIJDEPFL_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDGKOBKEDP_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void EDDBCKGHBBH(::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType a1, ::IFEABBJBIGK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType, ::IFEABBJBIGK*))((::PBYTE)hIl2Cpp + FMDGKOBKEDP_EDDBCKGHBBH_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDGKOBKEDP_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void FIPFMCKFGGH(::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCommandQueueType))((::PBYTE)hIl2Cpp + FMDGKOBKEDP_FIPFMCKFGGH_OFFSET))(this, a1);
		}

	};
