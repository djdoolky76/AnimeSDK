#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DHAEANMEFLE_KFPGIOHMHDI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE85D630)
#define DHAEANMEFLE_KFPGIOHMHDI_CTOR_OFFSET UNITYSDK_OFFSET(0xE85D5B0)
#define DHAEANMEFLE_KFPGIOHMHDI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE85D660)
#define DHAEANMEFLE_KFPGIOHMHDI_INVOKE_OFFSET UNITYSDK_OFFSET(0xE85D620)

	class DHAEANMEFLE_KFPGIOHMHDI : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DHAEANMEFLE_KFPGIOHMHDI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAEANMEFLE_KFPGIOHMHDI_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DHAEANMEFLE_KFPGIOHMHDI_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DHAEANMEFLE_KFPGIOHMHDI_ENDINVOKE_OFFSET))(this, a1);
		}

	};
