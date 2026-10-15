#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class NAOKFLDEDBJ;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NBHAKGBHPOE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBAC1B40)
#define NBHAKGBHPOE_CTOR_OFFSET UNITYSDK_OFFSET(0xBAC1A50)
#define NBHAKGBHPOE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBAC1B70)
#define NBHAKGBHPOE_INVOKE_OFFSET UNITYSDK_OFFSET(0xBAADDB0)

inline static constexpr unsigned int NBHAKGBHPOE_TypeDefinitionIndex = 54752;

	class NBHAKGBHPOE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NBHAKGBHPOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + NBHAKGBHPOE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::NAOKFLDEDBJ* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::NAOKFLDEDBJ*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NBHAKGBHPOE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NBHAKGBHPOE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
