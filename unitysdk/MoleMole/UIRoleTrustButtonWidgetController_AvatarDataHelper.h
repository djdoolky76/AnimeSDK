#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CIDAMMBJJFO;
class FGCOIBFFCHB;
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER_GET_AVATARTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1480BCE0)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1480BD40)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER_SET_AVATARTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1480BCF0)
#define MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1480C0C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleTrustButtonWidgetController_AvatarDataHelper_TypeDefinitionIndex = 67174;

	class UIRoleTrustButtonWidgetController_AvatarDataHelper : public ::System::Object
	{
	public:
		::FGCOIBFFCHB* ProfessionIcon; // 0x10
		::CIDAMMBJJFO* _avatarTemplate; // 0x18
		::UnityEngine::UI::Extension::UILocalizationText* RoleName; // 0x20
		::FGCOIBFFCHB* ElementIcon; // 0x28

		::System::Void _ctor(::UnityEngine::UI::Extension::UILocalizationText* roleName, ::FGCOIBFFCHB* professionIcon, ::FGCOIBFFCHB* elementIcon)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*, ::FGCOIBFFCHB*, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER__CTOR_OFFSET))(this, roleName, professionIcon, elementIcon);
		}

		::CIDAMMBJJFO* get_avatarTemplate()
		{
			return ((::CIDAMMBJJFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER_GET_AVATARTEMPLATE_OFFSET))(this);
		}

		::System::Void set_avatarTemplate(::CIDAMMBJJFO* value)
		{
			return ((::System::Void(*)(::PVOID, ::CIDAMMBJJFO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER_SET_AVATARTEMPLATE_OFFSET))(this, value);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETRUSTBUTTONWIDGETCONTROLLER_AVATARDATAHELPER_REFRESHVIEW_OFFSET))(this);
		}
	};
}
