#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TrainPartyPerformance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJIEGMAKIMA_KALJNIHFLGK_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x2E78180)
#define FJIEGMAKIMA_KALJNIHFLGK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x2E78170)

inline static constexpr unsigned int FJIEGMAKIMA_KALJNIHFLGK_TypeDefinitionIndex = 60232;

	struct alignas(8) FJIEGMAKIMA_KALJNIHFLGK
	{
		::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyPerformance*>* GPBAGJPKIHJ; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyPerformance*>* ILJAEICNHKD; // 0x18
		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_KALJNIHFLGK_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void EGFCFCBHJJP(::RPG::GameCore::TrainPartyPerformance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyPerformance*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_KALJNIHFLGK_EGFCFCBHJJP_OFFSET))(this, a1);
		}

	};
