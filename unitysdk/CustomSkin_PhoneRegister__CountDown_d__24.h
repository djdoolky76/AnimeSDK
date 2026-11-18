#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CustomSkin_PhoneRegister;

#define CUSTOMSKIN_PHONEREGISTER__COUNTDOWN_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14983800)
#define CUSTOMSKIN_PHONEREGISTER__COUNTDOWN_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14983960)
#define CUSTOMSKIN_PHONEREGISTER__COUNTDOWN_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x149839C0)
#define CUSTOMSKIN_PHONEREGISTER__COUNTDOWN_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14983970)
#define CUSTOMSKIN_PHONEREGISTER__COUNTDOWN_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x149837F0)
#define CUSTOMSKIN_PHONEREGISTER__COUNTDOWN_D__24__CTOR_OFFSET UNITYSDK_OFFSET(0x149837E0)

inline static constexpr unsigned int CustomSkin_PhoneRegister__CountDown_d__24_TypeDefinitionIndex = 90846;

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
class CustomSkin_PhoneRegister__CountDown_d__24 : public ::System::Object
{
public:
	::CustomSkin_PhoneRegister* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Single _startTime_5__2; // 0x20
	::System::Int32 __1__state; // 0x24
	::System::Single time; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER__COUNTDOWN_D__24__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER__COUNTDOWN_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER__COUNTDOWN_D__24_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER__COUNTDOWN_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER__COUNTDOWN_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER__COUNTDOWN_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
