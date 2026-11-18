#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Unreal { class GameplayTagCollection; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B868730)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B868A50)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B8689E0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B868AD0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B868A40)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B8689F0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B8686F0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8686D0)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1B868720)
#define FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1B868710)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int GameplayTagCollection__Collect_d__3_TypeDefinitionIndex = 17576;

	template <typename T1, typename T2, typename T3>
	class GameplayTagCollection__Collect_d__3 : public ::System::Object
	{
	public:
		::System::String* __2__current; // 0x10
		::System::Object* __7__wrap3; // 0x18
		::System::Byte _padding0[0x10];
		::System::Collections::Generic::List_1<::System::String*>* _tags_5__2; // 0x30
		::System::Object* __7__wrap2; // 0x38
		::System::Byte _padding1[0x10];
		::Foundation::Unreal::GameplayTagCollection* __4__this; // 0x50
		::System::Int32 __1__state; // 0x58
		::System::Int32 __l__initialThreadId; // 0x5C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3___M__FINALLY2_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_GAMEPLAYTAGCOLLECTION__COLLECT_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
