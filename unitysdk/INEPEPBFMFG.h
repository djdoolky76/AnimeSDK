#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIPBOGKHKBE.h"
class DBEILICHGCG;
class INEPEPBFMFG;
class JBACCAGFHON;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define INEPEPBFMFG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x164E98E0)
#define INEPEPBFMFG_CTOR_OFFSET UNITYSDK_OFFSET(0x164E9960)
#define INEPEPBFMFG_HLOGMBDGPCC_OFFSET UNITYSDK_OFFSET(0x164E9970)

	class INEPEPBFMFG : public ::JIPBOGKHKBE
	{
	public:
		::System::UInt32 BCHPAFOENEI; // 0x18
		::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + INEPEPBFMFG_CTOR_OFFSET))(this, a1, a2);
		}

		static ::INEPEPBFMFG* BPLPBPMEODA(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1, ::System::UInt32 a2)
		{
			return ((::INEPEPBFMFG*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + INEPEPBFMFG_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void HLOGMBDGPCC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + INEPEPBFMFG_HLOGMBDGPCC_OFFSET))(this, a1, a2);
		}

	};
