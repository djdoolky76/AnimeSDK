#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPODLBIFOH;
class GNOCLCNNAPD;
namespace RPG::Client::B51Racing { class B51RacingInitCarSelectPageViewModel; }

#define EGFHAJCOOPO___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0x14510F00)
#define EGFHAJCOOPO___C__DISPLAYCLASS11_0__SHOWINITCARSELECTPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x14512D30)

inline static constexpr unsigned int EGFHAJCOOPO___c__DisplayClass11_0_TypeDefinitionIndex = 81744;

	class EGFHAJCOOPO___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::BDPODLBIFOH* transient; // 0x10
		::GNOCLCNNAPD* sceneService; // 0x18
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
