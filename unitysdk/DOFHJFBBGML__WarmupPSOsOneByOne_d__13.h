#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WarmupQualitySet.h"
class DOFHJFBBGML;
class DOFHJFBBGML_IGOIBNLMFLE;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE45B0)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11FE6000)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11FE6BB0)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11FE6B40)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11FE6C50)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11FE6BA0)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11FE6B50)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FE5FB0)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x11FE5FF0)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x11FE5FE0)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x11FE5FD0)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
	class DOFHJFBBGML__WarmupPSOsOneByOne_d__13 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap6; // 0x10
		::System::Byte _padding0[0x10];
		::System::Collections::Generic::List_1<::System::Object*>* _qualityData_5__6; // 0x28
		::System::Object* __7__wrap8; // 0x30
		::System::Byte _padding1[0x10];
		::DOFHJFBBGML* __4__this; // 0x48
		::System::Object* __7__wrap3; // 0x50
		::System::Byte _padding2[0x20];
		::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::System::Object*>*>* __3__warmupPSOs; // 0x78
		::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::System::Object*>*>* warmupPSOs; // 0x80
		::DOFHJFBBGML_IGOIBNLMFLE* _shaderPSOs_5__8; // 0x88
		::System::Object* __2__current; // 0x90
		::System::Int32 __1__state; // 0x98
		::System::Int32 _currentPsoIdx_5__3; // 0x9C
		::System::Int32 _totalPsoCount_5__2; // 0xA0
		::WarmupQualitySet _quality_5__5; // 0xA4
		::System::Int32 __l__initialThreadId; // 0xAC
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13___M__FINALLY2_OFFSET))(this);
		}

		::System::Void __m__Finally3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13___M__FINALLY3_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
