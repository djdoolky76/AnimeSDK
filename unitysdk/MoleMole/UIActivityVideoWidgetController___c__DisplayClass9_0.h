#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class DGDNKBFMHME;
class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;
namespace MoleMole { class UIActivityVideoWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19F97CE0)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYVIDEOFROMSTART_B__1_OFFSET UNITYSDK_OFFSET(0x19F97CF0)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYVIDEOFROMSTART_B__2_OFFSET UNITYSDK_OFFSET(0x19F981F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityVideoWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 92920;

	class UIActivityVideoWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::String* videoPath; // 0x10
		::MoleMole::UIActivityVideoWidgetController* __4__this; // 0x18
		::CJIEIHEDMME* activityBaseData; // 0x20
		::IANDOOLAALI_DLAAJNDJPLO* __9__2; // 0x28
		::System::Boolean videoFinish; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVideoFromStart_b__1(::DGDNKBFMHME* helper)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYVIDEOFROMSTART_B__1_OFFSET))(this, helper);
		}

		::System::Void _PlayVideoFromStart_b__2(::OAEFGCLEHHO* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYVIDEOFROMSTART_B__2_OFFSET))(this, rsp);
		}
	};
}
