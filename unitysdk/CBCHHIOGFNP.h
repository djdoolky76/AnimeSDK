#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CBCHHIOGFNP_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC49F490)
#define CBCHHIOGFNP_CTOR_OFFSET UNITYSDK_OFFSET(0xC49F410)
#define CBCHHIOGFNP_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC49F4C0)
#define CBCHHIOGFNP_INVOKE_OFFSET UNITYSDK_OFFSET(0xC49F480)

	class CBCHHIOGFNP : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CBCHHIOGFNP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBCHHIOGFNP_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CBCHHIOGFNP_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CBCHHIOGFNP_ENDINVOKE_OFFSET))(this, a1);
		}

	};
