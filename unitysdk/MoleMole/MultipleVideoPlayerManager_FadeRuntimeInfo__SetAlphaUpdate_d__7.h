#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MultipleVideoPlayerManager_FadeRuntimeInfo; }

#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO__SETALPHAUPDATE_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x139FCF90)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO__SETALPHAUPDATE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x139FD0B0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO__SETALPHAUPDATE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x139FD110)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO__SETALPHAUPDATE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x139FD0C0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO__SETALPHAUPDATE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139FCF80)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO__SETALPHAUPDATE_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0x139FCF70)

namespace MoleMole
{
	inline static constexpr unsigned int MultipleVideoPlayerManager_FadeRuntimeInfo__SetAlphaUpdate_d__7_TypeDefinitionIndex = 44948;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class MultipleVideoPlayerManager_FadeRuntimeInfo__SetAlphaUpdate_d__7 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MoleMole::MultipleVideoPlayerManager_FadeRuntimeInfo* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Boolean isFadeIn; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single _curTime_5__2; // 0x28
		::System::Single time; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO__SETALPHAUPDATE_D__7__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO__SETALPHAUPDATE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO__SETALPHAUPDATE_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO__SETALPHAUPDATE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO__SETALPHAUPDATE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO__SETALPHAUPDATE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
