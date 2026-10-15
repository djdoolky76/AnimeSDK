#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_TIMEREWINDRECORDTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0xE2865A0)

namespace RPG::Client
{
	class TimeRewindRecordTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDRECORDTRIGGER_CTOR_OFFSET))(this);
		}

	};
}
