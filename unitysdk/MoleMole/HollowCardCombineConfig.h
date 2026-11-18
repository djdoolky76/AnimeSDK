#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_HOLLOWCARDCOMBINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x139EAC90)

namespace MoleMole
{
	inline static constexpr unsigned int HollowCardCombineConfig_TypeDefinitionIndex = 71379;

	class HollowCardCombineConfig : public ::System::Object
	{
	public:
		::System::String* StartEffectKey; // 0x10
		::UnityEngine::AnimationCurve* CloseCurve; // 0x18
		::System::String* SmallCardBGEffectKey; // 0x20
		::System::String* StartEffectKeyDirect; // 0x28
		::System::String* EndEffectKey; // 0x30
		::System::String* UIFadeOut; // 0x38
		::UnityEngine::AnimationCurve* CenterCurve; // 0x40
		::UnityEngine::AnimationCurve* RotateCurve; // 0x48
		::System::String* MainUIFadeIn; // 0x50
		::System::String* SmallCardEffectKey; // 0x58
		::UnityEngine::AnimationCurve* RelicUpgradeCardLeaveCurve; // 0x60
		::System::String* CardEffectKey; // 0x68
		::System::Single SmallCardEffectDelay; // 0x70
		::System::Int32 SoundID; // 0x74
		::System::Single Fov; // 0x78
		::System::Single MainUIFadeInDelay; // 0x7C
		::System::Single UIFadeOutDelay; // 0x80
		::System::Single SmallCardY; // 0x84
		::System::Single CenterTime; // 0x88
		::System::Single DelayInterval; // 0x8C
		::System::Single SmallCardBGEffectDelay; // 0x90
		::System::Single CloseTime; // 0x94
		::System::Single SmallCardBGEffectDelay2; // 0x98
		::System::Single SmallCardEffectDelay2; // 0x9C
		::System::Single CenterTime2; // 0xA0
		::System::Single ShowCombineDelay; // 0xA4
		::System::Single EffectShowDelay; // 0xA8
		::System::Single TargetCardY; // 0xAC
		::System::Single DelayInterval2; // 0xB0
		::System::Single CombineCardRotateTime; // 0xB4
		::UnityEngine::Vector3 CombineCardRotate; // 0xB8
		::System::Single DelayExitTimeAfterRotate; // 0xC4
		::System::Single ShowCombineCardDelay; // 0xC8
		::System::Single RelicUpgradeCardLeaveTime; // 0xCC
		::System::Single RelicUpgradeCardLeaveInterval; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCARDCOMBINECONFIG__CTOR_OFFSET))(this);
		}
	};
}
