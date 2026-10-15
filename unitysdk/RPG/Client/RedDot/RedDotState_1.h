#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMHMFMNBJPG.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client::RedDot
{
	inline static constexpr unsigned int RedDotState_1_TypeDefinitionIndex = 79168;

	template <typename T>
	class RedDotState_1 : public ::EMHMFMNBJPG
	{
	public:
		::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::RedDotType> NoInstanceKey; // 0x0
		::System::Collections::Generic::Dictionary_2<T, ::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::RedDotType>>* InstanceKeys; // 0x0
	};
}
