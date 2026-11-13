#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeShowType.h"
class BPDKJKJGECM;
class HCFLAPPBPOP;
class JGNCJOINEMP;
class LIKNJLCIAGI;
class NJCHGIHCBAC;

#define NJCHGIHCBAC_BDNEJLEBEAP_OFFSET UNITYSDK_OFFSET(0x148E2590)
#define NJCHGIHCBAC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x148E2720)
#define NJCHGIHCBAC_CTOR_OFFSET UNITYSDK_OFFSET(0x148E27D0)
#define NJCHGIHCBAC_FEDPCLPMOEH_OFFSET UNITYSDK_OFFSET(0x148E2580)
#define NJCHGIHCBAC_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0x148E2570)
#define NJCHGIHCBAC_KMPCMIHIJLA_OFFSET UNITYSDK_OFFSET(0x148E26D0)
#define NJCHGIHCBAC_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x148E2680)
#define NJCHGIHCBAC_NKDINAILHGG_OFFSET UNITYSDK_OFFSET(0x148E2630)
#define NJCHGIHCBAC_OPDFLOPPHOC_OFFSET UNITYSDK_OFFSET(0x148E25E0)

inline static constexpr unsigned int NJCHGIHCBAC_TypeDefinitionIndex = 80785;

	class NJCHGIHCBAC
	{
	public:
		::System::Void _ctor(::HCFLAPPBPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + NJCHGIHCBAC_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHGIHCBAC_JOHPKPGOGHD_OFFSET))(this);
		}

		::JGNCJOINEMP* FEDPCLPMOEH()
		{
			return ((::JGNCJOINEMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHGIHCBAC_FEDPCLPMOEH_OFFSET))(this);
		}

		::System::Int32 BDNEJLEBEAP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHGIHCBAC_BDNEJLEBEAP_OFFSET))(this);
		}

		::System::Boolean OPDFLOPPHOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHGIHCBAC_OPDFLOPPHOC_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceAoeShowType NKDINAILHGG()
		{
			return ((::RPG::GameCore::CakeRaceAoeShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHGIHCBAC_NKDINAILHGG_OFFSET))(this);
		}

		::LIKNJLCIAGI* MHHDBKELGIO()
		{
			return ((::LIKNJLCIAGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHGIHCBAC_MHHDBKELGIO_OFFSET))(this);
		}

		::BPDKJKJGECM* KMPCMIHIJLA()
		{
			return ((::BPDKJKJGECM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHGIHCBAC_KMPCMIHIJLA_OFFSET))(this);
		}

		static ::NJCHGIHCBAC* BPLPBPMEODA(::HCFLAPPBPOP* a1)
		{
			return ((::NJCHGIHCBAC*(*)(::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + NJCHGIHCBAC_BPLPBPMEODA_OFFSET))(a1);
		}

	};
