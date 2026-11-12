#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_CTOR_OFFSET UNITYSDK_OFFSET(0x167115D0)
#define ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x167120C0)
#define ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x167125B0)
#define ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16712520)
#define ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16712630)
#define ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16712580)
#define ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16712530)
#define ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16711F80)
#define ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x16711FC0)

inline static constexpr unsigned int ANMKNHJIAMA__GetTraitIDsForPos_d__6_TypeDefinitionIndex = 66639;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class ANMKNHJIAMA__GetTraitIDsForPos_d__6 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* __7__wrap1; // 0x10
		::System::UInt32 __2__current; // 0x18
		::System::Int32 __1__state; // 0x1C
		::System::UInt32 __3__posIndex; // 0x20
		::System::Int32 __l__initialThreadId; // 0x24
		::System::UInt32 posIndex; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6___M__FINALLY1_OFFSET))(this);
		}

		::System::UInt32 System_Collections_Generic_IEnumerator_System_UInt32__get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* System_Collections_Generic_IEnumerable_System_UInt32__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMKNHJIAMA__GETTRAITIDSFORPOS_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
