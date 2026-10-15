#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchByEnumTaskBase_2_TypeDefinitionIndex = 53303;

	template <typename T1, typename T2>
	class SwitchByEnumTaskBase_2 : public ::GELIALJDFBL
	{
	public:
		T1 _ConfigRef; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext; // 0x0
		::System::Boolean _TaskExecutorsInitialized; // 0x0
		::System::Collections::Generic::Dictionary_2<T2, ::KDJNAAOFMMJ*>* _TaskExecutors; // 0x0
		::KDJNAAOFMMJ* _ActiveExecutor; // 0x0
	};
}
