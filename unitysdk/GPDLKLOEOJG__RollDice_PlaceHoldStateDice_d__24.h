#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GPDLKLOEOJG;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPDLKLOEOJG__ROLLDICE_PLACEHOLDSTATEDICE_D__24_CTOR_OFFSET UNITYSDK_OFFSET(0x15B45500)
#define GPDLKLOEOJG__ROLLDICE_PLACEHOLDSTATEDICE_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15B501F0)
#define GPDLKLOEOJG__ROLLDICE_PLACEHOLDSTATEDICE_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15B51250)
#define GPDLKLOEOJG__ROLLDICE_PLACEHOLDSTATEDICE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15B512B0)
#define GPDLKLOEOJG__ROLLDICE_PLACEHOLDSTATEDICE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15B51260)
#define GPDLKLOEOJG__ROLLDICE_PLACEHOLDSTATEDICE_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B501D0)

inline static constexpr unsigned int GPDLKLOEOJG__RollDice_PlaceHoldStateDice_d__24_TypeDefinitionIndex = 60327;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
	class GPDLKLOEOJG__RollDice_PlaceHoldStateDice_d__24 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* _targetRotations_5__5; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _originPositions_5__2; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* _originRotations_5__4; // 0x28
		::GPDLKLOEOJG* __4__this; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _targetPositions_5__3; // 0x38
		::System::Boolean forceRefresh; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 __1__state; // 0x44
		::System::Single _ratio_5__6; // 0x48
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPDLKLOEOJG__ROLLDICE_PLACEHOLDSTATEDICE_D__24_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG__ROLLDICE_PLACEHOLDSTATEDICE_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG__ROLLDICE_PLACEHOLDSTATEDICE_D__24_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG__ROLLDICE_PLACEHOLDSTATEDICE_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG__ROLLDICE_PLACEHOLDSTATEDICE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG__ROLLDICE_PLACEHOLDSTATEDICE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
