#pragma once
#include "unitysdk/unitysdk.h"
class GBJHOMFKNDE;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define CLKIJGIGDHD_CTOR_OFFSET UNITYSDK_OFFSET(0xD78B5B0)
#define CLKIJGIGDHD_ONADD_OFFSET UNITYSDK_OFFSET(0xD78B3D0)
#define CLKIJGIGDHD_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xD78B560)
#define CLKIJGIGDHD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD78B430)

inline static constexpr unsigned int CLKIJGIGDHD_TypeDefinitionIndex = 75955;

	class CLKIJGIGDHD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKIJGIGDHD_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::GBJHOMFKNDE* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::GBJHOMFKNDE*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + CLKIJGIGDHD_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::GBJHOMFKNDE* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::GBJHOMFKNDE*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + CLKIJGIGDHD_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + CLKIJGIGDHD_ONREMOVE_OFFSET))(this, a1, a2);
		}

	};
