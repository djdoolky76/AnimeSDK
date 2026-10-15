#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPODLBIFOH;
class GNOCLCNNAPD;
namespace RPG::Client::B51Racing { class B51RacingNewCarDisplayPageViewModel; }

#define EGFHAJCOOPO___C__DISPLAYCLASS24_0_CTOR_OFFSET UNITYSDK_OFFSET(0x14515140)
#define EGFHAJCOOPO___C__DISPLAYCLASS24_0__SHOWNEWCARDISPLAYPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x14516290)

inline static constexpr unsigned int EGFHAJCOOPO___c__DisplayClass24_0_TypeDefinitionIndex = 81749;

	class EGFHAJCOOPO___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::GNOCLCNNAPD* sceneService; // 0x10
		::BDPODLBIFOH* transient; // 0x18
		::RPG::Client::B51Racing::B51RacingNewCarDisplayPageViewModel* viewModel; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS24_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowNewCarDisplayPageAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS24_0__SHOWNEWCARDISPLAYPAGEASYNC_B__0_OFFSET))(this);
		}

	};
