#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EIKMDGNPFIF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C600F20)
#define EIKMDGNPFIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C600EA0)
#define EIKMDGNPFIF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C600F50)
#define EIKMDGNPFIF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C600F10)

	class EIKMDGNPFIF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EIKMDGNPFIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKMDGNPFIF_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EIKMDGNPFIF_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EIKMDGNPFIF_ENDINVOKE_OFFSET))(this, a1);
		}

	};
