#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class INFGFDMJBKK;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_CTOR_OFFSET UNITYSDK_OFFSET(0x164EC270)
#define INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x164EC2B0)
#define INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x164EC5A0)
#define INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x164EC4F0)
#define INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x164EC620)
#define INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x164EC550)
#define INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x164EC500)
#define INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164EC290)
#define INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x164EC2A0)

inline static constexpr unsigned int INFGFDMJBKK__EnumerateSkillLevels_d__4_TypeDefinitionIndex = 62790;

	template <typename T1, typename T2, typename T3, typename T4>
	class INFGFDMJBKK__EnumerateSkillLevels_d__4 : public ::System::Object
	{
	public:
		::INFGFDMJBKK* __4__this; // 0x10
		::System::Object* __7__wrap1; // 0x18
		::System::Byte _padding0[0x10];
		::System::Int32 __l__initialThreadId; // 0x30
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> __2__current; // 0x34
		::System::Int32 __1__state; // 0x3C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4___M__FINALLY1_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> System_Collections_Generic_IEnumerator_System_ValueTuple_System_UInt32_System_UInt32___get_Current()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* System_Collections_Generic_IEnumerable_System_ValueTuple_System_UInt32_System_UInt32___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_SYSTEM_UINT32___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + INFGFDMJBKK__ENUMERATESKILLLEVELS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
