#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NBCKPEELCFO_CNCCFDHIOHL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBAB7FC0)
#define NBCKPEELCFO_CNCCFDHIOHL_CTOR_OFFSET UNITYSDK_OFFSET(0xBAB7ED0)
#define NBCKPEELCFO_CNCCFDHIOHL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBAB7FF0)
#define NBCKPEELCFO_CNCCFDHIOHL_INVOKE_OFFSET UNITYSDK_OFFSET(0xBAB7C60)

inline static constexpr unsigned int NBCKPEELCFO_CNCCFDHIOHL_TypeDefinitionIndex = 62274;

	class NBCKPEELCFO_CNCCFDHIOHL : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NBCKPEELCFO_CNCCFDHIOHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBCKPEELCFO_CNCCFDHIOHL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NBCKPEELCFO_CNCCFDHIOHL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NBCKPEELCFO_CNCCFDHIOHL_ENDINVOKE_OFFSET))(this, a1);
		}

	};
