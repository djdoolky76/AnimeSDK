#pragma once
#include "unitysdk/unitysdk.h"
class GDIFFKOHFDE;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define GDNOIPPPGEO_CTOR_OFFSET UNITYSDK_OFFSET(0x168F7140)
#define GDNOIPPPGEO_ONADD_OFFSET UNITYSDK_OFFSET(0x168F6B80)
#define GDNOIPPPGEO_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x168F70F0)
#define GDNOIPPPGEO_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x168F6BE0)

inline static constexpr unsigned int GDNOIPPPGEO_TypeDefinitionIndex = 81902;

	class GDNOIPPPGEO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNOIPPPGEO_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::GDIFFKOHFDE* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::GDIFFKOHFDE*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + GDNOIPPPGEO_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::GDIFFKOHFDE* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::GDIFFKOHFDE*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + GDNOIPPPGEO_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + GDNOIPPPGEO_ONREMOVE_OFFSET))(this, a1, a2);
		}

	};
