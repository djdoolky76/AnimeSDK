#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class JCLBAEHIBLA;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LIEEEELJCBL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C73C8A0)
#define LIEEEELJCBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C73C7A0)
#define LIEEEELJCBL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C73C8D0)
#define LIEEEELJCBL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C73C890)

	class LIEEEELJCBL : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LIEEEELJCBL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::JCLBAEHIBLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCLBAEHIBLA*))((::PBYTE)hIl2Cpp + LIEEEELJCBL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::JCLBAEHIBLA* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::JCLBAEHIBLA*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LIEEEELJCBL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LIEEEELJCBL_ENDINVOKE_OFFSET))(this, a1);
		}

	};
