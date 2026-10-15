#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPODLBIFOH;
class GNOCLCNNAPD;
namespace RPG::Client { class UIController; }
namespace RPG::Client::B51Racing { class B51RacingCarDevelopActionSelectViewModel; }
namespace RPG::Client::Promises { class Promise; }

#define EGFHAJCOOPO___C__DISPLAYCLASS20_0_CTOR_OFFSET UNITYSDK_OFFSET(0x14514CB0)
#define EGFHAJCOOPO___C__DISPLAYCLASS20_0__SHOWDEVELOPACTIONSELECTPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x14516170)

	class EGFHAJCOOPO___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::GNOCLCNNAPD* sceneService; // 0x18
		::BDPODLBIFOH* transient; // 0x20
		::RPG::Client::B51Racing::B51RacingCarDevelopActionSelectViewModel* viewModel; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS20_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowDevelopActionSelectPageAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS20_0__SHOWDEVELOPACTIONSELECTPAGEASYNC_B__0_OFFSET))(this);
		}

	};
