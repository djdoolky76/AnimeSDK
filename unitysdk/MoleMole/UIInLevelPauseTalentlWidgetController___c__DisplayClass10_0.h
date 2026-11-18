#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCOAGGHCODK;

#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175F1380)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHAVATARTALENTINFO_B__0_OFFSET UNITYSDK_OFFSET(0x175F1390)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTalentlWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 83491;

	class UIInLevelPauseTalentlWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Int32 i; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshAvatarTalentInfo_b__0(::KCOAGGHCODK* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCOAGGHCODK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHAVATARTALENTINFO_B__0_OFFSET))(this, o);
		}
	};
}
