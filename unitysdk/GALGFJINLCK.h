#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class IBPGDJEBPFN;
class JCLBAEHIBLA;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define GALGFJINLCK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5FAFF0)
#define GALGFJINLCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FAEF0)
#define GALGFJINLCK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5FB030)
#define GALGFJINLCK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5FAFE0)

inline static constexpr unsigned int GALGFJINLCK_TypeDefinitionIndex = 36255;

	class GALGFJINLCK : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + GALGFJINLCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::JCLBAEHIBLA* a1, ::IBPGDJEBPFN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JCLBAEHIBLA*, ::IBPGDJEBPFN*))((::PBYTE)hIl2Cpp + GALGFJINLCK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::JCLBAEHIBLA* a1, ::IBPGDJEBPFN* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::JCLBAEHIBLA*, ::IBPGDJEBPFN*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + GALGFJINLCK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + GALGFJINLCK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
