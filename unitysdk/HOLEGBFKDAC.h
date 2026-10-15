#pragma once
#include "unitysdk/unitysdk.h"
class LHHKOJNJODO;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define HOLEGBFKDAC_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB9DF0)
#define HOLEGBFKDAC_ONADD_OFFSET UNITYSDK_OFFSET(0x15DB9CE0)
#define HOLEGBFKDAC_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x15DB9DA0)
#define HOLEGBFKDAC_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x15DB9D40)

inline static constexpr unsigned int HOLEGBFKDAC_TypeDefinitionIndex = 76480;

	class HOLEGBFKDAC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOLEGBFKDAC_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::LHHKOJNJODO* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::LHHKOJNJODO*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + HOLEGBFKDAC_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::LHHKOJNJODO* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::LHHKOJNJODO*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + HOLEGBFKDAC_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + HOLEGBFKDAC_ONREMOVE_OFFSET))(this, a1, a2);
		}

	};
