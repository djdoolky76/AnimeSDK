#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class GAJOCNCABJL;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define BPCJPPDKFJL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B5FC9C0)
#define BPCJPPDKFJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5FC8C0)
#define BPCJPPDKFJL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B5FC9F0)
#define BPCJPPDKFJL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B5FC9B0)

inline static constexpr unsigned int BPCJPPDKFJL_TypeDefinitionIndex = 50830;

	class BPCJPPDKFJL : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BPCJPPDKFJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::GAJOCNCABJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAJOCNCABJL*))((::PBYTE)hIl2Cpp + BPCJPPDKFJL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::GAJOCNCABJL* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::GAJOCNCABJL*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BPCJPPDKFJL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BPCJPPDKFJL_ENDINVOKE_OFFSET))(this, a1);
		}

	};
