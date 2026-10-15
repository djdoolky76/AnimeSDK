#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class IBPGDJEBPFN;
class JCLBAEHIBLA;
class KKPNEOIKLJG;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CHEDCMLOABO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5A69D0)
#define CHEDCMLOABO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A68B0)
#define CHEDCMLOABO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5A6A20)
#define CHEDCMLOABO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5A69A0)

inline static constexpr unsigned int CHEDCMLOABO_TypeDefinitionIndex = 36243;

	class CHEDCMLOABO : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CHEDCMLOABO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::JCLBAEHIBLA* a1, ::IBPGDJEBPFN* a2, ::KKPNEOIKLJG* a3, ::IBPGDJEBPFN* a4)
		{
			return ((::System::Void(*)(::PVOID, ::JCLBAEHIBLA*, ::IBPGDJEBPFN*, ::KKPNEOIKLJG*, ::IBPGDJEBPFN*))((::PBYTE)hIl2Cpp + CHEDCMLOABO_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::JCLBAEHIBLA* a1, ::IBPGDJEBPFN* a2, ::KKPNEOIKLJG* a3, ::IBPGDJEBPFN* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::JCLBAEHIBLA*, ::IBPGDJEBPFN*, ::KKPNEOIKLJG*, ::IBPGDJEBPFN*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CHEDCMLOABO_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CHEDCMLOABO_ENDINVOKE_OFFSET))(this, a1);
		}

	};
