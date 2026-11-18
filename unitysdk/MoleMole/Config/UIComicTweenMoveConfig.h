#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_UICOMICTWEENMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1642BC10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UIComicTweenMoveConfig_TypeDefinitionIndex = 68010;

	class UIComicTweenMoveConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Single duration; // 0x58
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* curve; // 0x60
		::System::Single fadeOutDuration; // 0x68
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* fadeOutCurve; // 0x70
		::System::Single actFinishTime; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UICOMICTWEENMOVECONFIG__CTOR_OFFSET))(this);
		}
	};
}
