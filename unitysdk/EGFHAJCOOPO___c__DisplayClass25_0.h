#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPODLBIFOH;
class GNOCLCNNAPD;
namespace RPG::Client::B51Racing { class B51RacingNewPartDisplayPageViewModel; }

#define EGFHAJCOOPO___C__DISPLAYCLASS25_0_CTOR_OFFSET UNITYSDK_OFFSET(0x145121B0)
#define EGFHAJCOOPO___C__DISPLAYCLASS25_0__SHOWNEWPARTDISPLAYPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x14513270)

inline static constexpr unsigned int EGFHAJCOOPO___c__DisplayClass25_0_TypeDefinitionIndex = 81749;

	class EGFHAJCOOPO___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::GNOCLCNNAPD* sceneService; // 0x10
		::RPG::Client::B51Racing::B51RacingNewPartDisplayPageViewModel* viewModel; // 0x18
		::BDPODLBIFOH* transient; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS25_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowNewPartDisplayPageAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS25_0__SHOWNEWPARTDISPLAYPAGEASYNC_B__0_OFFSET))(this);
		}

	};
