#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_IMMUTABLE_IMMUTABLEARRAY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED87110)

namespace System::Collections::Immutable
{
	class ImmutableArray : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_TwoElementArray()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("System.Collections.Immutable", "ImmutableArray")->GetStaticField(0x4A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IMMUTABLE_IMMUTABLEARRAY_CCTOR_OFFSET))();
		}

	};
}
