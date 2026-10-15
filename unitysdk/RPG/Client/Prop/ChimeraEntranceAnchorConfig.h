#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::Prop { class ChimeraBubbleTalkParam; }
namespace RPG::Client::Prop { class ChimeraMainEnvTalkInfo; }
namespace System { class String; }

#define RPG_CLIENT_PROP_CHIMERAENTRANCEANCHORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDC75670)
#define RPG_CLIENT_PROP_CHIMERAENTRANCEANCHORCONFIG_TRYGETCHIMERATALKINFO_OFFSET UNITYSDK_OFFSET(0xDC75590)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEntranceAnchorConfig_TypeDefinitionIndex = 78482;

	class ChimeraEntranceAnchorConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 ChimeraID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* ChimeraAnimatorParamName; // 0x20
		::RPG::GameCore::AnimatorParameterType ParamType; // 0x28
		::System::Single ParamValue; // 0x2C
		::System::Single EyeLayerWeight; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* ChimeraEyeAnimatorParamName; // 0x38
		::RPG::GameCore::AnimatorParameterType EyeParamType; // 0x40
		::System::Single EyeParamValue; // 0x44
		::System::Boolean IsTalk; // 0x48
		::System::Byte _padding2[0x7];
		::RPG::Client::Prop::ChimeraMainEnvTalkInfo* TalkInfo; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCEANCHORCONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraBubbleTalkParam* TryGetChimeraTalkInfo()
		{
			return ((::RPG::Client::Prop::ChimeraBubbleTalkParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCEANCHORCONFIG_TRYGETCHIMERATALKINFO_OFFSET))(this);
		}

	};
}
