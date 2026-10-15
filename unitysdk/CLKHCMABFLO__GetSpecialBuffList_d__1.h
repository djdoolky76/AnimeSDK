#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLKHCMABFLO;
class EANJILGOKBE;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_CTOR_OFFSET UNITYSDK_OFFSET(0xD789F00)
#define CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD78B100)
#define CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_BATTLECHARACTERHUDSPECIALBUFFDATA__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD78B310)
#define CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_BATTLECHARACTERHUDSPECIALBUFFDATA__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD78B2A0)
#define CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD78B370)
#define CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD78B300)
#define CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD78B2B0)
#define CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD78B0E0)
#define CLKHCMABFLO__GETSPECIALBUFFLIST_D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xD78B0F0)

inline static constexpr unsigned int CLKHCMABFLO__GetSpecialBuffList_d__1_TypeDefinitionIndex = 71439;

	template <typename T>
	class CLKHCMABFLO__GetSpecialBuffList_d__1 : public ::System::Object
	{
	public:
		::EANJILGOKBE* __2__current; // 0x10
		::CLKHCMABFLO* __4__this; // 0x18
		::System::Object* __7__wrap1; // 0x20
		::System::Byte _padding0[0x10];
		::System::Int32 __l__initialThreadId; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKHCMABFLO__GETSPECIALBUFFLIST_D__1___M__FINALLY1_OFFSET))(this);
		}

		::EANJILGOKBE* System_Collections_Generic_IEnumerator_RPG_Client_BattleCharacterHUDSpecialBuffData__get_Current()
		{
			return ((::EANJILGOKBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_BATTLECHARACTERHUDSPECIALBUFFDATA__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::EANJILGOKBE*>* System_Collections_Generic_IEnumerable_RPG_Client_BattleCharacterHUDSpecialBuffData__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::EANJILGOKBE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_BATTLECHARACTERHUDSPECIALBUFFDATA__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKHCMABFLO__GETSPECIALBUFFLIST_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
