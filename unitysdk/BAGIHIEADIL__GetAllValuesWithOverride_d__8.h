#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
class BAGIHIEADIL;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_CTOR_OFFSET UNITYSDK_OFFSET(0x15BDECD0)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15BDEDF0)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_RPG_GAMECORE_STRINGHASH_RPG_GAMECORE_FIXPOINT___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15BDF330)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_RPG_GAMECORE_STRINGHASH_RPG_GAMECORE_FIXPOINT___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15BDF280)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15BDF3B0)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15BDF2E0)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15BDF290)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BDEDD0)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15BDEDE0)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	class BAGIHIEADIL__GetAllValuesWithOverride_d__8 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap1; // 0x10
		::System::Byte _padding0[0x20];
		::BAGIHIEADIL* __4__this; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::KeyValuePair* __2__current; // 0x48
		::System::Byte _padding2[0x8];
		::RPG::GameCore::StringHash _key_5__3; // 0x58
		::System::Int32 __l__initialThreadId; // 0x5C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8___M__FINALLY1_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair* System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_RPG_GameCore_StringHash_RPG_GameCore_FixPoint___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_RPG_GAMECORE_STRINGHASH_RPG_GAMECORE_FIXPOINT___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair*>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_RPG_GameCore_StringHash_RPG_GameCore_FixPoint___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_RPG_GAMECORE_STRINGHASH_RPG_GAMECORE_FIXPOINT___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
