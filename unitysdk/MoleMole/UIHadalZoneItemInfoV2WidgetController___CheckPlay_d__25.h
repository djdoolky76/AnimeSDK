#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHadalZoneItemInfoV2WidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x175A8A30)
#define MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x175A8DF0)
#define MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x175A8E50)
#define MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x175A8E00)
#define MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x175A8A20)
#define MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0x175A8A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZoneItemInfoV2WidgetController___CheckPlay_d__25_TypeDefinitionIndex = 56572;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
	class UIHadalZoneItemInfoV2WidgetController___CheckPlay_d__25 : public ::System::Object
	{
	public:
		::System::String* _targetAnim_5__2; // 0x10
		::MoleMole::UIHadalZoneItemInfoV2WidgetController* __4__this; // 0x18
		::System::Single __2__current; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEITEMINFOV2WIDGETCONTROLLER___CHECKPLAY_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
