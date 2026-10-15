#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Immutable
{
	template <typename T>
	class SecurePooledObject_1 : public ::System::Object
	{
	public:
		T _value; // 0x0
		::System::Int32 _owner; // 0x0
	};
}
