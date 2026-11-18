#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ExclusiveResourceManager.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int ExclusiveResourceManager_3_TypeDefinitionIndex = 8838;

	template <typename T1, typename T2, typename T3>
	class ExclusiveResourceManager_3 : public ::Foundation::ExclusiveResourceManager
	{
	public:
		T1 _defaultResource; // 0x0
		T2 _activeResource; // 0x0
		T3 _activeRequest; // 0x0
		T3 _transientRequest; // 0x0
		::System::Boolean _isTicking; // 0x0
		::System::Collections::Generic::List_1<T3>* _requestsToRemoveInTicking; // 0x0
		::System::Collections::Generic::List_1<T3>* _requests; // 0x0
		::System::Collections::Generic::IComparer_1<T3>* _comparer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T3>* _equalityComparer; // 0x0
	};
}
