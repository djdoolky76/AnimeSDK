#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class NJCHNLINLMK;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_ONSCENEOPERATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD9E5440)
#define RPG_CLIENT_ONSCENEOPERATIONDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0xD9E5340)
#define RPG_CLIENT_ONSCENEOPERATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD9E5470)
#define RPG_CLIENT_ONSCENEOPERATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xD9E5430)

namespace RPG::Client
{
	class OnSceneOperationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONSCENEOPERATIONDELEGATE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::NJCHNLINLMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJCHNLINLMK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONSCENEOPERATIONDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::NJCHNLINLMK* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::NJCHNLINLMK*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONSCENEOPERATIONDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONSCENEOPERATIONDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
