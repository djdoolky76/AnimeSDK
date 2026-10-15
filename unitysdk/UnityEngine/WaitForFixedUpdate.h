#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/YieldInstruction.h"

#define UNITYENGINE_WAITFORFIXEDUPDATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F440E50)

namespace UnityEngine
{
	class WaitForFixedUpdate : public ::UnityEngine::YieldInstruction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITFORFIXEDUPDATE_CTOR_OFFSET))(this);
		}

	};
}
