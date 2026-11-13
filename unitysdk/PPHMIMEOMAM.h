#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PPHMIMEOMAM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B8AC150)
#define PPHMIMEOMAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8AC0D0)
#define PPHMIMEOMAM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B8AC180)
#define PPHMIMEOMAM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B8AC140)

inline static constexpr unsigned int PPHMIMEOMAM_TypeDefinitionIndex = 81719;

	class PPHMIMEOMAM : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PPHMIMEOMAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHMIMEOMAM_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PPHMIMEOMAM_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PPHMIMEOMAM_ENDINVOKE_OFFSET))(this, a1);
		}

	};
