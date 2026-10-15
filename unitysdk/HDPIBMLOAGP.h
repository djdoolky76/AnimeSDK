#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIPBOGKHKBE.h"
class DBEILICHGCG;
class HDPIBMLOAGP;
class JBACCAGFHON;
namespace RPG::Client::CakeRace { class CakeRaceCatUI3DPerformancePrepareData; }
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define HDPIBMLOAGP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15C417F0)
#define HDPIBMLOAGP_CTOR_OFFSET UNITYSDK_OFFSET(0x15C41840)
#define HDPIBMLOAGP_HLOGMBDGPCC_OFFSET UNITYSDK_OFFSET(0x15C41850)
#define HDPIBMLOAGP_JPNFBCNFFPC_OFFSET UNITYSDK_OFFSET(0x15C419E0)
#define HDPIBMLOAGP_NHJANJONAHK_OFFSET UNITYSDK_OFFSET(0x15C41950)

	class HDPIBMLOAGP : public ::JIPBOGKHKBE
	{
	public:
		// static const ::System::String* CBMNKILNEFA; // 0x0
		::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + HDPIBMLOAGP_CTOR_OFFSET))(this, a1);
		}

		static ::HDPIBMLOAGP* BPLPBPMEODA(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
		{
			return ((::HDPIBMLOAGP*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + HDPIBMLOAGP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void HLOGMBDGPCC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + HDPIBMLOAGP_HLOGMBDGPCC_OFFSET))(this, a1, a2);
		}

		static ::System::Void NHJANJONAHK(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*))((::PBYTE)hIl2Cpp + HDPIBMLOAGP_NHJANJONAHK_OFFSET))(a1);
		}

		::System::Void JPNFBCNFFPC(::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceCatUI3DPerformancePrepareData*, ::System::Boolean))((::PBYTE)hIl2Cpp + HDPIBMLOAGP_JPNFBCNFFPC_OFFSET))(this, a1, a2);
		}

	};
