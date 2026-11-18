#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace MoleMole { class UIActivityVideoDetailPopWindowController; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19D2DB30)
#define MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__PLAYVIDEOFROMSTART_B__1_OFFSET UNITYSDK_OFFSET(0x19D2DC90)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityVideoDetailPopWindowController___c__DisplayClass8_0_TypeDefinitionIndex = 62115;

	class UIActivityVideoDetailPopWindowController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::String* videoPath; // 0x10
		::MoleMole::UIActivityVideoDetailPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVideoFromStart_b__1(::DGDNKBFMHME* helper)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEODETAILPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__PLAYVIDEOFROMSTART_B__1_OFFSET))(this, helper);
		}
	};
}
