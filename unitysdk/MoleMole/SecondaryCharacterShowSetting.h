#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SecondaryCharacterType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AnimatorRandomIntConfig; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole { class UIAvatarCameraSetting; }
namespace MoleMole { class UIAvatarSetting; }
namespace MoleMole { class UISecondAvatarLightSetting; }

#define MOLEMOLE_SECONDARYCHARACTERSHOWSETTING_ENSURESECONDARYAVATARCAMERASETTING_OFFSET UNITYSDK_OFFSET(0x189587E0)
#define MOLEMOLE_SECONDARYCHARACTERSHOWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x18958780)

namespace MoleMole
{
	inline static constexpr unsigned int SecondaryCharacterShowSetting_TypeDefinitionIndex = 68200;

	class SecondaryCharacterShowSetting : public ::System::Object
	{
	public:
		::MoleMole::AnimatorRandomIntConfig* AnimatorRandomIntConfigs; // 0x10
		::MoleMole::UIAvatarAnimatorParamsSetting* AnimatorParamsSetting; // 0x18
		::MoleMole::UISecondAvatarLightSetting* AvatarLightSetting; // 0x20
		::MoleMole::UIAvatarSetting* AvatarSetting; // 0x28
		::MoleMole::UIAvatarCameraSetting* SecondaryAvatarCameraSetting; // 0x30
		::MoleMole::SecondaryCharacterType CharacterType; // 0x38
		::System::Boolean SyncPlayerAccessory; // 0x3C
		::System::Boolean EnableAvatarLightSetting; // 0x3D
		::System::Boolean NeedCreateEntity; // 0x3E
		::System::Byte _padding0[0x1];
		::System::UInt32 TemplateID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECONDARYCHARACTERSHOWSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::UIAvatarCameraSetting* EnsureSecondaryAvatarCameraSetting(::MoleMole::UIAvatarCameraSetting* fallbackCameraSetting)
		{
			return ((::MoleMole::UIAvatarCameraSetting*(*)(::PVOID, ::MoleMole::UIAvatarCameraSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_SECONDARYCHARACTERSHOWSETTING_ENSURESECONDARYAVATARCAMERASETTING_OFFSET))(this, fallbackCameraSetting);
		}
	};
}
