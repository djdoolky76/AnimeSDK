#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OLFOGIJOPPM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC803990)
#define OLFOGIJOPPM_CTOR_OFFSET UNITYSDK_OFFSET(0xC803910)
#define OLFOGIJOPPM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC8039C0)
#define OLFOGIJOPPM_INVOKE_OFFSET UNITYSDK_OFFSET(0xC803980)

inline static constexpr unsigned int OLFOGIJOPPM_TypeDefinitionIndex = 83616;

	class OLFOGIJOPPM : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OLFOGIJOPPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFOGIJOPPM_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OLFOGIJOPPM_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OLFOGIJOPPM_ENDINVOKE_OFFSET))(this, a1);
		}

	};
