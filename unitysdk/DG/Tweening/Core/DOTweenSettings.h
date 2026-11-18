#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Core/DOTweenSettings_SettingsLocation.h"
#include "unitysdk/DG/Tweening/AutoPlay.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/DG/Tweening/LogBehaviour.h"
#include "unitysdk/DG/Tweening/LoopType.h"
#include "unitysdk/DG/Tweening/UpdateType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define DG_TWEENING_CORE_DOTWEENSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEDB580)

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int DOTweenSettings_TypeDefinitionIndex = 28031;

	class DOTweenSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		// static const ::System::String* AssetName; // 0x0
		::System::Boolean useSafeMode; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single timeScale; // 0x1C
		::System::Boolean useSmoothDeltaTime; // 0x20
		::System::Boolean showUnityEditorReport; // 0x21
		::System::Byte _padding1[0x2];
		::DG::Tweening::LogBehaviour logBehaviour; // 0x24
		::System::Boolean drawGizmos; // 0x28
		::System::Boolean defaultRecyclable; // 0x29
		::System::Byte _padding2[0x2];
		::DG::Tweening::AutoPlay defaultAutoPlay; // 0x2C
		::DG::Tweening::UpdateType defaultUpdateType; // 0x30
		::System::Boolean defaultTimeScaleIndependent; // 0x34
		::System::Byte _padding3[0x3];
		::DG::Tweening::Ease defaultEaseType; // 0x38
		::System::Single defaultEaseOvershootOrAmplitude; // 0x3C
		::System::Single defaultEasePeriod; // 0x40
		::System::Boolean defaultAutoKill; // 0x44
		::System::Byte _padding4[0x3];
		::DG::Tweening::LoopType defaultLoopType; // 0x48
		::DG::Tweening::Core::DOTweenSettings_SettingsLocation storeSettingsLocation; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_DOTWEENSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
