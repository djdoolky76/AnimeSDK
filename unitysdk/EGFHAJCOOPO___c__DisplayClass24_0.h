#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPODLBIFOH;
class GNOCLCNNAPD;
namespace RPG::Client::B51Racing { class B51RacingNewCarDisplayPageViewModel; }

#define EGFHAJCOOPO___C__DISPLAYCLASS24_0_CTOR_OFFSET UNITYSDK_OFFSET(0x152EB870)
#define EGFHAJCOOPO___C__DISPLAYCLASS24_0__SHOWNEWCARDISPLAYPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x152EC9C0)

inline static constexpr unsigned int EGFHAJCOOPO___c__DisplayClass24_0_TypeDefinitionIndex = 84530;

	class EGFHAJCOOPO___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingNewCarDisplayPageViewModel* viewModel; // 0x10
		::GNOCLCNNAPD* sceneService; // 0x18
		::BDPODLBIFOH* transient; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS24_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowNewCarDisplayPageAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS24_0__SHOWNEWCARDISPLAYPAGEASYNC_B__0_OFFSET))(this);
		}

	};
