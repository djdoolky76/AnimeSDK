#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPODLBIFOH;
class GNOCLCNNAPD;
namespace RPG::Client::B51Racing { class B51RacingNewPartDisplayPageViewModel; }

#define EGFHAJCOOPO___C__DISPLAYCLASS25_0_CTOR_OFFSET UNITYSDK_OFFSET(0x152EBA00)
#define EGFHAJCOOPO___C__DISPLAYCLASS25_0__SHOWNEWPARTDISPLAYPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x152ECAC0)

inline static constexpr unsigned int EGFHAJCOOPO___c__DisplayClass25_0_TypeDefinitionIndex = 84531;

	class EGFHAJCOOPO___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::BDPODLBIFOH* transient; // 0x10
		::RPG::Client::B51Racing::B51RacingNewPartDisplayPageViewModel* viewModel; // 0x18
		::GNOCLCNNAPD* sceneService; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS25_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowNewPartDisplayPageAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS25_0__SHOWNEWPARTDISPLAYPAGEASYNC_B__0_OFFSET))(this);
		}

	};
