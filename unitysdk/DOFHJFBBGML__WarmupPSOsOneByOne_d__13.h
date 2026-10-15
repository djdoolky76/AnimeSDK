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

#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_CTOR_OFFSET UNITYSDK_OFFSET(0x11FDF1A0)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11FE0BF0)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11FE17A0)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11FE1730)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11FE1840)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11FE1790)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11FE1740)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FE0BA0)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x11FE0BE0)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x11FE0BD0)
#define DOFHJFBBGML__WARMUPPSOSONEBYONE_D__13___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x11FE0BC0)

inline static constexpr unsigned int DOFHJFBBGML__WarmupPSOsOneByOne_d__13_TypeDefinitionIndex = 47427;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
	class DOFHJFBBGML__WarmupPSOsOneByOne_d__13 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap6; // 0x10
		::System::Byte _padding0[0x10];
		::System::Object* __7__wrap8; // 0x28
		::System::Byte _padding1[0x10];
		::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::System::Object*>*>* warmupPSOs; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* _qualityData_5__6; // 0x48
		::System::Object* __2__current; // 0x50
		::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::System::Object*>*>* __3__warmupPSOs; // 0x58
		::DOFHJFBBGML_IGOIBNLMFLE* _shaderPSOs_5__8; // 0x60
		::DOFHJFBBGML* __4__this; // 0x68
		::System::Object* __7__wrap3; // 0x70
		::System::Byte _padding2[0x20];
		::System::Int32 __l__initialThreadId; // 0x98
		::WarmupQualitySet _quality_5__5; // 0x9C
		::System::Int32 _currentPsoIdx_5__3; // 0xA4
		::System::Int32 _totalPsoCount_5__2; // 0xA8
		::System::Int32 __1__state; // 0xAC
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
