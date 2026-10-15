#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldUserAgreementDialog; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Scrollbar; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__37_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEF8780)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BEF9760)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__37_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BEF9B20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BEF9B80)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BEF9B30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__37_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BEF9750)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldUserAgreementDialog__CheckScrollBarVisibility_d__37_TypeDefinitionIndex = 8822;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37>
	class HandheldUserAgreementDialog__CheckScrollBarVisibility_d__37 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _obj_5__1; // 0x10
		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog* __4__this; // 0x18
		::UnityEngine::UI::Scrollbar* _scrollBar_5__2; // 0x20
		::System::Object* __2__current; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__37_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__37_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__37_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__37_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__37_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
