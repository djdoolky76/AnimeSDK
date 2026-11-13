#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LIENBCAHFMA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AC1DF40)
#define LIENBCAHFMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC1DEC0)
#define LIENBCAHFMA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AC1DF70)
#define LIENBCAHFMA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AC1DF30)

inline static constexpr unsigned int LIENBCAHFMA_TypeDefinitionIndex = 37163;

	class LIENBCAHFMA : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LIENBCAHFMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIENBCAHFMA_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LIENBCAHFMA_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LIENBCAHFMA_ENDINVOKE_OFFSET))(this, a1);
		}

	};
