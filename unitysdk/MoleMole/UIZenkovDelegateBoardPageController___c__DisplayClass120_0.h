#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPKHADAMILM;

#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS120_0__CLEARQUESTNEWANDREFRESHBYQUESTID_B__0_OFFSET UNITYSDK_OFFSET(0x1138FE40)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS120_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1138FE30)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardPageController___c__DisplayClass120_0_TypeDefinitionIndex = 51358;

	class UIZenkovDelegateBoardPageController___c__DisplayClass120_0 : public ::System::Object
	{
	public:
		::System::UInt32 questId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS120_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ClearQuestNewAndRefreshByQuestId_b__0(::BPKHADAMILM* q)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPKHADAMILM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS120_0__CLEARQUESTNEWANDREFRESHBYQUESTID_B__0_OFFSET))(this, q);
		}
	};
}
