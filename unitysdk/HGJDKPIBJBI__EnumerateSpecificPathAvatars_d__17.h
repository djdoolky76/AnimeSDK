#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGJDKPIBJBI;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA2740)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15CA3500)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_IAVATAR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15CA36E0)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_IAVATAR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15CA3670)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15CA3740)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15CA36D0)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15CA3680)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CA34E0)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15CA34F0)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
	class HGJDKPIBJBI__EnumerateSpecificPathAvatars_d__17 : public ::System::Object
	{
	public:
		::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>* predicate; // 0x10
		::HGJDKPIBJBI* __4__this; // 0x18
		::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>* __3__predicate; // 0x20
		::RPG::AvatarSystem::IAvatar* __2__current; // 0x28
		::System::Object* __7__wrap1; // 0x30
		::System::Byte _padding0[0x20];
		::System::Int32 __l__initialThreadId; // 0x58
		::System::Int32 __1__state; // 0x5C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17___M__FINALLY1_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* System_Collections_Generic_IEnumerator_RPG_AvatarSystem_IAvatar__get_Current()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_IAVATAR__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::IAvatar*>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_IAvatar__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_IAVATAR__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
