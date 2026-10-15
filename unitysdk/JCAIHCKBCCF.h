#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define JCAIHCKBCCF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16578180)
#define JCAIHCKBCCF_CTOR_OFFSET UNITYSDK_OFFSET(0x16578100)
#define JCAIHCKBCCF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x165781B0)
#define JCAIHCKBCCF_INVOKE_OFFSET UNITYSDK_OFFSET(0x16578170)

inline static constexpr unsigned int JCAIHCKBCCF_TypeDefinitionIndex = 52109;

	class JCAIHCKBCCF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + JCAIHCKBCCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JCAIHCKBCCF_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + JCAIHCKBCCF_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + JCAIHCKBCCF_ENDINVOKE_OFFSET))(this, a1);
		}

	};
