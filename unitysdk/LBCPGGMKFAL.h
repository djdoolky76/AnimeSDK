#pragma once
#include "unitysdk/unitysdk.h"
class FBAOECBDMIC;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define LBCPGGMKFAL_AHGKFPAHKDB_OFFSET UNITYSDK_OFFSET(0xB5EFA70)
#define LBCPGGMKFAL_CTOR_OFFSET UNITYSDK_OFFSET(0xB5EFEE0)
#define LBCPGGMKFAL_ONADD_OFFSET UNITYSDK_OFFSET(0xB5EF950)
#define LBCPGGMKFAL_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xB5EFD70)
#define LBCPGGMKFAL_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB5EFC40)

inline static constexpr unsigned int LBCPGGMKFAL_TypeDefinitionIndex = 79119;

	class LBCPGGMKFAL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCPGGMKFAL_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::FBAOECBDMIC* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::FBAOECBDMIC*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + LBCPGGMKFAL_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::FBAOECBDMIC* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::FBAOECBDMIC*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + LBCPGGMKFAL_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + LBCPGGMKFAL_ONREMOVE_OFFSET))(this, a1, a2);
		}

		::System::Boolean AHGKFPAHKDB(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + LBCPGGMKFAL_AHGKFPAHKDB_OFFSET))(this, a1, a2);
		}

	};
