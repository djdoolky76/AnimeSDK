#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class IBPGDJEBPFN;
class JCLBAEHIBLA;
class KKPNEOIKLJG;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NMFEEPCABMD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C79CD70)
#define NMFEEPCABMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C79CC60)
#define NMFEEPCABMD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C79CDB0)
#define NMFEEPCABMD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C79CD50)

	class NMFEEPCABMD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NMFEEPCABMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::JCLBAEHIBLA* a1, ::KKPNEOIKLJG* a2, ::IBPGDJEBPFN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::JCLBAEHIBLA*, ::KKPNEOIKLJG*, ::IBPGDJEBPFN*))((::PBYTE)hIl2Cpp + NMFEEPCABMD_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::JCLBAEHIBLA* a1, ::KKPNEOIKLJG* a2, ::IBPGDJEBPFN* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::JCLBAEHIBLA*, ::KKPNEOIKLJG*, ::IBPGDJEBPFN*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NMFEEPCABMD_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NMFEEPCABMD_ENDINVOKE_OFFSET))(this, a1);
		}

	};
