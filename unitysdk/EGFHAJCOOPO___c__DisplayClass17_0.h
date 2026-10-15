#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPODLBIFOH;
class GNOCLCNNAPD;
namespace RPG::Client::B51Racing { class B51RacingDIYPageViewModel; }

#define EGFHAJCOOPO___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0x14511790)
#define EGFHAJCOOPO___C__DISPLAYCLASS17_0__SHOWCARDIYPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x14512E30)

inline static constexpr unsigned int EGFHAJCOOPO___c__DisplayClass17_0_TypeDefinitionIndex = 81745;

	class EGFHAJCOOPO___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::GNOCLCNNAPD* sceneService; // 0x10
		::BDPODLBIFOH* transient; // 0x18
		::RPG::Client::B51Racing::B51RacingDIYPageViewModel* vm; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowCarDIYPageAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS17_0__SHOWCARDIYPAGEASYNC_B__0_OFFSET))(this);
		}

	};
