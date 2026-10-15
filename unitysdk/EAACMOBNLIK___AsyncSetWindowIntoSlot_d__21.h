#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EAACMOBNLIK;
class HIOEAKHGILF;
class MHINANAPELB;
namespace System { class Object; }

#define EAACMOBNLIK___ASYNCSETWINDOWINTOSLOT_D__21_CTOR_OFFSET UNITYSDK_OFFSET(0x12669600)
#define EAACMOBNLIK___ASYNCSETWINDOWINTOSLOT_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12669DB0)
#define EAACMOBNLIK___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1266A840)
#define EAACMOBNLIK___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1266A8A0)
#define EAACMOBNLIK___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1266A850)
#define EAACMOBNLIK___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12669D90)

inline static constexpr unsigned int EAACMOBNLIK___AsyncSetWindowIntoSlot_d__21_TypeDefinitionIndex = 76906;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
	class EAACMOBNLIK___AsyncSetWindowIntoSlot_d__21 : public ::System::Object
	{
	public:
		::HIOEAKHGILF* _window_5__4; // 0x10
		::HIOEAKHGILF* _slot_5__5; // 0x18
		::MHINANAPELB* _state_5__3; // 0x20
		::HIOEAKHGILF* _windowControllerEntity_5__2; // 0x28
		::System::Object* __2__current; // 0x30
		::EAACMOBNLIK* __4__this; // 0x38
		::System::Single _curDistance_5__10; // 0x40
		::System::Int32 windowIndex; // 0x44
		::UnityEngine::Vector3 _targetPos_5__6; // 0x48
		::UnityEngine::Vector3 _curPos_5__9; // 0x54
		::System::Int32 slotIndex; // 0x60
		::System::Single _duration_5__8; // 0x64
		::System::Single _distance_5__7; // 0x68
		::System::Int32 __1__state; // 0x6C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EAACMOBNLIK___ASYNCSETWINDOWINTOSLOT_D__21_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAACMOBNLIK___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAACMOBNLIK___ASYNCSETWINDOWINTOSLOT_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAACMOBNLIK___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAACMOBNLIK___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAACMOBNLIK___ASYNCSETWINDOWINTOSLOT_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
