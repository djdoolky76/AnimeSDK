#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CustomSkin_OverseaNewDeviceEmailVerify;

#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1831BB80)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1831BDD0)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1831BE30)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1831BDE0)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1831BB70)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x1831BB60)

inline static constexpr unsigned int CustomSkin_OverseaNewDeviceEmailVerify__CountDown_d__16_TypeDefinitionIndex = 76550;

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
class CustomSkin_OverseaNewDeviceEmailVerify__CountDown_d__16 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::CustomSkin_OverseaNewDeviceEmailVerify* __4__this; // 0x18
	::System::Int32 __1__state; // 0x20
	::System::Single _startTime_5__2; // 0x24
	::System::Single time; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
