#pragma once
#include "unitysdk/unitysdk.h"
class CNEBPCHAGNN;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }

#define IECGJFKCPFM_CTOR_OFFSET UNITYSDK_OFFSET(0x15EE1140)
#define IECGJFKCPFM_ONADD_OFFSET UNITYSDK_OFFSET(0x15EE0F50)
#define IECGJFKCPFM_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x15EE10F0)
#define IECGJFKCPFM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x15EE0FB0)

inline static constexpr unsigned int IECGJFKCPFM_TypeDefinitionIndex = 75951;

	class IECGJFKCPFM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECGJFKCPFM_CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::Entitas::IEntity* a1, ::CNEBPCHAGNN* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::CNEBPCHAGNN*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + IECGJFKCPFM_ONADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnUpdate(::Entitas::IEntity* a1, ::CNEBPCHAGNN* a2, ::NNIKOAIKFMO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::CNEBPCHAGNN*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + IECGJFKCPFM_ONUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRemove(::Entitas::IEntity* a1, ::NNIKOAIKFMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::NNIKOAIKFMO*))((::PBYTE)hIl2Cpp + IECGJFKCPFM_ONREMOVE_OFFSET))(this, a1, a2);
		}

	};
