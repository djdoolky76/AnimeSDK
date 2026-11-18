#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class MLFNDKLHDIM;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18D01890)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18D018C0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x18D01370)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x18D01360)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext_OnSelectionChanged_TypeDefinitionIndex = 81300;

	class UILineupSelectContext_OnSelectionChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MLFNDKLHDIM* data)
		{
			return ((::System::Void(*)(::PVOID, ::MLFNDKLHDIM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::MLFNDKLHDIM* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MLFNDKLHDIM*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
