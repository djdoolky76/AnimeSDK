#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OHOGLCBLOHP_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBE756B0)
#define OHOGLCBLOHP_CTOR_OFFSET UNITYSDK_OFFSET(0xBE75630)
#define OHOGLCBLOHP_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBE756E0)
#define OHOGLCBLOHP_INVOKE_OFFSET UNITYSDK_OFFSET(0xBE756A0)

	class OHOGLCBLOHP : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OHOGLCBLOHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOGLCBLOHP_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OHOGLCBLOHP_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OHOGLCBLOHP_ENDINVOKE_OFFSET))(this, a1);
		}

	};
