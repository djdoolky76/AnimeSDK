#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NLAMBOECBOB;

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER_PERSONALLINEROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x193A6DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController_PersonalLineRowData_TypeDefinitionIndex = 60172;

	class UIMainStoryPageController_PersonalLineRowData : public ::System::Object
	{
	public:
		::NLAMBOECBOB* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER_PERSONALLINEROWDATA__CTOR_OFFSET))(this);
		}
	};
}
