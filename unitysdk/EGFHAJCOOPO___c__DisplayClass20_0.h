#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPODLBIFOH;
class GNOCLCNNAPD;
namespace RPG::Client { class UIController; }
namespace RPG::Client::B51Racing { class B51RacingCarDevelopActionSelectViewModel; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define EGFHAJCOOPO___C__DISPLAYCLASS20_0_CTOR_OFFSET UNITYSDK_OFFSET(0x14511B90)
#define EGFHAJCOOPO___C__DISPLAYCLASS20_0__SHOWDEVELOPACTIONSELECTPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x14513050)

inline static constexpr unsigned int EGFHAJCOOPO___c__DisplayClass20_0_TypeDefinitionIndex = 81747;

	class EGFHAJCOOPO___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingCarDevelopActionSelectViewModel* viewModel; // 0x10
		::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>* promise; // 0x18
		::BDPODLBIFOH* transient; // 0x20
		::GNOCLCNNAPD* sceneService; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS20_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowDevelopActionSelectPageAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS20_0__SHOWDEVELOPACTIONSELECTPAGEASYNC_B__0_OFFSET))(this);
		}

	};
