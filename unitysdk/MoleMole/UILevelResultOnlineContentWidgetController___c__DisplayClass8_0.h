#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFIFKJHLKCF.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
namespace System { class String; }

#define MOLEMOLE_UILEVELRESULTONLINECONTENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C4F240)
#define MOLEMOLE_UILEVELRESULTONLINECONTENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHINFO_B__0_OFFSET UNITYSDK_OFFSET(0x17C4F250)
#define MOLEMOLE_UILEVELRESULTONLINECONTENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHINFO_B__1_OFFSET UNITYSDK_OFFSET(0x17C4F2E0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultOnlineContentWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 49898;

	class UILevelResultOnlineContentWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::FBHPDPBIGPK* friendBrief; // 0x10
		::EFIFKJHLKCF teamInfoType; // 0x18
		::System::Int32 contributionRatio; // 0x1C
		::System::Boolean isFakePlayer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTONLINECONTENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::String* _RefreshInfo_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTONLINECONTENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHINFO_B__0_OFFSET))(this);
		}

		::System::Void _RefreshInfo_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTONLINECONTENTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHINFO_B__1_OFFSET))(this);
		}
	};
}
