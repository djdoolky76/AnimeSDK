#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BACHHBGNENA;
class CPLFEKKNLDO;
class KFKLIDNFCOP;
class LBFNAJJGCBH;
namespace RPG::Client { class PlanetFesModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDB9D930)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xDB9EC20)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_1_OFFSET UNITYSDK_OFFSET(0xDB9E1C0)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_OFFSET UNITYSDK_OFFSET(0xDB9DD00)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESGAMEBINGOFLIPSCRSP_OFFSET UNITYSDK_OFFSET(0xDB9E420)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESSTARTMINIGAMESCRSP_OFFSET UNITYSDK_OFFSET(0xDB9DAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGameBingoData_TypeDefinitionIndex = 66608;

	class PlanetFesMiniGameBingoData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* DistributionList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* MatchedList; // 0x18
		::System::UInt32 Ratio; // 0x20
		::System::Boolean IsStart; // 0x24
		::System::Boolean IsGameOver; // 0x25
		::System::Byte _padding0[0x2];
		::System::UInt32 LastFlippedPos; // 0x28
		::System::UInt32 FlipCount; // 0x2C
		::System::UInt32 MaxFlipCount; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_CTOR_OFFSET))(this);
		}

		::System::Void SyncPlanetFesStartMiniGameScRsp(::LBFNAJJGCBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBFNAJJGCBH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESSTARTMINIGAMESCRSP_OFFSET))(this, a1);
		}

		::System::Void SyncMiniGameInfo(::KFKLIDNFCOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFKLIDNFCOP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_OFFSET))(this, a1);
		}

		::System::Void SyncMiniGameInfo_1(::BACHHBGNENA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BACHHBGNENA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_1_OFFSET))(this, a1);
		}

		::System::Boolean SyncPlanetFesGameBingoFlipScRsp(::CPLFEKKNLDO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPLFEKKNLDO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESGAMEBINGOFLIPSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesModule* get__Module()
		{
			return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_GET__MODULE_OFFSET))(this);
		}

	};
}
