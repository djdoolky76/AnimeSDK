#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/KBNONEGEOMC_ADBGGJHAFDL.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LLGDCBBPCOK_COPMHHCENFM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB76C500)
#define LLGDCBBPCOK_COPMHHCENFM_CTOR_OFFSET UNITYSDK_OFFSET(0xB76C490)
#define LLGDCBBPCOK_COPMHHCENFM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB76C570)
#define LLGDCBBPCOK_COPMHHCENFM_INVOKE_OFFSET UNITYSDK_OFFSET(0xB76C3E0)

	class LLGDCBBPCOK_COPMHHCENFM : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_COPMHHCENFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::KBNONEGEOMC_ADBGGJHAFDL a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBNONEGEOMC_ADBGGJHAFDL))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_COPMHHCENFM_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::KBNONEGEOMC_ADBGGJHAFDL a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::KBNONEGEOMC_ADBGGJHAFDL, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_COPMHHCENFM_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LLGDCBBPCOK_COPMHHCENFM_ENDINVOKE_OFFSET))(this, a1);
		}

	};
