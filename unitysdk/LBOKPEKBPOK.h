#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class BMICACAAOGP;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LBOKPEKBPOK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB60DE10)
#define LBOKPEKBPOK_CTOR_OFFSET UNITYSDK_OFFSET(0xB60DD10)
#define LBOKPEKBPOK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB60DE40)
#define LBOKPEKBPOK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB60DE00)

inline static constexpr unsigned int LBOKPEKBPOK_TypeDefinitionIndex = 54219;

	class LBOKPEKBPOK : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LBOKPEKBPOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::BMICACAAOGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMICACAAOGP*))((::PBYTE)hIl2Cpp + LBOKPEKBPOK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::BMICACAAOGP* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::BMICACAAOGP*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LBOKPEKBPOK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LBOKPEKBPOK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
