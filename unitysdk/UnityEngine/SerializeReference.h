#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SERIALIZEREFERENCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F42C180)

namespace UnityEngine
{
	class SerializeReference : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SERIALIZEREFERENCE_CTOR_OFFSET))(this);
		}

	};
}
