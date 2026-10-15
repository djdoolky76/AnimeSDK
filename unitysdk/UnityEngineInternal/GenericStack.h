#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Stack.h"

#define UNITYENGINEINTERNAL_GENERICSTACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F441F90)

namespace UnityEngineInternal
{
	class GenericStack : public ::System::Collections::Stack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_GENERICSTACK_CTOR_OFFSET))(this);
		}

	};
}
