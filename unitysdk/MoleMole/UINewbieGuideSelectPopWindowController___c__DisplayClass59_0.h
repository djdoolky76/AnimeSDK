#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace MoleMole { class UINewbieGuideSelectPopWindowController; }
namespace System { class String; }

#define MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x193B9C10)
#define MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_0__PLAYSINGLEVIDEO_B__1_OFFSET UNITYSDK_OFFSET(0x193B9C20)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideSelectPopWindowController___c__DisplayClass59_0_TypeDefinitionIndex = 61165;

	class UINewbieGuideSelectPopWindowController___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::System::String* videoPath; // 0x10
		::MoleMole::UINewbieGuideSelectPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySingleVideo_b__1(::DGDNKBFMHME* helper)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS59_0__PLAYSINGLEVIDEO_B__1_OFFSET))(this, helper);
		}
	};
}
