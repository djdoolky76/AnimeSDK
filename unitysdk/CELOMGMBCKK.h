#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CELOMGMBCKK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC9DF550)
#define CELOMGMBCKK_CTOR_OFFSET UNITYSDK_OFFSET(0xC9DF4D0)
#define CELOMGMBCKK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC9DF580)
#define CELOMGMBCKK_INVOKE_OFFSET UNITYSDK_OFFSET(0xC9DF540)

inline static constexpr unsigned int CELOMGMBCKK_TypeDefinitionIndex = 49120;

	class CELOMGMBCKK : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CELOMGMBCKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELOMGMBCKK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CELOMGMBCKK_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CELOMGMBCKK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
