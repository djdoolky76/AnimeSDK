#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1769AD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardCollectWidgetControllerContext_TypeDefinitionIndex = 41498;

	class UIHollowCardCollectWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 genreID; // 0x28
		::System::Int32 abyssGroupId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
