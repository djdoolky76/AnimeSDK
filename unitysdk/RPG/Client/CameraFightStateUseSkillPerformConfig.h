#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraFightStateCommonConfig.h"
namespace RPG::Client { class NamedColliderOffsetForUseSkillPerform; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CAMERAFIGHTSTATEUSESKILLPERFORMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC92F450)
#define RPG_CLIENT_CAMERAFIGHTSTATEUSESKILLPERFORMCONFIG_IHIPPEMHBMH_OFFSET UNITYSDK_OFFSET(0xC92F3F0)
#define RPG_CLIENT_CAMERAFIGHTSTATEUSESKILLPERFORMCONFIG_LPOLAJJKNAL_OFFSET UNITYSDK_OFFSET(0xC92F270)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraFightStateUseSkillPerformConfig_TypeDefinitionIndex = 69587;

	class CameraFightStateUseSkillPerformConfig : public ::RPG::Client::CameraFightStateCommonConfig
	{
	public:
		::UnityEngine::AnimationCurve* CommonTeamWidthOffsetXCurve; // 0x20
		::UnityEngine::AnimationCurve* CommonTeamWidthOffsetYCurve; // 0x28
		::UnityEngine::AnimationCurve* CommonTeamWidthOffsetZCurve; // 0x30
		::System::Single NamedOrSomatoDynamicAnchorOffsetScale; // 0x38
		::System::Single NamedOrSomatoDynamicAimOffsetScale; // 0x3C
		::System::Collections::Generic::List_1<::RPG::Client::NamedColliderOffsetForUseSkillPerform*>* NamedColliderOffset; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATEUSESKILLPERFORMCONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::NamedColliderOffsetForUseSkillPerform* LPOLAJJKNAL(::System::String* a1, ::System::Collections::Generic::List_1<::RPG::Client::NamedColliderOffsetForUseSkillPerform*>* a2)
		{
			return ((::RPG::Client::NamedColliderOffsetForUseSkillPerform*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::RPG::Client::NamedColliderOffsetForUseSkillPerform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATEUSESKILLPERFORMCONFIG_LPOLAJJKNAL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::NamedColliderOffsetForUseSkillPerform* IHIPPEMHBMH(::System::String* a1)
		{
			return ((::RPG::Client::NamedColliderOffsetForUseSkillPerform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATEUSESKILLPERFORMCONFIG_IHIPPEMHBMH_OFFSET))(this, a1);
		}

	};
}
