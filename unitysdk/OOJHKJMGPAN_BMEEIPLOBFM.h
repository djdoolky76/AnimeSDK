#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class OIMEGOHPNFI;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OOJHKJMGPAN_BMEEIPLOBFM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBF8C0B0)
#define OOJHKJMGPAN_BMEEIPLOBFM_CTOR_OFFSET UNITYSDK_OFFSET(0xBF8C040)
#define OOJHKJMGPAN_BMEEIPLOBFM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBF8C0E0)
#define OOJHKJMGPAN_BMEEIPLOBFM_INVOKE_OFFSET UNITYSDK_OFFSET(0xBF8BBE0)

	class OOJHKJMGPAN_BMEEIPLOBFM : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OOJHKJMGPAN_BMEEIPLOBFM_CTOR_OFFSET))(this, a1, a2);
		}

		::OIMEGOHPNFI* Invoke()
		{
			return ((::OIMEGOHPNFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJHKJMGPAN_BMEEIPLOBFM_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OOJHKJMGPAN_BMEEIPLOBFM_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::OIMEGOHPNFI* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::OIMEGOHPNFI*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OOJHKJMGPAN_BMEEIPLOBFM_ENDINVOKE_OFFSET))(this, a1);
		}

	};
