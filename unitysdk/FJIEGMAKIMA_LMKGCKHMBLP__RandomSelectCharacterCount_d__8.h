#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJIEGMAKIMA_LMKGCKHMBLP;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_CTOR_OFFSET UNITYSDK_OFFSET(0x157CDDC0)
#define FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x157CDE00)
#define FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x157CE110)
#define FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x157CE080)
#define FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x157CE190)
#define FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x157CE0E0)
#define FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x157CE090)
#define FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157CDDE0)
#define FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x157CDDF0)

inline static constexpr unsigned int FJIEGMAKIMA_LMKGCKHMBLP__RandomSelectCharacterCount_d__8_TypeDefinitionIndex = 60230;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	class FJIEGMAKIMA_LMKGCKHMBLP__RandomSelectCharacterCount_d__8 : public ::System::Object
	{
	public:
		::FJIEGMAKIMA_LMKGCKHMBLP* __4__this; // 0x10
		::System::Object* __7__wrap1; // 0x18
		::System::Byte _padding0[0x10];
		::System::Int32 __1__state; // 0x30
		::System::Int32 __2__current; // 0x34
		::System::Int32 __l__initialThreadId; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8___M__FINALLY1_OFFSET))(this);
		}

		::System::Int32 System_Collections_Generic_IEnumerator_System_Int32__get_Current()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Int32>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP__RANDOMSELECTCHARACTERCOUNT_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
