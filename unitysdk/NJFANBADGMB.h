#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NJFANBADGMB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBC0DA10)
#define NJFANBADGMB_CTOR_OFFSET UNITYSDK_OFFSET(0xBC0D990)
#define NJFANBADGMB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBC0DA60)
#define NJFANBADGMB_INVOKE_OFFSET UNITYSDK_OFFSET(0xBC0DA00)

inline static constexpr unsigned int NJFANBADGMB_TypeDefinitionIndex = 73486;

	class NJFANBADGMB : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NJFANBADGMB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single Invoke(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJFANBADGMB_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NJFANBADGMB_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Single EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NJFANBADGMB_ENDINVOKE_OFFSET))(this, a1);
		}

	};
