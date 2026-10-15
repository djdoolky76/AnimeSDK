#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class IBPGDJEBPFN;
class JCLBAEHIBLA;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define IEBGGIJGJLL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C664840)
#define IEBGGIJGJLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C664740)
#define IEBGGIJGJLL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C664880)
#define IEBGGIJGJLL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C664830)

inline static constexpr unsigned int IEBGGIJGJLL_TypeDefinitionIndex = 36241;

	class IEBGGIJGJLL : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + IEBGGIJGJLL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::JCLBAEHIBLA* a1, ::IBPGDJEBPFN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JCLBAEHIBLA*, ::IBPGDJEBPFN*))((::PBYTE)hIl2Cpp + IEBGGIJGJLL_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::JCLBAEHIBLA* a1, ::IBPGDJEBPFN* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::JCLBAEHIBLA*, ::IBPGDJEBPFN*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + IEBGGIJGJLL_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IEBGGIJGJLL_ENDINVOKE_OFFSET))(this, a1);
		}

	};
