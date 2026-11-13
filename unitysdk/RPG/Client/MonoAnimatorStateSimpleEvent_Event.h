#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x198774A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorStateSimpleEvent_Event_TypeDefinitionIndex = 70470;

	class MonoAnimatorStateSimpleEvent_Event : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_CTOR_OFFSET))(this);
		}

	};
}
