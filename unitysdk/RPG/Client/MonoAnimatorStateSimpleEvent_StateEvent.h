#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoAnimatorStateSimpleEvent; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_STATEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD72EE20)
#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_STATEEVENT_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD72EB00)

namespace RPG::Client
{
	class MonoAnimatorStateSimpleEvent_StateEvent : public ::System::Object
	{
	public:
		::System::Int32 LayerIndex; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* StateName; // 0x18
		::Il2CppArray<::System::Object*>* Events; // 0x20
		::RPG::Client::MonoAnimatorStateSimpleEvent* _Mono; // 0x28
		::System::Int32 _EventIndex; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_STATEEVENT_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::MonoAnimatorStateSimpleEvent* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAnimatorStateSimpleEvent*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_STATEEVENT_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

	};
}
