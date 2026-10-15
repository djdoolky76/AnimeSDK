#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SERIALIZEFIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F42C170)

namespace UnityEngine
{
	class SerializeField : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SERIALIZEFIELD_CTOR_OFFSET))(this);
		}

	};
}
