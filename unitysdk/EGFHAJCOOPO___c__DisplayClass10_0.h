#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPODLBIFOH;
class GNOCLCNNAPD;
namespace RPG::Client::B51Racing { class B51RacingInitCarPreviewPageViewModel; }

#define EGFHAJCOOPO___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x14513E90)
#define EGFHAJCOOPO___C__DISPLAYCLASS10_0__SHOWINITCARPREVIEWPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x14515D50)

inline static constexpr unsigned int EGFHAJCOOPO___c__DisplayClass10_0_TypeDefinitionIndex = 81744;

	class EGFHAJCOOPO___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::GNOCLCNNAPD* sceneService; // 0x10
		::BDPODLBIFOH* transient; // 0x18
		::RPG::Client::B51Racing::B51RacingInitCarPreviewPageViewModel* vm; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowInitCarPreviewPageAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFHAJCOOPO___C__DISPLAYCLASS10_0__SHOWINITCARPREVIEWPAGEASYNC_B__0_OFFSET))(this);
		}

	};
