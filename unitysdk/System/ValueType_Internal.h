#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	class ValueType_Internal : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_hash_code_of_ptr_seed()
		{
			return (::System::Int32*)UnitySDK::FromName("System", "Internal")->GetStaticField(0x7EB0);
		}

	};
}
