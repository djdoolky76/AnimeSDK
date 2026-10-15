#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"
class AFNDGNFOAKC;
class BFMHFBHIAAL;
class HBLDGJCDJPF;
class ICCLDNDNHPD;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GBOKIFBJAMN_CTOR_OFFSET UNITYSDK_OFFSET(0x15949AC0)
#define GBOKIFBJAMN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1594A060)
#define GBOKIFBJAMN_KGFJEKJDIGN_OFFSET UNITYSDK_OFFSET(0x15949B20)
#define GBOKIFBJAMN_MCGOFFADONA_OFFSET UNITYSDK_OFFSET(0x15949D80)
#define GBOKIFBJAMN_NFDHENMGIBA_OFFSET UNITYSDK_OFFSET(0x15949F90)
#define GBOKIFBJAMN_TICK_OFFSET UNITYSDK_OFFSET(0x1594A230)

inline static constexpr unsigned int GBOKIFBJAMN_TypeDefinitionIndex = 77649;

	class GBOKIFBJAMN : public ::System::Object
	{
	public:
		::AFNDGNFOAKC* HFOFIODMFGB; // 0x10
		::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* OJFECHILFHG; // 0x18
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* HJLDCNBEMAO; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* OJKHNGNDDBI; // 0x28
		// static const ::System::String* NHLLEBHIHDE; // 0x0
		::System::Void _ctor(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + GBOKIFBJAMN_CTOR_OFFSET))(this, a1);
		}

		::System::Void KGFJEKJDIGN(::BFMHFBHIAAL* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
		{
			return ((::System::Void(*)(::PVOID, ::BFMHFBHIAAL*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + GBOKIFBJAMN_KGFJEKJDIGN_OFFSET))(this, a1, a2);
		}

		::System::Void MCGOFFADONA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBOKIFBJAMN_MCGOFFADONA_OFFSET))(this);
		}

		static ::System::Void NFDHENMGIBA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBOKIFBJAMN_NFDHENMGIBA_OFFSET))();
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + GBOKIFBJAMN_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GBOKIFBJAMN_TICK_OFFSET))(this, a1);
		}

	};
