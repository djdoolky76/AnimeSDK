#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CharaEyeBlinkStateType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class MFAPEKOIGOA;
namespace RPG::Client { class CharaEyeBlinkStateRandom; }
namespace RPG::Client { class CharaEyeBlinkStateStop; }
namespace RPG::Client { class CharaEyeBlinkStateVoiceLoudness; }
namespace RPG::Client { class CharaEyeLight; }

#define RPG_CLIENT_CHARAEYEAUTOBLINK_AWAKE_OFFSET UNITYSDK_OFFSET(0xC9C30E0)
#define RPG_CLIENT_CHARAEYEAUTOBLINK_CTOR_OFFSET UNITYSDK_OFFSET(0xC9C35D0)
#define RPG_CLIENT_CHARAEYEAUTOBLINK_DMLNFDMCIEA_OFFSET UNITYSDK_OFFSET(0xC9C3280)
#define RPG_CLIENT_CHARAEYEAUTOBLINK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xC9C2CD0)
#define RPG_CLIENT_CHARAEYEAUTOBLINK_UPDATE_OFFSET UNITYSDK_OFFSET(0xC9C3380)

namespace RPG::Client
{
	class CharaEyeAutoBlink : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::CharaEyeLight* JMPCDMFDMGI; // 0x18
		::System::Boolean UseVoiceLoudness; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::Client::CharaEyeBlinkStateStop* StopState; // 0x28
		::RPG::Client::CharaEyeBlinkStateRandom* RandomState; // 0x30
		::RPG::Client::CharaEyeBlinkStateVoiceLoudness* VoiceLoudnessState; // 0x38
		::RPG::Client::CharaEyeBlinkStateType DEBGCJFNKDD; // 0x40
		::System::Byte _padding1[0x4];
		::MFAPEKOIGOA* JBDFMDNIPAD; // 0x48
		// static const ::System::Object DEFAULT_EYE_INTENSITY; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEAUTOBLINK_CTOR_OFFSET))(this);
		}

		::System::Void EnterState(::RPG::Client::CharaEyeBlinkStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharaEyeBlinkStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEAUTOBLINK_ENTERSTATE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEAUTOBLINK_AWAKE_OFFSET))(this);
		}

		::System::Void DMLNFDMCIEA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEAUTOBLINK_DMLNFDMCIEA_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEAUTOBLINK_UPDATE_OFFSET))(this);
		}

	};
}
