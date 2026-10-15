#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class AIBOPLOBAFN;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DHGOECAECHA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xEBD42B0)
#define DHGOECAECHA_CTOR_OFFSET UNITYSDK_OFFSET(0xEBD41B0)
#define DHGOECAECHA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xEBD4310)
#define DHGOECAECHA_INVOKE_OFFSET UNITYSDK_OFFSET(0xEBD42A0)

	class DHGOECAECHA : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DHGOECAECHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::AIBOPLOBAFN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIBOPLOBAFN*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHGOECAECHA_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::AIBOPLOBAFN* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::AIBOPLOBAFN*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DHGOECAECHA_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DHGOECAECHA_ENDINVOKE_OFFSET))(this, a1);
		}

	};
