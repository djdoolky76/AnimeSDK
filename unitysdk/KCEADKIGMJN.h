#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define KCEADKIGMJN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB331FC0)
#define KCEADKIGMJN_CTOR_OFFSET UNITYSDK_OFFSET(0xB331F40)
#define KCEADKIGMJN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB332010)
#define KCEADKIGMJN_INVOKE_OFFSET UNITYSDK_OFFSET(0xB331FB0)

	class KCEADKIGMJN : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + KCEADKIGMJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KCEADKIGMJN_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + KCEADKIGMJN_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + KCEADKIGMJN_ENDINVOKE_OFFSET))(this, a1);
		}

	};
