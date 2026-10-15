#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHSTATUSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BE41200)
#define MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHSTATUSDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE41170)
#define MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHSTATUSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BE41240)
#define MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHSTATUSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BE411F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_UpdateMatchStatusDelegate_TypeDefinitionIndex = 7659;

	class ConsoleDelegate_UpdateMatchStatusDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHSTATUSDELEGATE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHSTATUSDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Action* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHSTATUSDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_UPDATEMATCHSTATUSDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
