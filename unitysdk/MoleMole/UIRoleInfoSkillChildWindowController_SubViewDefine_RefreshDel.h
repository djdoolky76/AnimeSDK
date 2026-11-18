#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKDOBMMNOFL.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x148086D0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14808740)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x148083D0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x148083C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoSkillChildWindowController_SubViewDefine_RefreshDel_TypeDefinitionIndex = 89368;

	class UIRoleInfoSkillChildWindowController_SubViewDefine_RefreshDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::JKDOBMMNOFL playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::JKDOBMMNOFL))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL_INVOKE_OFFSET))(this, playAnim);
		}

		::System::IAsyncResult* BeginInvoke(::JKDOBMMNOFL playAnim, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::JKDOBMMNOFL, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL_BEGININVOKE_OFFSET))(this, playAnim, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
