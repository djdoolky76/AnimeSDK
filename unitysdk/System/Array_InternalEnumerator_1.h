#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Array; }

namespace System
{
	template <typename T>
	class Array_InternalEnumerator_1 : public ::System::Object
	{
	public:
		::System::Array* array; // 0x0
		::System::Int32 index; // 0x0
		::System::Int32 length; // 0x0
		// static const ::System::Object NOT_STARTED; // 0x0
		// static const ::System::Object FINISHED; // 0x0
	};
}
