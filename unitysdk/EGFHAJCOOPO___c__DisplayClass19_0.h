#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPODLBIFOH;
class GNOCLCNNAPD;
namespace RPG::Client { class UIController; }
namespace RPG::Client::B51Racing { class B51RacingCarDevelopPageViewModel; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define EGFHAJCOOPO___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0x152EB260)
#define EGFHAJCOOPO___C__DISPLAYCLASS19_0__SHOWDEVELOPPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x152EC780)

inline static constexpr unsigned int EGFHAJCOOPO___c__DisplayClass19_0_TypeDefinitionIndex = 84528;

	class EGFHAJCOOPO___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingCarDevelopPageViewModel* viewModel; // 0x10
		::GNOCLCNNAPD* sceneService; // 0x18
		::BDPODLBIFOH* transient; // 0x20
		::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>* promise; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowDevelopPageAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS19_0__SHOWDEVELOPPAGEASYNC_B__0_OFFSET))(this);
		}

	};
