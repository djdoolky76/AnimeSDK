#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPODLBIFOH;
class GNOCLCNNAPD;
namespace RPG::Client { class UIController; }
namespace RPG::Client::B51Racing { class B51RacingCarDevelopPageViewModel; }
namespace RPG::Client::Promises { class Promise; }

#define EGFHAJCOOPO___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0x14514B30)
#define EGFHAJCOOPO___C__DISPLAYCLASS19_0__SHOWDEVELOPPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x14516050)

inline static constexpr unsigned int EGFHAJCOOPO___c__DisplayClass19_0_TypeDefinitionIndex = 81747;

	class EGFHAJCOOPO___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::BDPODLBIFOH* transient; // 0x10
		::GNOCLCNNAPD* sceneService; // 0x18
		::RPG::Client::B51Racing::B51RacingCarDevelopPageViewModel* viewModel; // 0x20
		::RPG::Client::Promises::Promise* promise; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowDevelopPageAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS19_0__SHOWDEVELOPPAGEASYNC_B__0_OFFSET))(this);
		}

	};
