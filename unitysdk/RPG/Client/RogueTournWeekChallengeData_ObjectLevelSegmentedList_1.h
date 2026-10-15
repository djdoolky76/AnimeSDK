#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournWeekChallengeData_ObjectLevelSegmentedList_1_TypeDefinitionIndex = 67881;

	template <typename T>
	class RogueTournWeekChallengeData_ObjectLevelSegmentedList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>* _List; // 0x0
		::System::Boolean _IsSorted; // 0x0
	};
}
