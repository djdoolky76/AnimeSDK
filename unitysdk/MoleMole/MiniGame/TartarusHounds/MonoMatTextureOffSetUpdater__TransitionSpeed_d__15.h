#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::TartarusHounds { class MonoMatTextureOffSetUpdater; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER__TRANSITIONSPEED_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1192F2B0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER__TRANSITIONSPEED_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1192F390)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER__TRANSITIONSPEED_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1192F3F0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER__TRANSITIONSPEED_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1192F3A0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER__TRANSITIONSPEED_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1192F2A0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER__TRANSITIONSPEED_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x1192F290)

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int MonoMatTextureOffSetUpdater__TransitionSpeed_d__15_TypeDefinitionIndex = 89220;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
	class MonoMatTextureOffSetUpdater__TransitionSpeed_d__15 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MoleMole::MiniGame::TartarusHounds::MonoMatTextureOffSetUpdater* __4__this; // 0x18
		::System::Single target; // 0x20
		::System::Single waitTime; // 0x24
		::System::Single start; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Single _deltaTime_5__2; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER__TRANSITIONSPEED_D__15__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER__TRANSITIONSPEED_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER__TRANSITIONSPEED_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER__TRANSITIONSPEED_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER__TRANSITIONSPEED_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOMATTEXTUREOFFSETUPDATER__TRANSITIONSPEED_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
