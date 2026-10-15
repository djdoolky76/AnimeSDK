#pragma once
#include "unitysdk/unitysdk.h"
class NNIKOAIKFMO;
class PKJCKJKKKCA;
namespace Entitas { class IEntity; }

#define IIGOFEDFDIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1642F5A0)
#define IIGOFEDFDIG_ONADD_OFFSET UNITYSDK_OFFSET(0x1642E990)
#define IIGOFEDFDIG_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1642F450)
#define IIGOFEDFDIG_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1642EC70)

inline static constexpr unsigned int IIGOFEDFDIG_TypeDefinitionIndex = 79114;

	class IIGOFEDFDIG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGOFEDFDIG_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::PKJCKJKKKCA* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::PKJCKJKKKCA*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + IIGOFEDFDIG_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::PKJCKJKKKCA* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::PKJCKJKKKCA*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + IIGOFEDFDIG_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + IIGOFEDFDIG_ONREMOVE_OFFSET))(this, a1, a2);
		}

	};
