#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHCBONEALKD.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AnimatorRandomIntConfig; }
namespace MoleMole { class SecondaryCharacterShowSetting; }
namespace MoleMole { class SkinOverrideShowSettingConfigs; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole { class UIAvatarCameraAnimationSetting; }
namespace MoleMole { class UIAvatarCameraSetting; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace MoleMole { class UIAvatarSetting; }
namespace MoleMole { class UIModelBgSetting; }

#define MOLEMOLE_AVATARSHOWSETTING_GETCAMERASETTING_OFFSET UNITYSDK_OFFSET(0x13041E30)
#define MOLEMOLE_AVATARSHOWSETTING_GETSKINOVERRIDESETTING_OFFSET UNITYSDK_OFFSET(0x13041EF0)
#define MOLEMOLE_AVATARSHOWSETTING_GET_HASSECONDARYCHARACTER_OFFSET UNITYSDK_OFFSET(0x13041DC0)
#define MOLEMOLE_AVATARSHOWSETTING_SUPPORTSEDITTARGET_OFFSET UNITYSDK_OFFSET(0x13041DD0)
#define MOLEMOLE_AVATARSHOWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x13041D10)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarShowSetting_TypeDefinitionIndex = 87944;

	class AvatarShowSetting : public ::System::Object
	{
	public:
		::MoleMole::AnimatorRandomIntConfig* AnimatorRandomIntConfigs; // 0x10
		::MoleMole::UIModelBgSetting* ModelBgSetting; // 0x18
		::MoleMole::UIAvatarCameraAnimationSetting* AvatarCameraAnimSetting; // 0x20
		::MoleMole::SkinOverrideShowSettingConfigs* SkinOverrideShowSettingConfigs; // 0x28
		::MoleMole::UIAvatarCameraSetting* AvatarCameraSetting; // 0x30
		::MoleMole::UIAvatarAnimatorParamsSetting* AnimatorParamsSetting; // 0x38
		::MoleMole::SecondaryCharacterShowSetting* SecondaryCharacterShowSetting; // 0x40
		::MoleMole::UIAvatarLightSetting* AvatarLightSetting; // 0x48
		::MoleMole::UIAvatarSetting* AvatarSetting; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasSecondaryCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_GET_HASSECONDARYCHARACTER_OFFSET))(this);
		}

		::System::Boolean SupportsEditTarget(::GHCBONEALKD target)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHCBONEALKD))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_SUPPORTSEDITTARGET_OFFSET))(this, target);
		}

		::MoleMole::UIAvatarCameraSetting* GetCameraSetting(::GHCBONEALKD target)
		{
			return ((::MoleMole::UIAvatarCameraSetting*(*)(::PVOID, ::GHCBONEALKD))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_GETCAMERASETTING_OFFSET))(this, target);
		}

		::MoleMole::AvatarShowSetting* GetSkinOverrideSetting(::System::UInt32 skinID)
		{
			return ((::MoleMole::AvatarShowSetting*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSHOWSETTING_GETSKINOVERRIDESETTING_OFFSET))(this, skinID);
		}
	};
}
