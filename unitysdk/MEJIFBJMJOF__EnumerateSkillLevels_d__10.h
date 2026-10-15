#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class MEJIFBJMJOF;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_CTOR_OFFSET UNITYSDK_OFFSET(0xB8D9CD0)
#define MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB8D9D10)
#define MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB8DA000)
#define MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB8D9F50)
#define MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB8DA080)
#define MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB8D9FB0)
#define MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB8D9F60)
#define MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8D9CF0)
#define MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xB8D9D00)

inline static constexpr unsigned int MEJIFBJMJOF__EnumerateSkillLevels_d__10_TypeDefinitionIndex = 51940;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
	class MEJIFBJMJOF__EnumerateSkillLevels_d__10 : public ::System::Object
	{
	public:
		::MEJIFBJMJOF* __4__this; // 0x10
		::System::Object* __7__wrap1; // 0x18
		::System::Byte _padding0[0x10];
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> __2__current; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10___M__FINALLY1_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> System_Collections_Generic_IEnumerator_System_ValueTuple_System_UInt32_System_UInt32___get_Current()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* System_Collections_Generic_IEnumerable_System_ValueTuple_System_UInt32_System_UInt32___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJIFBJMJOF__ENUMERATESKILLLEVELS_D__10_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
