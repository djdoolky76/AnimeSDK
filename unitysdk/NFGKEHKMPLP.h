#pragma once
#include "unitysdk/unitysdk.h"
class GELNHFKCMFN;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define NFGKEHKMPLP_CTOR_OFFSET UNITYSDK_OFFSET(0xBB939A0)
#define NFGKEHKMPLP_ONADD_OFFSET UNITYSDK_OFFSET(0xBB93890)
#define NFGKEHKMPLP_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xBB93950)
#define NFGKEHKMPLP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBB938F0)

	class NFGKEHKMPLP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGKEHKMPLP_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::GELNHFKCMFN* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::GELNHFKCMFN*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + NFGKEHKMPLP_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::GELNHFKCMFN* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::GELNHFKCMFN*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + NFGKEHKMPLP_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + NFGKEHKMPLP_ONREMOVE_OFFSET))(this, a1, a2);
		}

	};
