#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPODLBIFOH;
class GNOCLCNNAPD;
namespace RPG::Client::B51Racing { class B51RacingInitCarSelectPageViewModel; }

#define EGFHAJCOOPO___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0x14514020)
#define EGFHAJCOOPO___C__DISPLAYCLASS11_0__SHOWINITCARSELECTPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x14515E50)

	class EGFHAJCOOPO___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::GNOCLCNNAPD* sceneService; // 0x10
		::BDPODLBIFOH* transient; // 0x18
		::RPG::Client::B51Racing::B51RacingInitCarSelectPageViewModel* vm; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowInitCarSelectPageAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS11_0__SHOWINITCARSELECTPAGEASYNC_B__0_OFFSET))(this);
		}

	};
