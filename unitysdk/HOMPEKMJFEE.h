#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class JCLBAEHIBLA;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HOMPEKMJFEE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C65A5B0)
#define HOMPEKMJFEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C65A4B0)
#define HOMPEKMJFEE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C65A5E0)
#define HOMPEKMJFEE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C65A5A0)

inline static constexpr unsigned int HOMPEKMJFEE_TypeDefinitionIndex = 36252;

	class HOMPEKMJFEE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOMPEKMJFEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::JCLBAEHIBLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCLBAEHIBLA*))((::PBYTE)hIl2Cpp + HOMPEKMJFEE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::JCLBAEHIBLA* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::JCLBAEHIBLA*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HOMPEKMJFEE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HOMPEKMJFEE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
