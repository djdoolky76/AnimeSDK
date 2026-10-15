#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class PBGNKMMDBGD;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OBFFJCJNNBM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7CAD90)
#define OBFFJCJNNBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7CAC90)
#define OBFFJCJNNBM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7CADC0)
#define OBFFJCJNNBM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7CAD80)

	class OBFFJCJNNBM : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OBFFJCJNNBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + OBFFJCJNNBM_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::PBGNKMMDBGD* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::PBGNKMMDBGD*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OBFFJCJNNBM_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OBFFJCJNNBM_ENDINVOKE_OFFSET))(this, a1);
		}

	};
