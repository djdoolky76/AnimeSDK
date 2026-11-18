#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKLBGAKHAOC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KFPKNGNFJNO;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x171BC200)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBagPopWindowController_Context_TypeDefinitionIndex = 91346;

	class UIZenkovBagPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::LJHFMILANJA_1<::KFPKNGNFJNO*>* SelectQuestData; // 0x28
		::System::Boolean IsLegworkBangboo; // 0x30
		::System::Boolean IsNightMode; // 0x31
		::System::Byte _padding0[0x2];
		::AKLBGAKHAOC ShowPageType; // 0x34
		::System::Int32 SearchEntityRid; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
