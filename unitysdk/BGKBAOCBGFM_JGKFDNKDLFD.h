#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class IAOCHINIPGK;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define BGKBAOCBGFM_JGKFDNKDLFD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB18BE90)
#define BGKBAOCBGFM_JGKFDNKDLFD_CTOR_OFFSET UNITYSDK_OFFSET(0xB18BE20)
#define BGKBAOCBGFM_JGKFDNKDLFD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB18BEC0)
#define BGKBAOCBGFM_JGKFDNKDLFD_INVOKE_OFFSET UNITYSDK_OFFSET(0xB18BA20)

	class BGKBAOCBGFM_JGKFDNKDLFD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_JGKFDNKDLFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke(::IAOCHINIPGK* a1)
		{
			return ((::System::String*(*)(::PVOID, ::IAOCHINIPGK*))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_JGKFDNKDLFD_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::IAOCHINIPGK* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::IAOCHINIPGK*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_JGKFDNKDLFD_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BGKBAOCBGFM_JGKFDNKDLFD_ENDINVOKE_OFFSET))(this, a1);
		}

	};
