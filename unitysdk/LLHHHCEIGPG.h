#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class IBPGDJEBPFN;
class JCLBAEHIBLA;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LLHHHCEIGPG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C73FE50)
#define LLHHHCEIGPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C73FD50)
#define LLHHHCEIGPG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C73FE90)
#define LLHHHCEIGPG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C73FE40)

inline static constexpr unsigned int LLHHHCEIGPG_TypeDefinitionIndex = 36239;

	class LLHHHCEIGPG : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LLHHHCEIGPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::JCLBAEHIBLA* a1, ::IBPGDJEBPFN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JCLBAEHIBLA*, ::IBPGDJEBPFN*))((::PBYTE)hIl2Cpp + LLHHHCEIGPG_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::JCLBAEHIBLA* a1, ::IBPGDJEBPFN* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::JCLBAEHIBLA*, ::IBPGDJEBPFN*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LLHHHCEIGPG_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LLHHHCEIGPG_ENDINVOKE_OFFSET))(this, a1);
		}

	};
