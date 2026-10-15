#pragma once
#include "unitysdk/unitysdk.h"
class JGHKOBIIEFC;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define IFKBCHMIHCN_CTOR_OFFSET UNITYSDK_OFFSET(0x15F1ECE0)
#define IFKBCHMIHCN_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x15F1F000)
#define IFKBCHMIHCN__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15F1EE80)
#define IFKBCHMIHCN__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15F1EF40)

	class IFKBCHMIHCN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JGHKOBIIEFC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JGHKOBIIEFC*))((::PBYTE)hIl2Cpp + IFKBCHMIHCN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKBCHMIHCN__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKBCHMIHCN__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFKBCHMIHCN_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
