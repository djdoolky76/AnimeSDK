#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorCustomValueChangeV2; }
namespace System { class String; }

#define KMKMAFGBNHK_CTOR_OFFSET UNITYSDK_OFFSET(0xB565790)
#define KMKMAFGBNHK_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xB5659A0)
#define KMKMAFGBNHK__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB565A00)
#define KMKMAFGBNHK__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB565BC0)

	class KMKMAFGBNHK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorCustomValueChangeV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorCustomValueChangeV2*))((::PBYTE)hIl2Cpp + KMKMAFGBNHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ILEMLGEGLCC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMKMAFGBNHK_ILEMLGEGLCC_OFFSET))(this, a1);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKMAFGBNHK__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKMAFGBNHK__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

	};
