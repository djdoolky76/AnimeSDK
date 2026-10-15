#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/CancelFadingReason.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DLGOFLDEIOF_OCJHDEKIKCM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF89A6F0)
#define DLGOFLDEIOF_OCJHDEKIKCM_CTOR_OFFSET UNITYSDK_OFFSET(0xF89A670)
#define DLGOFLDEIOF_OCJHDEKIKCM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF89A760)
#define DLGOFLDEIOF_OCJHDEKIKCM_INVOKE_OFFSET UNITYSDK_OFFSET(0xF89A6E0)

inline static constexpr unsigned int DLGOFLDEIOF_OCJHDEKIKCM_TypeDefinitionIndex = 49414;

	class DLGOFLDEIOF_OCJHDEKIKCM : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DLGOFLDEIOF_OCJHDEKIKCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::EnviromentSystemV2Space::CancelFadingReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::CancelFadingReason))((::PBYTE)hIl2Cpp + DLGOFLDEIOF_OCJHDEKIKCM_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::EnviromentSystemV2Space::CancelFadingReason a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::EnviromentSystemV2Space::CancelFadingReason, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DLGOFLDEIOF_OCJHDEKIKCM_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DLGOFLDEIOF_OCJHDEKIKCM_ENDINVOKE_OFFSET))(this, a1);
		}

	};
