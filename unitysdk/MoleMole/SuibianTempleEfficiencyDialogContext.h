#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HLKFBHJONFL;

#define MOLEMOLE_SUIBIANTEMPLEEFFICIENCYDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1249F130)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianTempleEfficiencyDialogContext_TypeDefinitionIndex = 44305;

	class SuibianTempleEfficiencyDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HLKFBHJONFL* ServerProgressData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANTEMPLEEFFICIENCYDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
