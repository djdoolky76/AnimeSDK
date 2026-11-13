#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OMPJHAFADEK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17D714B0)
#define OMPJHAFADEK_CTOR_OFFSET UNITYSDK_OFFSET(0x17D71430)
#define OMPJHAFADEK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17D714E0)
#define OMPJHAFADEK_INVOKE_OFFSET UNITYSDK_OFFSET(0x17D714A0)

inline static constexpr unsigned int OMPJHAFADEK_TypeDefinitionIndex = 58642;

	class OMPJHAFADEK : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OMPJHAFADEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPJHAFADEK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OMPJHAFADEK_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OMPJHAFADEK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
