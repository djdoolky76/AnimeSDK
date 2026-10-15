#pragma once
#include "unitysdk/unitysdk.h"
class NNIKOAIKFMO;
class PKJCKJKKKCA;
namespace Entitas { class IEntity; }

#define IIGOFEDFDIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1643C990)
#define IIGOFEDFDIG_ONADD_OFFSET UNITYSDK_OFFSET(0x1643BD60)
#define IIGOFEDFDIG_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1643C840)
#define IIGOFEDFDIG_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1643C050)

inline static constexpr unsigned int IIGOFEDFDIG_TypeDefinitionIndex = 79115;

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
