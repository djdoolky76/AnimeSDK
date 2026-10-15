#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define BOJKDLCIJCN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC194100)
#define BOJKDLCIJCN_CTOR_OFFSET UNITYSDK_OFFSET(0xC194080)
#define BOJKDLCIJCN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC194160)
#define BOJKDLCIJCN_INVOKE_OFFSET UNITYSDK_OFFSET(0xC1940F0)

	class BOJKDLCIJCN : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BOJKDLCIJCN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + BOJKDLCIJCN_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BOJKDLCIJCN_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BOJKDLCIJCN_ENDINVOKE_OFFSET))(this, a1);
		}

	};
