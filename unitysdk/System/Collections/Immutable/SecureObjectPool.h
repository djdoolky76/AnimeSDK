#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_IMMUTABLE_SECUREOBJECTPOOL_NEWID_OFFSET UNITYSDK_OFFSET(0x1ED872B0)

namespace System::Collections::Immutable
{
	class SecureObjectPool : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_poolUserIdCounter()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Collections.Immutable", "SecureObjectPool")->GetStaticField(0x3D0);
		}

		static ::System::Int32 NewId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IMMUTABLE_SECUREOBJECTPOOL_NEWID_OFFSET))();
		}

	};
}
