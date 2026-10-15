#pragma once
#include "unitysdk/unitysdk.h"
class MKBPLNIIHID;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define FMPMODMBFPA_CTOR_OFFSET UNITYSDK_OFFSET(0x15867CF0)
#define FMPMODMBFPA_ONADD_OFFSET UNITYSDK_OFFSET(0x158678E0)
#define FMPMODMBFPA_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x15867BA0)
#define FMPMODMBFPA_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x15867A20)

inline static constexpr unsigned int FMPMODMBFPA_TypeDefinitionIndex = 79114;

	class FMPMODMBFPA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPMODMBFPA_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::MKBPLNIIHID* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::MKBPLNIIHID*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + FMPMODMBFPA_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::MKBPLNIIHID* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::MKBPLNIIHID*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + FMPMODMBFPA_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + FMPMODMBFPA_ONREMOVE_OFFSET))(this, a1, a2);
		}

	};
