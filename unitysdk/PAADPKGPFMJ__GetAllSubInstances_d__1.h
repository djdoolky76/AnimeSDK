#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNMDLFNKKCP;
class PAADPKGPFMJ;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_CTOR_OFFSET UNITYSDK_OFFSET(0x18AC8590)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18AD3360)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_FREESTYLESUBINSTANCE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18AD35C0)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_FREESTYLESUBINSTANCE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18AD3550)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18AD3640)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18AD35B0)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18AD3560)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18AD3340)
#define PAADPKGPFMJ__GETALLSUBINSTANCES_D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x18AD3350)

inline static constexpr unsigned int PAADPKGPFMJ__GetAllSubInstances_d__1_TypeDefinitionIndex = 58517;

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
