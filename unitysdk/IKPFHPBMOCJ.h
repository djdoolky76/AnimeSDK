#pragma once
#include "unitysdk/unitysdk.h"
class GBJHOMFKNDE;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define IKPFHPBMOCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1649FF90)
#define IKPFHPBMOCJ_ONADD_OFFSET UNITYSDK_OFFSET(0x1649FCB0)
#define IKPFHPBMOCJ_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1649FF40)
#define IKPFHPBMOCJ_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1649FD10)

inline static constexpr unsigned int IKPFHPBMOCJ_TypeDefinitionIndex = 76481;

	class IKPFHPBMOCJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPFHPBMOCJ_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::GBJHOMFKNDE* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::GBJHOMFKNDE*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + IKPFHPBMOCJ_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::GBJHOMFKNDE* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::GBJHOMFKNDE*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + IKPFHPBMOCJ_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + IKPFHPBMOCJ_ONREMOVE_OFFSET))(this, a1, a2);
		}

	};
