#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKDOBMMNOFL.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_SETACTIVEDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1901AA20)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_SETACTIVEDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1901AAB0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_SETACTIVEDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1901A6A0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_SETACTIVEDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1901A690)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoSkillChildWindowController_SubViewDefine_SetActiveDel_TypeDefinitionIndex = 89367;

	class UIRoleInfoSkillChildWindowController_SubViewDefine_SetActiveDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_SETACTIVEDEL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean active, ::JKDOBMMNOFL playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::JKDOBMMNOFL))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_SETACTIVEDEL_INVOKE_OFFSET))(this, active, playAnim);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean active, ::JKDOBMMNOFL playAnim, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::JKDOBMMNOFL, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_SETACTIVEDEL_BEGININVOKE_OFFSET))(this, active, playAnim, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_SETACTIVEDEL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
