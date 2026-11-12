#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define INCONTROL_KEYBOARDLAYOUTCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CB89410)
#define INCONTROL_KEYBOARDLAYOUTCHANGED_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB89390)
#define INCONTROL_KEYBOARDLAYOUTCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CB89480)
#define INCONTROL_KEYBOARDLAYOUTCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CB89400)

namespace InControl
{
	inline static constexpr unsigned int KeyboardLayoutChanged_TypeDefinitionIndex = 41836;

	class KeyboardLayoutChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
