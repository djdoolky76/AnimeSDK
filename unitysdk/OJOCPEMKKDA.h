#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class APKJLMDEMLI;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OJOCPEMKKDA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C7A1DF0)
#define OJOCPEMKKDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7A1CF0)
#define OJOCPEMKKDA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C7A1E20)
#define OJOCPEMKKDA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C7A1DE0)

inline static constexpr unsigned int OJOCPEMKKDA_TypeDefinitionIndex = 37294;

	class OJOCPEMKKDA : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OJOCPEMKKDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::APKJLMDEMLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APKJLMDEMLI*))((::PBYTE)hIl2Cpp + OJOCPEMKKDA_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::APKJLMDEMLI* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::APKJLMDEMLI*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OJOCPEMKKDA_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OJOCPEMKKDA_ENDINVOKE_OFFSET))(this, a1);
		}

	};
