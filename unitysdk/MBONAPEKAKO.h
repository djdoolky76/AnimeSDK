#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class IBPGDJEBPFN;
class JCLBAEHIBLA;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MBONAPEKAKO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C719A40)
#define MBONAPEKAKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C719940)
#define MBONAPEKAKO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C719A80)
#define MBONAPEKAKO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C719A30)

inline static constexpr unsigned int MBONAPEKAKO_TypeDefinitionIndex = 36233;

	class MBONAPEKAKO : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MBONAPEKAKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::JCLBAEHIBLA* a1, ::IBPGDJEBPFN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JCLBAEHIBLA*, ::IBPGDJEBPFN*))((::PBYTE)hIl2Cpp + MBONAPEKAKO_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::JCLBAEHIBLA* a1, ::IBPGDJEBPFN* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::JCLBAEHIBLA*, ::IBPGDJEBPFN*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MBONAPEKAKO_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MBONAPEKAKO_ENDINVOKE_OFFSET))(this, a1);
		}

	};
