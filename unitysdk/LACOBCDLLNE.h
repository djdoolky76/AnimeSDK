#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJLNEBBMMOE;
class DCDMPLJNBJC;
class FBBOKKLGKGL;
class GKHFFKMFMEN;
class JGMDJIENFFH;
namespace RPG::Client { class IRogueTournGameDivisionSettleResult; }
namespace RPG::Client { class IRogueTournGameScoreSettleResult; }

#define LACOBCDLLNE_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xB5DAA00)
#define LACOBCDLLNE_BPLPBPMEODA_2_OFFSET UNITYSDK_OFFSET(0xB5DAAC0)
#define LACOBCDLLNE_BPLPBPMEODA_3_OFFSET UNITYSDK_OFFSET(0xB5DAB80)
#define LACOBCDLLNE_BPLPBPMEODA_4_OFFSET UNITYSDK_OFFSET(0xB5DAC60)
#define LACOBCDLLNE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB5DA940)

	class LACOBCDLLNE : public ::System::Object
	{
	public:
		static ::RPG::Client::IRogueTournGameScoreSettleResult* BPLPBPMEODA(::FBBOKKLGKGL* a1)
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::FBBOKKLGKGL*))((::PBYTE)hIl2Cpp + LACOBCDLLNE_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueTournGameScoreSettleResult* BPLPBPMEODA_1(::DCDMPLJNBJC* a1)
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::DCDMPLJNBJC*))((::PBYTE)hIl2Cpp + LACOBCDLLNE_BPLPBPMEODA_1_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueTournGameScoreSettleResult* BPLPBPMEODA_2(::BJLNEBBMMOE* a1)
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::BJLNEBBMMOE*))((::PBYTE)hIl2Cpp + LACOBCDLLNE_BPLPBPMEODA_2_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueTournGameScoreSettleResult* BPLPBPMEODA_3(::GKHFFKMFMEN* a1)
		{
			return ((::RPG::Client::IRogueTournGameScoreSettleResult*(*)(::GKHFFKMFMEN*))((::PBYTE)hIl2Cpp + LACOBCDLLNE_BPLPBPMEODA_3_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueTournGameDivisionSettleResult* BPLPBPMEODA_4(::JGMDJIENFFH* a1)
		{
			return ((::RPG::Client::IRogueTournGameDivisionSettleResult*(*)(::JGMDJIENFFH*))((::PBYTE)hIl2Cpp + LACOBCDLLNE_BPLPBPMEODA_4_OFFSET))(a1);
		}

	};
