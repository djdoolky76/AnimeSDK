#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/AsyncAction.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/PlayAnimationActionEndStrategy.h"
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_ACANHBHDLCF_OFFSET UNITYSDK_OFFSET(0xE341060)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xE3412F0)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_HIIJHKHKMLK_OFFSET UNITYSDK_OFFSET(0xE340E50)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_LIJFLBLLMHG_OFFSET UNITYSDK_OFFSET(0xE341170)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_LJCLGKCBKLE_OFFSET UNITYSDK_OFFSET(0xE3412A0)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xE340F00)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xE340960)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_PFOOEFJNOIO_OFFSET UNITYSDK_OFFSET(0xE340C60)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_PNGCDKNHFFP_OFFSET UNITYSDK_OFFSET(0xE340C20)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int PlayAnimationAction_TypeDefinitionIndex = 74053;

	class PlayAnimationAction : public ::RPG::Client::UI::UIStateCtrl::AsyncAction
	{
	public:
		::UnityEngine::Animation* TargetAnimation; // 0x28
		::UnityEngine::AnimationClip* AnimationClip; // 0x30
		::System::Boolean UseAnimLength; // 0x38
		::System::Byte _padding0[0x3];
		::RPG::Client::UI::UIStateCtrl::PlayAnimationActionEndStrategy OnActionEnd; // 0x3C
		::System::Single _AnimLength; // 0x40
		::System::Single _originalAnimSpeed; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_CTOR_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void PFOOEFJNOIO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_PFOOEFJNOIO_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void ACANHBHDLCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_ACANHBHDLCF_OFFSET))(this);
		}

		::System::Void LIJFLBLLMHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_LIJFLBLLMHG_OFFSET))(this);
		}

		::System::Void HIIJHKHKMLK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_HIIJHKHKMLK_OFFSET))(this, a1);
		}

		::System::Boolean PNGCDKNHFFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_PNGCDKNHFFP_OFFSET))(this);
		}

		::System::Boolean LJCLGKCBKLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_LJCLGKCBKLE_OFFSET))(this);
		}

	};
}
