#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicPageData; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS346_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB87B0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS346_2__PLAYCURRENTCHAPTER_B__1_OFFSET UNITYSDK_OFFSET(0x16EB87C0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS346_2__PLAYCURRENTCHAPTER_B__2_OFFSET UNITYSDK_OFFSET(0x16EB8830)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass346_2_TypeDefinitionIndex = 84214;

	template <typename T1, typename T2>
	class UIComicPageController___c__DisplayClass346_2 : public ::System::Object
	{
	public:
		::MoleMole::ComicPageData* pageData; // 0x10
		::System::Object* CS___8__locals2; // 0x18
		::System::Boolean needResumeTimelineFromAuto; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 pendingId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS346_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayCurrentChapter_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS346_2__PLAYCURRENTCHAPTER_B__1_OFFSET))(this);
		}

		::System::Void _PlayCurrentChapter_b__2(::System::UInt32 id, ::System::UInt32 __)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS346_2__PLAYCURRENTCHAPTER_B__2_OFFSET))(this, id, __);
		}
	};
}
