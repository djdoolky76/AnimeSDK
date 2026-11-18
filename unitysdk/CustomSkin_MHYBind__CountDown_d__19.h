#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CustomSkin_MHYBind;

#define CUSTOMSKIN_MHYBIND__COUNTDOWN_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19D4CC90)
#define CUSTOMSKIN_MHYBIND__COUNTDOWN_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19D4CDF0)
#define CUSTOMSKIN_MHYBIND__COUNTDOWN_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19D4CE50)
#define CUSTOMSKIN_MHYBIND__COUNTDOWN_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19D4CE00)
#define CUSTOMSKIN_MHYBIND__COUNTDOWN_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19D4CC80)
#define CUSTOMSKIN_MHYBIND__COUNTDOWN_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4CC70)

inline static constexpr unsigned int CustomSkin_MHYBind__CountDown_d__19_TypeDefinitionIndex = 66365;

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
class CustomSkin_MHYBind__CountDown_d__19 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::CustomSkin_MHYBind* __4__this; // 0x18
	::System::Single _startTime_5__2; // 0x20
	::System::Int32 __1__state; // 0x24
	::System::Single time; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND__COUNTDOWN_D__19__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND__COUNTDOWN_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND__COUNTDOWN_D__19_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND__COUNTDOWN_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND__COUNTDOWN_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_MHYBIND__COUNTDOWN_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
