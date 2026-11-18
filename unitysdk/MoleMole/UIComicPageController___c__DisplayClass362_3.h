#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicPageData; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS362_3__CTOR_OFFSET UNITYSDK_OFFSET(0x19676090)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS362_3__SHOWSPLITSCREENPERFORMANCE_B__2_OFFSET UNITYSDK_OFFSET(0x196760A0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS362_3__SHOWSPLITSCREENPERFORMANCE_B__3_OFFSET UNITYSDK_OFFSET(0x19676120)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass362_3_TypeDefinitionIndex = 84231;

	template <typename T1, typename T2, typename T3>
	class UIComicPageController___c__DisplayClass362_3 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals3; // 0x10
		::MoleMole::ComicPageData* pageData; // 0x18
		::System::Boolean needResumeTimelineFromAuto; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 pendingId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS362_3__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSplitScreenPerformance_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS362_3__SHOWSPLITSCREENPERFORMANCE_B__2_OFFSET))(this);
		}

		::System::Void _ShowSplitScreenPerformance_b__3(::System::UInt32 id, ::System::UInt32 __)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS362_3__SHOWSPLITSCREENPERFORMANCE_B__3_OFFSET))(this, id, __);
		}
	};
}
