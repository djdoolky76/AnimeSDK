#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TickContext.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ITickCollector_1; }
namespace Foundation { template <typename T> class ITickSequencer_1; }
namespace Foundation { template <typename T> class TickFunction_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace Foundation
{
	inline static constexpr unsigned int TickService_1_TypeDefinitionIndex = 8771;

	template <typename T>
	class TickService_1 : public ::System::Object
	{
	public:
		::Foundation::TickContext _context; // 0x0
		::System::Boolean _isTicking; // 0x0
		::System::Collections::Generic::HashSet_1<::Foundation::TickFunction_1<T>*>* _enabledTickFunctions; // 0x0
		::System::Collections::Generic::HashSet_1<::Foundation::TickFunction_1<T>*>* _disabledTickFunctions; // 0x0
		::System::Collections::Generic::HashSet_1<::Foundation::TickFunction_1<T>*>* _tickEnabledTickFunctions; // 0x0
		::Foundation::ITickCollector_1<T>* _tickCollector; // 0x0
		::Foundation::ITickSequencer_1<T>* _tickSequencer; // 0x0
		::System::Int32 _subframe; // 0x0
		::System::Boolean _isDependencyGraphDirty; // 0x0
	};
}
