#pragma once
#include "unitysdk/unitysdk.h"
class GAICBMDAOFB;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define PMIECHOGDFN_CTOR_OFFSET UNITYSDK_OFFSET(0xC31F810)
#define PMIECHOGDFN_ONADD_OFFSET UNITYSDK_OFFSET(0xC31F350)
#define PMIECHOGDFN_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xC31F6C0)
#define PMIECHOGDFN_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC31F540)

	class PMIECHOGDFN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIECHOGDFN_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::GAICBMDAOFB* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::GAICBMDAOFB*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + PMIECHOGDFN_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::GAICBMDAOFB* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::GAICBMDAOFB*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + PMIECHOGDFN_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + PMIECHOGDFN_ONREMOVE_OFFSET))(this, a1, a2);
		}

	};
