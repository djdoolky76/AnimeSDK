#pragma once
#include "unitysdk/unitysdk.h"
class MKBPLNIIHID;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define FMPMODMBFPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1585BF60)
#define FMPMODMBFPA_ONADD_OFFSET UNITYSDK_OFFSET(0x1585BB50)
#define FMPMODMBFPA_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1585BE10)
#define FMPMODMBFPA_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1585BC90)

inline static constexpr unsigned int FMPMODMBFPA_TypeDefinitionIndex = 79113;

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
