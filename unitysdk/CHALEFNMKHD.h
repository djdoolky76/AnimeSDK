#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CHALEFNMKHD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xCC905D0)
#define CHALEFNMKHD_CTOR_OFFSET UNITYSDK_OFFSET(0xCC90550)
#define CHALEFNMKHD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xCC90600)
#define CHALEFNMKHD_INVOKE_OFFSET UNITYSDK_OFFSET(0xCC905C0)

	class CHALEFNMKHD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CHALEFNMKHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHALEFNMKHD_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CHALEFNMKHD_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CHALEFNMKHD_ENDINVOKE_OFFSET))(this, a1);
		}

	};
