#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HFPNHKBKHDM_GFNIIPJFIFE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DDE3740)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HFPNHKBKHDM_GFNIIPJFIFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE36D0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HFPNHKBKHDM_GFNIIPJFIFE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DDE3770)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HFPNHKBKHDM_GFNIIPJFIFE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DDE2E20)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceNodeVariantListControl_HFPNHKBKHDM_GFNIIPJFIFE_TypeDefinitionIndex = 84310;

	class ChallengeTierceNodeVariantListControl_HFPNHKBKHDM_GFNIIPJFIFE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HFPNHKBKHDM_GFNIIPJFIFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Action* Invoke(::UnityEngine::GameObject* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HFPNHKBKHDM_GFNIIPJFIFE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HFPNHKBKHDM_GFNIIPJFIFE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Action* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL_HFPNHKBKHDM_GFNIIPJFIFE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
