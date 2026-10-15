#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class CBOICBCAHBE;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NDMEMOIGNDG_MAOEAMNMIBM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBB515C0)
#define NDMEMOIGNDG_MAOEAMNMIBM_CTOR_OFFSET UNITYSDK_OFFSET(0xBB514D0)
#define NDMEMOIGNDG_MAOEAMNMIBM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBB515F0)
#define NDMEMOIGNDG_MAOEAMNMIBM_INVOKE_OFFSET UNITYSDK_OFFSET(0xBB50D20)

	class NDMEMOIGNDG_MAOEAMNMIBM : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NDMEMOIGNDG_MAOEAMNMIBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::CBOICBCAHBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBOICBCAHBE*))((::PBYTE)hIl2Cpp + NDMEMOIGNDG_MAOEAMNMIBM_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::CBOICBCAHBE* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CBOICBCAHBE*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NDMEMOIGNDG_MAOEAMNMIBM_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NDMEMOIGNDG_MAOEAMNMIBM_ENDINVOKE_OFFSET))(this, a1);
		}

	};
