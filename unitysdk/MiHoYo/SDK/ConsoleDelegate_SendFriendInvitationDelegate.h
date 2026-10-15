#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEDELEGATE_SENDFRIENDINVITATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BE40060)
#define MIHOYO_SDK_CONSOLEDELEGATE_SENDFRIENDINVITATIONDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3FFD0)
#define MIHOYO_SDK_CONSOLEDELEGATE_SENDFRIENDINVITATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BE400A0)
#define MIHOYO_SDK_CONSOLEDELEGATE_SENDFRIENDINVITATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BE40050)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_SendFriendInvitationDelegate_TypeDefinitionIndex = 7689;

	class ConsoleDelegate_SendFriendInvitationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SENDFRIENDINVITATIONDELEGATE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SENDFRIENDINVITATIONDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Action* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Action*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SENDFRIENDINVITATIONDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_SENDFRIENDINVITATIONDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
