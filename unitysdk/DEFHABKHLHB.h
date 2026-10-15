#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIPBOGKHKBE.h"
class DBEILICHGCG;
class DEFHABKHLHB;
class JBACCAGFHON;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define DEFHABKHLHB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE509340)
#define DEFHABKHLHB_CTOR_OFFSET UNITYSDK_OFFSET(0xE5093B0)
#define DEFHABKHLHB_HLOGMBDGPCC_OFFSET UNITYSDK_OFFSET(0xE5093C0)

inline static constexpr unsigned int DEFHABKHLHB_TypeDefinitionIndex = 78099;

	class DEFHABKHLHB : public ::JIPBOGKHKBE
	{
	public:
		::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + DEFHABKHLHB_CTOR_OFFSET))(this, a1);
		}

		static ::DEFHABKHLHB* BPLPBPMEODA(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
		{
			return ((::DEFHABKHLHB*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + DEFHABKHLHB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void HLOGMBDGPCC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + DEFHABKHLHB_HLOGMBDGPCC_OFFSET))(this, a1, a2);
		}

	};
