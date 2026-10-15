#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIPBOGKHKBE.h"
class DBEILICHGCG;
class JBACCAGFHON;
class MKPMAFBIPKG;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define MKPMAFBIPKG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB9A46F0)
#define MKPMAFBIPKG_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A4760)
#define MKPMAFBIPKG_HLOGMBDGPCC_OFFSET UNITYSDK_OFFSET(0xB9A4770)

inline static constexpr unsigned int MKPMAFBIPKG_TypeDefinitionIndex = 78105;

	class MKPMAFBIPKG : public ::JIPBOGKHKBE
	{
	public:
		::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + MKPMAFBIPKG_CTOR_OFFSET))(this, a1);
		}

		static ::MKPMAFBIPKG* BPLPBPMEODA(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
		{
			return ((::MKPMAFBIPKG*(*)(::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + MKPMAFBIPKG_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void HLOGMBDGPCC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + MKPMAFBIPKG_HLOGMBDGPCC_OFFSET))(this, a1, a2);
		}

	};
