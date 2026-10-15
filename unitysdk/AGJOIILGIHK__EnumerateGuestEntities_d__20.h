#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGJOIILGIHK;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_CTOR_OFFSET UNITYSDK_OFFSET(0xCF3AC80)
#define AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCF3C510)
#define AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_UINT32_RPG_GAMECORE_GAMEENTITY___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCF3C710)
#define AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_UINT32_RPG_GAMECORE_GAMEENTITY___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCF3C660)
#define AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCF3C790)
#define AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCF3C6C0)
#define AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCF3C670)
#define AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF3C4F0)
#define AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xCF3C500)

inline static constexpr unsigned int AGJOIILGIHK__EnumerateGuestEntities_d__20_TypeDefinitionIndex = 66411;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
	class AGJOIILGIHK__EnumerateGuestEntities_d__20 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap1; // 0x10
		::System::Byte _padding0[0x20];
		::System::Collections::Generic::KeyValuePair* __2__current; // 0x38
		::System::Byte _padding1[0x8];
		::AGJOIILGIHK* __4__this; // 0x48
		::System::Int32 __1__state; // 0x50
		::System::Int32 __l__initialThreadId; // 0x54
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20___M__FINALLY1_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair* System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_UInt32_RPG_GameCore_GameEntity___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_UINT32_RPG_GAMECORE_GAMEENTITY___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair*>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_UInt32_RPG_GameCore_GameEntity___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_UINT32_RPG_GAMECORE_GAMEENTITY___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK__ENUMERATEGUESTENTITIES_D__20_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
