#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class JCLBAEHIBLA;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HHPCPPMDALL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C6390C0)
#define HHPCPPMDALL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C638FC0)
#define HHPCPPMDALL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C6390F0)
#define HHPCPPMDALL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C6390B0)

inline static constexpr unsigned int HHPCPPMDALL_TypeDefinitionIndex = 36253;

	class HHPCPPMDALL : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HHPCPPMDALL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::JCLBAEHIBLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCLBAEHIBLA*))((::PBYTE)hIl2Cpp + HHPCPPMDALL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::JCLBAEHIBLA* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::JCLBAEHIBLA*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HHPCPPMDALL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HHPCPPMDALL_ENDINVOKE_OFFSET))(this, a1);
		}

	};
