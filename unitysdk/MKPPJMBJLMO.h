#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/KBHPNKKKAAL.h"
class GHEBHGIJDMC;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MKPPJMBJLMO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB99ECF0)
#define MKPPJMBJLMO_CTOR_OFFSET UNITYSDK_OFFSET(0xB99EBD0)
#define MKPPJMBJLMO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB99ED70)
#define MKPPJMBJLMO_INVOKE_OFFSET UNITYSDK_OFFSET(0xB99ECC0)

inline static constexpr unsigned int MKPPJMBJLMO_TypeDefinitionIndex = 55999;

	class MKPPJMBJLMO : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MKPPJMBJLMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::GHEBHGIJDMC* a1, ::KBHPNKKKAAL a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHEBHGIJDMC*, ::KBHPNKKKAAL))((::PBYTE)hIl2Cpp + MKPPJMBJLMO_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::GHEBHGIJDMC* a1, ::KBHPNKKKAAL a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::GHEBHGIJDMC*, ::KBHPNKKKAAL, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MKPPJMBJLMO_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MKPPJMBJLMO_ENDINVOKE_OFFSET))(this, a1);
		}

	};
