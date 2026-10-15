#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIPBOGKHKBE.h"
class BHEDBBEAHIP;
class DBEILICHGCG;
class JBACCAGFHON;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define BHEDBBEAHIP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB470A60)
#define BHEDBBEAHIP_CTOR_OFFSET UNITYSDK_OFFSET(0xB470AD0)
#define BHEDBBEAHIP_HLOGMBDGPCC_OFFSET UNITYSDK_OFFSET(0xB470AE0)

inline static constexpr unsigned int BHEDBBEAHIP_TypeDefinitionIndex = 78103;

	class BHEDBBEAHIP : public ::JIPBOGKHKBE
	{
	public:
		::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + BHEDBBEAHIP_CTOR_OFFSET))(this, a1);
		}

		static ::BHEDBBEAHIP* BPLPBPMEODA(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
		{
			return ((::BHEDBBEAHIP*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + BHEDBBEAHIP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void HLOGMBDGPCC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + BHEDBBEAHIP_HLOGMBDGPCC_OFFSET))(this, a1, a2);
		}

	};
