#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBPEMPMEMGK.h"
#include "unitysdk/OKMMDNBKBOE.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__CTOR_OFFSET UNITYSDK_OFFSET(0x167ED1E0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__ONSKIPFADEINANIMATION_B__4_OFFSET UNITYSDK_OFFSET(0x167ED1F0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__ONSKIPFADEINANIMATION_B__5_OFFSET UNITYSDK_OFFSET(0x167ED290)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationPageController___c__DisplayClass33_2_TypeDefinitionIndex = 77564;

	template <typename T1, typename T2>
	class UIUrbanMapNavigationPageController___c__DisplayClass33_2 : public ::System::Object
	{
	public:
		::System::Action_1<::MBPEMPMEMGK>* __9__5; // 0x10
		::OKMMDNBKBOE sMapTrackInfo; // 0x18
		::System::Object* CS___8__locals2; // 0x78
		::System::Action_1<::MBPEMPMEMGK>* __9__4; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnSkipFadeInAnimation_b__4(::MBPEMPMEMGK res)
		{
			return ((::System::Void(*)(::PVOID, ::MBPEMPMEMGK))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__ONSKIPFADEINANIMATION_B__4_OFFSET))(this, res);
		}

		::System::Void _OnSkipFadeInAnimation_b__5(::MBPEMPMEMGK res)
		{
			return ((::System::Void(*)(::PVOID, ::MBPEMPMEMGK))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__ONSKIPFADEINANIMATION_B__5_OFFSET))(this, res);
		}
	};
}
