#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FCLEMGPEMJJ_CALHOBNPLPJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x156CD910)
#define FCLEMGPEMJJ_CALHOBNPLPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x156CD8A0)
#define FCLEMGPEMJJ_CALHOBNPLPJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x156CD960)
#define FCLEMGPEMJJ_CALHOBNPLPJ_INVOKE_OFFSET UNITYSDK_OFFSET(0x156CD640)

inline static constexpr unsigned int FCLEMGPEMJJ_CALHOBNPLPJ_TypeDefinitionIndex = 79462;

	class FCLEMGPEMJJ_CALHOBNPLPJ : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_CALHOBNPLPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_CALHOBNPLPJ_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_CALHOBNPLPJ_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_CALHOBNPLPJ_ENDINVOKE_OFFSET))(this, a1);
		}

	};
