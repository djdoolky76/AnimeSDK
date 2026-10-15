#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class NAOKFLDEDBJ;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LACOFPCJAFI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB5DAE00)
#define LACOFPCJAFI_CTOR_OFFSET UNITYSDK_OFFSET(0xB5DAD00)
#define LACOFPCJAFI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB5DAE30)
#define LACOFPCJAFI_INVOKE_OFFSET UNITYSDK_OFFSET(0xB5DADF0)

	class LACOFPCJAFI : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LACOFPCJAFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + LACOFPCJAFI_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::NAOKFLDEDBJ* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::NAOKFLDEDBJ*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LACOFPCJAFI_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LACOFPCJAFI_ENDINVOKE_OFFSET))(this, a1);
		}

	};
