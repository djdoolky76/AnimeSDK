#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

namespace SRF
{
	template <typename T>
	class SRList_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _buffer; // 0x0
		::System::Int32 _count; // 0x0
		::System::Collections::Generic::EqualityComparer_1<T>* _equalityComparer; // 0x0
		::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* _readOnlyWrapper; // 0x0
	};
}
