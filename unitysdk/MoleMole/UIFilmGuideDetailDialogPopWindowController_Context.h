#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class LDGHPCBNKMP_GFFFJPGLBMP;

#define MOLEMOLE_UIFILMGUIDEDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199977B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFilmGuideDetailDialogPopWindowController_Context_TypeDefinitionIndex = 44601;

	class UIFilmGuideDetailDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::LDGHPCBNKMP_GFFFJPGLBMP* ScrollData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
