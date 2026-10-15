#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIPMNNAHIFP.h"
#include "unitysdk/System/Object.h"
class HGJDKPIBJBI;
namespace RPG::AvatarSystem { class Avatar; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA1AA0)
#define HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15CA37C0)
#define HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATAR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15CA39A0)
#define HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATAR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15CA3930)
#define HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15CA3A00)
#define HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15CA3990)
#define HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15CA3940)
#define HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CA37A0)
#define HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15CA37B0)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	class HGJDKPIBJBI__GetObtainedAvatarsForSync_d__11 : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::Avatar* __2__current; // 0x10
		::System::Object* __7__wrap1; // 0x18
		::System::Byte _padding0[0x20];
		::HGJDKPIBJBI* __4__this; // 0x40
		::OIPMNNAHIFP identifier; // 0x48
		::OIPMNNAHIFP __3__identifier; // 0x4C
		::System::Int32 __l__initialThreadId; // 0x50
		::System::Int32 __1__state; // 0x54
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11___M__FINALLY1_OFFSET))(this);
		}

		::RPG::AvatarSystem::Avatar* System_Collections_Generic_IEnumerator_RPG_AvatarSystem_Avatar__get_Current()
		{
			return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATAR__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::Avatar*>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_Avatar__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::Avatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATAR__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__GETOBTAINEDAVATARSFORSYNC_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
