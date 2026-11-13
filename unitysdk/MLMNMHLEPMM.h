#pragma once
#include "unitysdk/unitysdk.h"
class MCACNDOPNEB;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define MLMNMHLEPMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B92A2D0)
#define MLMNMHLEPMM_ONADD_OFFSET UNITYSDK_OFFSET(0x1B929E80)
#define MLMNMHLEPMM_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1B92A280)
#define MLMNMHLEPMM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B92A040)

inline static constexpr unsigned int MLMNMHLEPMM_TypeDefinitionIndex = 81903;

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
