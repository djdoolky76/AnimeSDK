#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PS { class PSBindingSuccessDialog; }
namespace System { class Object; }

#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF6A870)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BF6A920)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BF6AAC0)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BF6AB20)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BF6AAD0)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BF6A910)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSBindingSuccessDialog__AutoCloseCountdown_d__17_TypeDefinitionIndex = 8942;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
	class PSBindingSuccessDialog__AutoCloseCountdown_d__17 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MiHoYo::SDK::PS::PSBindingSuccessDialog* __4__this; // 0x18
		::System::Single _startTime_5__1; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG__AUTOCLOSECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
