#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
class BAGIHIEADIL;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_CTOR_OFFSET UNITYSDK_OFFSET(0x15BD2C10)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15BD2D30)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_RPG_GAMECORE_STRINGHASH_RPG_GAMECORE_FIXPOINT___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15BD3270)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_RPG_GAMECORE_STRINGHASH_RPG_GAMECORE_FIXPOINT___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15BD31C0)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15BD32F0)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15BD3220)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15BD31D0)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BD2D10)
#define BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15BD2D20)

inline static constexpr unsigned int BAGIHIEADIL__GetAllValuesWithOverride_d__8_TypeDefinitionIndex = 56852;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	class BAGIHIEADIL__GetAllValuesWithOverride_d__8 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap1; // 0x10
		::System::Byte _padding0[0x20];
		::BAGIHIEADIL* __4__this; // 0x38
		::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint> __2__current; // 0x40
		::System::Byte _padding1[0x8];
		::System::Int32 __1__state; // 0x50
		::RPG::GameCore::StringHash _key_5__3; // 0x54
		::System::Int32 __l__initialThreadId; // 0x58
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

		::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_RPG_GameCore_StringHash_RPG_GameCore_FixPoint___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_RPG_GAMECORE_STRINGHASH_RPG_GAMECORE_FIXPOINT___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_RPG_GameCore_StringHash_RPG_GameCore_FixPoint___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_RPG_GAMECORE_STRINGHASH_RPG_GAMECORE_FIXPOINT___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL__GETALLVALUESWITHOVERRIDE_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
