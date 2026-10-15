#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class JCLBAEHIBLA;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LABBGAAACBG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C71F430)
#define LABBGAAACBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71F330)
#define LABBGAAACBG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C71F490)
#define LABBGAAACBG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C71F420)

	class LABBGAAACBG : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LABBGAAACBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::JCLBAEHIBLA* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::JCLBAEHIBLA*, ::System::Boolean))((::PBYTE)hIl2Cpp + LABBGAAACBG_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::JCLBAEHIBLA* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::JCLBAEHIBLA*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LABBGAAACBG_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LABBGAAACBG_ENDINVOKE_OFFSET))(this, a1);
		}

	};
