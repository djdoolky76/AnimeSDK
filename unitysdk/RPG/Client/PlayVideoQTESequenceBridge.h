#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class MJJODNBEHKN;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_CONFIRMQTE_OFFSET UNITYSDK_OFFSET(0x1E2AA300)
#define RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AA4A0)
#define RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E2AA430)
#define RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_SETPAUSED_OFFSET UNITYSDK_OFFSET(0x1E2AA260)
#define RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_STARTSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1E2A9F40)
#define RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_STOPSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1E2AA200)
#define RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_TRYGETSTARTREMAININGTIME_OFFSET UNITYSDK_OFFSET(0x1E2AA360)
#define RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E2AA3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayVideoQTESequenceBridge_TypeDefinitionIndex = 74942;

	class PlayVideoQTESequenceBridge : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MJJODNBEHKN* _SequencePlayer; // 0x18
		::System::Boolean _Paused; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_CTOR_OFFSET))(this);
		}

		::System::Boolean StartSequence(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Action_1<::System::Int32>* a4, ::System::Action* a5, ::System::Action* a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Action_1<::System::Int32>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_STARTSEQUENCE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetPaused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_SETPAUSED_OFFSET))(this, a1);
		}

		::System::Boolean ConfirmQTE(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_CONFIRMQTE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetStartRemainingTime(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_TRYGETSTARTREMAININGTIME_OFFSET))(this, a1);
		}

		::System::Void StopSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_STOPSEQUENCE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTESEQUENCEBRIDGE_ONDESTROY_OFFSET))(this);
		}

	};
}
