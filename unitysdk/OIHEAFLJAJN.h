#pragma once
#include "unitysdk/unitysdk.h"
class EPLACBCPLGK;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define OIHEAFLJAJN_CTOR_OFFSET UNITYSDK_OFFSET(0xBE949A0)
#define OIHEAFLJAJN_ONADD_OFFSET UNITYSDK_OFFSET(0xBE94890)
#define OIHEAFLJAJN_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xBE94950)
#define OIHEAFLJAJN_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBE948F0)

inline static constexpr unsigned int OIHEAFLJAJN_TypeDefinitionIndex = 75954;

	class OIHEAFLJAJN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHEAFLJAJN_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::EPLACBCPLGK* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::EPLACBCPLGK*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + OIHEAFLJAJN_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::EPLACBCPLGK* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::EPLACBCPLGK*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + OIHEAFLJAJN_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + OIHEAFLJAJN_ONREMOVE_OFFSET))(this, a1, a2);
		}

	};
