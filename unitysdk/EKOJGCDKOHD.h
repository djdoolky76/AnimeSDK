#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class JCLBAEHIBLA;
class KBKPHGAKHOG;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EKOJGCDKOHD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C603280)
#define EKOJGCDKOHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C603180)
#define EKOJGCDKOHD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C6032C0)
#define EKOJGCDKOHD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C603270)

	class EKOJGCDKOHD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EKOJGCDKOHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::JCLBAEHIBLA* a1, ::KBKPHGAKHOG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JCLBAEHIBLA*, ::KBKPHGAKHOG*))((::PBYTE)hIl2Cpp + EKOJGCDKOHD_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::JCLBAEHIBLA* a1, ::KBKPHGAKHOG* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::JCLBAEHIBLA*, ::KBKPHGAKHOG*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EKOJGCDKOHD_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EKOJGCDKOHD_ENDINVOKE_OFFSET))(this, a1);
		}

	};
