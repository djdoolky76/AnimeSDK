#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/MonoComicEventBase.h"

namespace UnityEngine::Timeline { class LogicEventBase; }

#define MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_ALJNKBIPAEM_OFFSET UNITYSDK_OFFSET(0x163F4420)
#define MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x163F4280)
#define MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_JUMPTOFINALSTATE_OFFSET UNITYSDK_OFFSET(0x163F4340)
#define MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_JUMPTOFINAL_OFFSET UNITYSDK_OFFSET(0x163F4390)
#define MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x163F42E0)
#define MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x163F43D0)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int RuntimeComicLogicEventBase_TypeDefinitionIndex = 77991;

	class RuntimeComicLogicEventBase : public ::MoleMole::Comic::MonoComicEventBase
	{
	public:
		::System::Single JEJCEJHLFFD; // 0x50
		::System::Single EAJDDDJEGGL; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE__CTOR_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::LogicEventBase* IGLBHBHINFH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::LogicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_INITWITHBASE_OFFSET))(this, IGLBHBHINFH);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void JumpToFinalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_JUMPTOFINALSTATE_OFFSET))(this);
		}

		::System::Void JumpToFinal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_JUMPTOFINAL_OFFSET))(this);
		}

		::System::Void ALJNKBIPAEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_RUNTIMECOMICLOGICEVENTBASE_ALJNKBIPAEM_OFFSET))(this);
		}
	};
}
