#pragma once
#include "unitysdk/unitysdk.h"
class JIONCIBJGOK;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define DNIOJDFGBPD_AHGKFPAHKDB_OFFSET UNITYSDK_OFFSET(0x1195DC40)
#define DNIOJDFGBPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1195DE60)
#define DNIOJDFGBPD_ONADD_OFFSET UNITYSDK_OFFSET(0x1195DA60)
#define DNIOJDFGBPD_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1195DE10)
#define DNIOJDFGBPD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1195DAC0)

inline static constexpr unsigned int DNIOJDFGBPD_TypeDefinitionIndex = 79126;

	class DNIOJDFGBPD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIOJDFGBPD_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::JIONCIBJGOK* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::JIONCIBJGOK*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + DNIOJDFGBPD_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::JIONCIBJGOK* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::JIONCIBJGOK*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + DNIOJDFGBPD_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + DNIOJDFGBPD_ONREMOVE_OFFSET))(this, a1, a2);
		}

		::System::Boolean AHGKFPAHKDB(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + DNIOJDFGBPD_AHGKFPAHKDB_OFFSET))(this, a1, a2);
		}

	};
