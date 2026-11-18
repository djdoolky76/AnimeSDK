#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicPageData; }
namespace System { class String; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS362_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB3240)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS362_1__SHOWSPLITSCREENPERFORMANCE_G__AUDIOLISTMOVENEXT_1_OFFSET UNITYSDK_OFFSET(0x19FB3250)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass362_1_TypeDefinitionIndex = 84239;

	template <typename T>
	class UIComicPageController___c__DisplayClass362_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 audioFinishTotalCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS362_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSplitScreenPerformance_g__AudioListMoveNext_1(::System::Boolean needResumeTimelineFromAuto, ::System::UInt32 pendingId, ::MoleMole::ComicPageData* pageData, ::System::String* endAudioKey, ::System::Single audioDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::MoleMole::ComicPageData*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS362_1__SHOWSPLITSCREENPERFORMANCE_G__AUDIOLISTMOVENEXT_1_OFFSET))(this, needResumeTimelineFromAuto, pendingId, pageData, endAudioKey, audioDuration);
		}
	};
}
