#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNMDLFNKKCP;
class PAADPKGPFMJ;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC43B0)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBFC43F0)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_FREESTYLESUBINSTANCE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBFC4650)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_FREESTYLESUBINSTANCE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBFC45E0)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBFC46D0)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBFC4640)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBFC45F0)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFC43D0)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xBFC43E0)

inline static constexpr unsigned int PAADPKGPFMJ__GetAllSubInstances_d__1_TypeDefinitionIndex = 57290;

	template <typename T>
	class PAADPKGPFMJ__GetAllSubInstances_d__1 : public ::System::Object
	{
	public:
		::PAADPKGPFMJ* __4__this; // 0x10
		::System::Object* __7__wrap1; // 0x18
		::System::Byte _padding0[0x10];
		::NNMDLFNKKCP* __2__current; // 0x30
		::System::Int32 __l__initialThreadId; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ__GETALLSUBINSTANCES_D__1___M__FINALLY1_OFFSET))(this);
		}

		::NNMDLFNKKCP* System_Collections_Generic_IEnumerator_RPG_GameCore_FreeStyleSubInstance__get_Current()
		{
			return ((::NNMDLFNKKCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_FREESTYLESUBINSTANCE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NNMDLFNKKCP*>* System_Collections_Generic_IEnumerable_RPG_GameCore_FreeStyleSubInstance__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNMDLFNKKCP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_FREESTYLESUBINSTANCE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
