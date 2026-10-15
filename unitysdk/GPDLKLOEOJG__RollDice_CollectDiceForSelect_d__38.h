#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GPDLKLOEOJG;
class IFLICGOLBIG;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPDLKLOEOJG__ROLLDICE_COLLECTDICEFORSELECT_D__38_CTOR_OFFSET UNITYSDK_OFFSET(0x15B3B9A0)
#define GPDLKLOEOJG__ROLLDICE_COLLECTDICEFORSELECT_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15B43A10)
#define GPDLKLOEOJG__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15B44770)
#define GPDLKLOEOJG__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15B447D0)
#define GPDLKLOEOJG__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15B44780)
#define GPDLKLOEOJG__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B439F0)

inline static constexpr unsigned int GPDLKLOEOJG__RollDice_CollectDiceForSelect_d__38_TypeDefinitionIndex = 60326;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38>
	class GPDLKLOEOJG__RollDice_CollectDiceForSelect_d__38 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _originPositions_5__3; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* _targetRotations_5__6; // 0x18
		::GPDLKLOEOJG* __4__this; // 0x20
		::System::Collections::Generic::List_1<::IFLICGOLBIG*>* _diceToCollect_5__2; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* _originRotations_5__4; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _targetPositions_5__5; // 0x38
		::System::Object* __2__current; // 0x40
		::System::Single _ratio_5__7; // 0x48
		::System::Boolean forceRefresh; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Int32 __1__state; // 0x50
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPDLKLOEOJG__ROLLDICE_COLLECTDICEFORSELECT_D__38_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG__ROLLDICE_COLLECTDICEFORSELECT_D__38_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG__ROLLDICE_COLLECTDICEFORSELECT_D__38_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
