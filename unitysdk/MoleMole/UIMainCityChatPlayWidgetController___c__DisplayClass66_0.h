#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JPBICLPKGIO;
namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace MoleMole::GalGame { class SpeakerActionCfg; }
namespace System { class String; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17618640)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS66_0__PLAYVOICEWITHDELAY_B__0_OFFSET UNITYSDK_OFFSET(0x17618650)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass66_0_TypeDefinitionIndex = 55427;

	class UIMainCityChatPlayWidgetController___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::JPBICLPKGIO* endedCallback; // 0x10
		::MoleMole::GalGame::SpeakerActionCfg* speakerCfg; // 0x18
		::System::String* voiceKey; // 0x20
		::MoleMole::UIMainCityChatPlayWidgetController* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVoiceWithDelay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS66_0__PLAYVOICEWITHDELAY_B__0_OFFSET))(this);
		}
	};
}
