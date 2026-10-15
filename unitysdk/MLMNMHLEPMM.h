#pragma once
#include "unitysdk/unitysdk.h"
class MCACNDOPNEB;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define MLMNMHLEPMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B4BF0)
#define MLMNMHLEPMM_ONADD_OFFSET UNITYSDK_OFFSET(0xB9B47A0)
#define MLMNMHLEPMM_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xB9B4BA0)
#define MLMNMHLEPMM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB9B4960)

inline static constexpr unsigned int MLMNMHLEPMM_TypeDefinitionIndex = 79127;

	class MLMNMHLEPMM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMNMHLEPMM_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::MCACNDOPNEB* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::MCACNDOPNEB*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + MLMNMHLEPMM_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::MCACNDOPNEB* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::MCACNDOPNEB*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + MLMNMHLEPMM_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + MLMNMHLEPMM_ONREMOVE_OFFSET))(this, a1, a2);
		}

	};
