#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_COLLECTIONSMARSHAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F663530)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int CollectionsMarshal_TypeDefinitionIndex = 6082;

	class CollectionsMarshal : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_ListSize()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Runtime.InteropServices", "CollectionsMarshal")->GetStaticField(0x2D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COLLECTIONSMARSHAL_CCTOR_OFFSET))();
		}

	};
}
