#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGJDKPIBJBI;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_CTOR_OFFSET UNITYSDK_OFFSET(0x15C95D30)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15C96AF0)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_IAVATAR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15C96CD0)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_IAVATAR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15C96C60)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15C96D30)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15C96CC0)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15C96C70)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C96AD0)
#define HGJDKPIBJBI__ENUMERATESPECIFICPATHAVATARS_D__17___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15C96AE0)

inline static constexpr unsigned int HGJDKPIBJBI__EnumerateSpecificPathAvatars_d__17_TypeDefinitionIndex = 62670;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
	class HGJDKPIBJBI__EnumerateSpecificPathAvatars_d__17 : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* __2__current; // 0x10
		::System::Object* __7__wrap1; // 0x18
		::System::Byte _padding0[0x20];
		::HGJDKPIBJBI* __4__this; // 0x40
		::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>* predicate; // 0x48
		::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>* __3__predicate; // 0x50
		::System::Int32 __1__state; // 0x58
		::System::Int32 __l__initialThreadId; // 0x5C
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
