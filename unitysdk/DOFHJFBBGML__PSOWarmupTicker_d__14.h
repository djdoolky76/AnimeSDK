#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WarmupQualitySet.h"
class DOFHJFBBGML;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DOFHJFBBGML__PSOWARMUPTICKER_D__14_CTOR_OFFSET UNITYSDK_OFFSET(0x11FDF1C0)
#define DOFHJFBBGML__PSOWARMUPTICKER_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11FE04C0)
#define DOFHJFBBGML__PSOWARMUPTICKER_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11FE0AA0)
#define DOFHJFBBGML__PSOWARMUPTICKER_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11FE0A30)
#define DOFHJFBBGML__PSOWARMUPTICKER_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11FE0B20)
#define DOFHJFBBGML__PSOWARMUPTICKER_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11FE0A90)
#define DOFHJFBBGML__PSOWARMUPTICKER_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11FE0A40)
#define DOFHJFBBGML__PSOWARMUPTICKER_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FE0350)
#define DOFHJFBBGML__PSOWARMUPTICKER_D__14___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x11FE0390)

inline static constexpr unsigned int DOFHJFBBGML__PSOWarmupTicker_d__14_TypeDefinitionIndex = 47426;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
	class DOFHJFBBGML__PSOWarmupTicker_d__14 : public ::System::Object
	{
	public:
		::DOFHJFBBGML* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::System::Object*>*>* __3__warmupPSOs; // 0x20
		::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::System::Object*>*>* warmupPSOs; // 0x28
		::System::Collections::IEnumerator* __7__wrap3; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Int32 _warmupCntRemainDuringTick_5__2; // 0x3C
		::System::Int32 _warmupCntRemain_5__3; // 0x40
		::System::Int32 __l__initialThreadId; // 0x44
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOFHJFBBGML__PSOWARMUPTICKER_D__14_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__PSOWARMUPTICKER_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__PSOWARMUPTICKER_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__PSOWARMUPTICKER_D__14___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__PSOWARMUPTICKER_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__PSOWARMUPTICKER_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__PSOWARMUPTICKER_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__PSOWARMUPTICKER_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML__PSOWARMUPTICKER_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
