#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15D0DFF0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_2__ONSHOW_B__4_OFFSET UNITYSDK_OFFSET(0x15D0E000)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass3_2_TypeDefinitionIndex = 60182;

	template <typename T1, typename T2>
	class UIMainStoryPageController___c__DisplayClass3_2 : public ::System::Object
	{
	public:
		::System::Boolean cachedOpenPreUIAfterFinish; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS3_2__ONSHOW_B__4_OFFSET))(this);
		}
	};
}
