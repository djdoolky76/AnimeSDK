#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DMPKJANNHIN_CLLOODMPCFO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x112FA820)
#define DMPKJANNHIN_CLLOODMPCFO_CTOR_OFFSET UNITYSDK_OFFSET(0x112FA7A0)
#define DMPKJANNHIN_CLLOODMPCFO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x112FA850)
#define DMPKJANNHIN_CLLOODMPCFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x112FA810)

	class DMPKJANNHIN_CLLOODMPCFO : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DMPKJANNHIN_CLLOODMPCFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPKJANNHIN_CLLOODMPCFO_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DMPKJANNHIN_CLLOODMPCFO_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DMPKJANNHIN_CLLOODMPCFO_ENDINVOKE_OFFSET))(this, a1);
		}

	};
