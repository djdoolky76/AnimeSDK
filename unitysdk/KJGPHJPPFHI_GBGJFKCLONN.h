#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define KJGPHJPPFHI_GBGJFKCLONN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB44C7A0)
#define KJGPHJPPFHI_GBGJFKCLONN_CTOR_OFFSET UNITYSDK_OFFSET(0xB44C6B0)
#define KJGPHJPPFHI_GBGJFKCLONN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB44C7D0)
#define KJGPHJPPFHI_GBGJFKCLONN_INVOKE_OFFSET UNITYSDK_OFFSET(0xB44A9E0)

	class KJGPHJPPFHI_GBGJFKCLONN : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_GBGJFKCLONN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_GBGJFKCLONN_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_GBGJFKCLONN_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_GBGJFKCLONN_ENDINVOKE_OFFSET))(this, a1);
		}

	};
