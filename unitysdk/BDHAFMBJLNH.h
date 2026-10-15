#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define BDHAFMBJLNH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x162ED990)
#define BDHAFMBJLNH_CTOR_OFFSET UNITYSDK_OFFSET(0x162ED910)
#define BDHAFMBJLNH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x162ED9C0)
#define BDHAFMBJLNH_INVOKE_OFFSET UNITYSDK_OFFSET(0x162ED980)

inline static constexpr unsigned int BDHAFMBJLNH_TypeDefinitionIndex = 57375;

	class BDHAFMBJLNH : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BDHAFMBJLNH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDHAFMBJLNH_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BDHAFMBJLNH_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BDHAFMBJLNH_ENDINVOKE_OFFSET))(this, a1);
		}

	};
