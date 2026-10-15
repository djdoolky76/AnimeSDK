#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ODGFPKFBGOJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBD8BBB0)
#define ODGFPKFBGOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBD8BB30)
#define ODGFPKFBGOJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBD8BC00)
#define ODGFPKFBGOJ_INVOKE_OFFSET UNITYSDK_OFFSET(0xBD8BBA0)

inline static constexpr unsigned int ODGFPKFBGOJ_TypeDefinitionIndex = 75722;

	class ODGFPKFBGOJ : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ODGFPKFBGOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODGFPKFBGOJ_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ODGFPKFBGOJ_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ODGFPKFBGOJ_ENDINVOKE_OFFSET))(this, a1);
		}

	};
