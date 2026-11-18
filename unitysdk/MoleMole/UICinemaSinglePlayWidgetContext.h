#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class AIPAFAGLLGH;

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB8250)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetContext_TypeDefinitionIndex = 46517;

	class UICinemaSinglePlayWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::AIPAFAGLLGH* singlePlayController; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
