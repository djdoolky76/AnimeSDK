#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGMNKINFKFH.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_CTOR_OFFSET UNITYSDK_OFFSET(0xC518ED0)
#define NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC519030)
#define NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATAREXEIDOLONIDENTIFIER__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC5194B0)
#define NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATAREXEIDOLONIDENTIFIER__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC519400)
#define NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC519510)
#define NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC519460)
#define NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC519410)
#define NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC518EF0)
#define NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xC518F30)

inline static constexpr unsigned int NKHLLOIKMPG__ToExEidolonIdentifiers_d__0_TypeDefinitionIndex = 63995;

	class NKHLLOIKMPG__ToExEidolonIdentifiers_d__0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* __3__exEidolonIDs; // 0x10
		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* exEidolonIDs; // 0x18
		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* __7__wrap1; // 0x20
		::DGMNKINFKFH __2__current; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Int32 __l__initialThreadId; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0___M__FINALLY1_OFFSET))(this);
		}

		::DGMNKINFKFH System_Collections_Generic_IEnumerator_RPG_AvatarSystem_AvatarExEidolonIdentifier__get_Current()
		{
			return ((::DGMNKINFKFH(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATAREXEIDOLONIDENTIFIER__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::DGMNKINFKFH>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_AvatarExEidolonIdentifier__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::DGMNKINFKFH>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATAREXEIDOLONIDENTIFIER__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHLLOIKMPG__TOEXEIDOLONIDENTIFIERS_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
