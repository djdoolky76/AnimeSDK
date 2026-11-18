#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class UILaunchPageController; }
namespace System { class Action; }

#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x186B0060)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__0_OFFSET UNITYSDK_OFFSET(0x186B0070)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__1_OFFSET UNITYSDK_OFFSET(0x186B01A0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__2_OFFSET UNITYSDK_OFFSET(0x186B02C0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__3_OFFSET UNITYSDK_OFFSET(0x186B0160)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__4_OFFSET UNITYSDK_OFFSET(0x186B02A0)

namespace MoleMole
{
	inline static constexpr unsigned int UILaunchPageController___c__DisplayClass12_0_TypeDefinitionIndex = 49587;

	class UILaunchPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action* __9__4; // 0x10
		::MoleMole::UILaunchPageController* __4__this; // 0x18
		::System::Action* __9__3; // 0x20
		::MoleMole::IVideoPlayer* vp; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayGameLogo_b__0(::MoleMole::IVideoPlayer* source)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__0_OFFSET))(this, source);
		}

		::System::Void _PlayGameLogo_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__3_OFFSET))(this);
		}

		::System::Void _PlayGameLogo_b__1(::DGDNKBFMHME* video)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__1_OFFSET))(this, video);
		}

		::System::Void _PlayGameLogo_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__4_OFFSET))(this);
		}

		::System::Void _PlayGameLogo_b__2(::DGDNKBFMHME* video)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__DISPLAYCLASS12_0__PLAYGAMELOGO_B__2_OFFSET))(this, video);
		}
	};
}
