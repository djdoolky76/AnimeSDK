#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJCKPHKIMP;
class LJBBONMFLAA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int TriggerShapeController_2_TypeDefinitionIndex = 73976;

	template <typename T1, typename T2>
	class TriggerShapeController_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::LJBBONMFLAA*>* _BatchesByType; // 0x0
		::System::Collections::Generic::HashSet_1<::BMJCKPHKIMP*>* _UpdateBatchSet; // 0x0
		// static const ::System::Object c_MaxTriggersPerBatch; // 0x0
	};
}
