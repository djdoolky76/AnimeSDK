#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class GLPPDCIBMIH;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DCNENMDFKIG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5E7EE0)
#define DCNENMDFKIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E7E60)
#define DCNENMDFKIG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5E7F40)
#define DCNENMDFKIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5E7ED0)

	class DCNENMDFKIG : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DCNENMDFKIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32 a1, ::GLPPDCIBMIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::GLPPDCIBMIH*))((::PBYTE)hIl2Cpp + DCNENMDFKIG_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::GLPPDCIBMIH* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::GLPPDCIBMIH*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DCNENMDFKIG_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DCNENMDFKIG_ENDINVOKE_OFFSET))(this, a1);
		}

	};
