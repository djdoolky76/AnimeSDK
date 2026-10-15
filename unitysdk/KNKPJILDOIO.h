#pragma once
#include "unitysdk/unitysdk.h"
class EPCNGNEEMBI;
namespace RPG::Client { class FightFestChallengeLevelData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNKPJILDOIO_DILIEFIBNHG_OFFSET UNITYSDK_OFFSET(0xB587C60)
#define KNKPJILDOIO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16930)
#define KNKPJILDOIO_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x16940)

	struct alignas(8) KNKPJILDOIO
	{
		::RPG::Client::FightFestChallengeLevelData* LBCDHCAMJPP; // 0x10
		::System::Collections::Generic::List_1<::EPCNGNEEMBI*>* BFLKGPLDHJK; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* IHEOAPPAGNJ; // 0x20
		/*
		static ::KNKPJILDOIO DILIEFIBNHG(::RPG::Client::FightFestChallengeLevelData* a1, ::System::Collections::Generic::List_1<::EPCNGNEEMBI*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::KNKPJILDOIO(*)(::RPG::Client::FightFestChallengeLevelData*, ::System::Collections::Generic::List_1<::EPCNGNEEMBI*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KNKPJILDOIO_DILIEFIBNHG_OFFSET))(a1, a2, a3);
		}
		*/

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPJILDOIO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKPJILDOIO_LDAMHBBILAD_OFFSET))(this);
		}

	};
