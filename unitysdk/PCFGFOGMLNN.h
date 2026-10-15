#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PCFGFOGMLNN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBFF77C0)
#define PCFGFOGMLNN_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF7740)
#define PCFGFOGMLNN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBFF77F0)
#define PCFGFOGMLNN_INVOKE_OFFSET UNITYSDK_OFFSET(0xBFF77B0)

inline static constexpr unsigned int PCFGFOGMLNN_TypeDefinitionIndex = 57110;

	class PCFGFOGMLNN : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PCFGFOGMLNN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFGFOGMLNN_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PCFGFOGMLNN_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PCFGFOGMLNN_ENDINVOKE_OFFSET))(this, a1);
		}

	};
