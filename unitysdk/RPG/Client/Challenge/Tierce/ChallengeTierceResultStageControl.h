#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class CFPNIJINMJA;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoPrefabSwitcher; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_CNLPMIJKBOG_OFFSET UNITYSDK_OFFSET(0xC94E780)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xC94E990)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_GETANIMLENGTH_OFFSET UNITYSDK_OFFSET(0xC94E870)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xC94E190)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC94E230)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_NNLDJLFIOEJ_OFFSET UNITYSDK_OFFSET(0xC94E2E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_PLAYANIM_OFFSET UNITYSDK_OFFSET(0xC94E930)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xC94E1D0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceResultStageControl_TypeDefinitionIndex = 81539;

	class ChallengeTierceResultStageControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::CFPNIJINMJA* PMCOAFPCDFM; // 0x18
		::RPG::Client::LocalizedText* _TextName; // 0x20
		::RPG::Client::MonoPrefabSwitcher* _Switcher; // 0x28
		::System::String* _StateUsedRoundCount; // 0x30
		::System::String* _StateObtainedScore; // 0x38
		::System::String* _StateObtainedScoreDetailed; // 0x40
		::System::String* _StateNotPassed; // 0x48
		::RPG::Client::MonoPrefabSwitcher* _SwitcherScoreDetail; // 0x50
		::System::String* _StateHasActionScore; // 0x58
		::System::String* _StateNoActionScore; // 0x60
		::RPG::Client::LocalizedText* _TextResultContent; // 0x68
		::System::String* _StringNotPassed; // 0x70
		::RPG::Client::TextID _TextIDUsedRoundCount; // 0x78
		::RPG::Client::LocalizedText* _TextDamagedHpPercent; // 0x88
		::RPG::Client::LocalizedText* _TextDamageScore; // 0x90
		::RPG::Client::LocalizedText* _TextActionScore; // 0x98
		::UnityEngine::Animation* _Anim; // 0xA0
		::System::String* _AnimNameSuccessNotFinal; // 0xA8
		::System::String* _AnimNameSuccessFinal; // 0xB0
		::System::String* _AnimNameFailureInactive; // 0xB8
		::System::String* _AnimNameFailureActive; // 0xC0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_CTOR_OFFSET))(this);
		}

		::CFPNIJINMJA* get_Stage()
		{
			return ((::CFPNIJINMJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_GET_STAGE_OFFSET))(this);
		}

		::System::Void set_Stage(::CFPNIJINMJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFPNIJINMJA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_SET_STAGE_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::CFPNIJINMJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFPNIJINMJA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void NNLDJLFIOEJ(::CFPNIJINMJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFPNIJINMJA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_NNLDJLFIOEJ_OFFSET))(this, a1);
		}

		::System::String* CNLPMIJKBOG(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_CNLPMIJKBOG_OFFSET))(this, a1);
		}

		::System::Single GetAnimLength(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_GETANIMLENGTH_OFFSET))(this, a1);
		}

		::System::Void PlayAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGECONTROL_PLAYANIM_OFFSET))(this, a1);
		}

	};
}
