#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIYOROZUYAABYSSS3PAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x170BD140)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAbyssS3PageController_Context_TypeDefinitionIndex = 56845;

	class UIYorozuyaAbyssS3PageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSS3PAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
