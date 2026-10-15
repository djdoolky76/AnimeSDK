#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBEILICHGCG;
class JBACCAGFHON;
namespace RPG::Client::CakeRace { class CakeRacePerformanceDataItem; }

#define JIPBOGKHKBE_CTOR_OFFSET UNITYSDK_OFFSET(0xB1FFB40)
#define JIPBOGKHKBE_FANJEMOGFGH_OFFSET UNITYSDK_OFFSET(0xB1FFB50)

	class JIPBOGKHKBE : public ::System::Object
	{
	public:
		::RPG::Client::CakeRace::CakeRacePerformanceDataItem* KMDKEILKKMB; // 0x10
		::System::Void _ctor(::RPG::Client::CakeRace::CakeRacePerformanceDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRacePerformanceDataItem*))((::PBYTE)hIl2Cpp + JIPBOGKHKBE_CTOR_OFFSET))(this, a1);
		}

		::System::Void FANJEMOGFGH(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + JIPBOGKHKBE_FANJEMOGFGH_OFFSET))(this, a1, a2);
		}

	};
