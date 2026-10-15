#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HGGEFBBMHCK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15C99500)
#define HGGEFBBMHCK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C99480)
#define HGGEFBBMHCK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15C99530)
#define HGGEFBBMHCK_INVOKE_OFFSET UNITYSDK_OFFSET(0x15C994F0)

	class HGGEFBBMHCK : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HGGEFBBMHCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGEFBBMHCK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HGGEFBBMHCK_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HGGEFBBMHCK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
