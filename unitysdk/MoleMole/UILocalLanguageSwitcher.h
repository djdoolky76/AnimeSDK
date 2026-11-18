#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class NewConfigUICommon; }
namespace UnityEngine::UI::Extension { class UILocalizationImage; }

#define MOLEMOLE_UILOCALLANGUAGESWITCHER_EBGJDKPLGAN_OFFSET UNITYSDK_OFFSET(0x17C55A30)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER_FINDLOCALIZATIONTEXTREFRESH_OFFSET UNITYSDK_OFFSET(0x17C55320)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17C55260)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17C55200)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER_SETLOCALIZATIONIMAGE_OFFSET UNITYSDK_OFFSET(0x17C55710)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER_STARTSWITCHLANGUAGE_OFFSET UNITYSDK_OFFSET(0x17C552A0)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x17C559E0)

namespace MoleMole
{
	inline static constexpr unsigned int UILocalLanguageSwitcher_TypeDefinitionIndex = 80291;

	class UILocalLanguageSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::LanguageType showLanguageType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOCALLANGUAGESWITCHER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOCALLANGUAGESWITCHER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOCALLANGUAGESWITCHER_ONDESTROY_OFFSET))(this);
		}

		::System::Void StartSwitchLanguage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOCALLANGUAGESWITCHER_STARTSWITCHLANGUAGE_OFFSET))(this);
		}

		::System::Void FindLocalizationTextRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOCALLANGUAGESWITCHER_FINDLOCALIZATIONTEXTREFRESH_OFFSET))(this);
		}

		::System::Void SetLocalizationImage(::MoleMole::NewConfigUICommon* DFMKILICPFB, ::UnityEngine::UI::Extension::UILocalizationImage* EDFHLJAJAFJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NewConfigUICommon*, ::UnityEngine::UI::Extension::UILocalizationImage*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOCALLANGUAGESWITCHER_SETLOCALIZATIONIMAGE_OFFSET))(this, DFMKILICPFB, EDFHLJAJAFJ);
		}

		::System::Void EBGJDKPLGAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOCALLANGUAGESWITCHER_EBGJDKPLGAN_OFFSET))(this);
		}
	};
}
