#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/SpinLockWithNoCriticalRegion.h"
#include "unitysdk/System/Object.h"

namespace Collections::Pooled
{
	template <typename T>
	class DefaultArrayPoolSource_1_Bucket : public ::System::Object
	{
	public:
		::Collections::Pooled::SpinLockWithNoCriticalRegion _spinlock; // 0x0
		::Il2CppArray<::Il2CppArray<T>*>* _arr; // 0x0
		::System::Int32 _arrLength; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _minimumCount; // 0x0
		::System::Boolean _isExtending; // 0x0
		// static const ::System::Object DefaultMinimum; // 0x0
		// static const ::System::Object DefaultDropReservedNum; // 0x0
	};
}
