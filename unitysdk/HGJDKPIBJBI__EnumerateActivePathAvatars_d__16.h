#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGJDKPIBJBI;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA26A0)
#define HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15CA3270)
#define HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_IAVATAR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15CA3420)
#define HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_IAVATAR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15CA33B0)
#define HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15CA3480)
#define HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15CA3410)
#define HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15CA33C0)
#define HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CA3250)
#define HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15CA3260)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
	class HGJDKPIBJBI__EnumerateActivePathAvatars_d__16 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap1; // 0x10
		::System::Byte _padding0[0x20];
		::RPG::AvatarSystem::IAvatar* __2__current; // 0x38
		::HGJDKPIBJBI* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Int32 __l__initialThreadId; // 0x4C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16___M__FINALLY1_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* System_Collections_Generic_IEnumerator_RPG_AvatarSystem_IAvatar__get_Current()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_IAVATAR__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::IAvatar*>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_IAvatar__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_IAVATAR__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATEACTIVEPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
