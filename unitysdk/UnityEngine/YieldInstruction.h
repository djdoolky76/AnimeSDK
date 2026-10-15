#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_YIELDINSTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F440E40)

namespace UnityEngine
{
	class YieldInstruction : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YIELDINSTRUCTION_CTOR_OFFSET))(this);
		}

	};
}
