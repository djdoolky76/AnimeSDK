#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NapLevelStateChangeUV;

#define NAPLEVELSTATECHANGEUV__STEPMOVEROUTINE_D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C8267E0)
#define NAPLEVELSTATECHANGEUV__STEPMOVEROUTINE_D__59_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C826AA0)
#define NAPLEVELSTATECHANGEUV__STEPMOVEROUTINE_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C826B00)
#define NAPLEVELSTATECHANGEUV__STEPMOVEROUTINE_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C826AB0)
#define NAPLEVELSTATECHANGEUV__STEPMOVEROUTINE_D__59_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C8267D0)
#define NAPLEVELSTATECHANGEUV__STEPMOVEROUTINE_D__59__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8267C0)

inline static constexpr unsigned int NapLevelStateChangeUV__StepMoveRoutine_d__59_TypeDefinitionIndex = 26627;

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59>
class NapLevelStateChangeUV__StepMoveRoutine_d__59 : public ::System::Object
{
public:
	::NapLevelStateChangeUV* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Int32 _direction_5__4; // 0x20
	::System::Int32 __1__state; // 0x24
	::System::Single targetOffset; // 0x28
	::System::Single _elapsed_5__6; // 0x2C
	::System::Single _startOffset_5__2; // 0x30
	::System::Single _targetTime_5__8; // 0x34
	::System::Single moveTime; // 0x38
	::System::Int32 _stepCount_5__5; // 0x3C
	::System::Int32 _i_5__7; // 0x40
	::System::Single _step_5__3; // 0x44

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV__STEPMOVEROUTINE_D__59__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV__STEPMOVEROUTINE_D__59_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV__STEPMOVEROUTINE_D__59_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV__STEPMOVEROUTINE_D__59_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV__STEPMOVEROUTINE_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV__STEPMOVEROUTINE_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
