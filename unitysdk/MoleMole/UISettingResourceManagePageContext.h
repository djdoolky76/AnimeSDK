#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBNGMAHAFFE.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISETTINGRESOURCEMANAGEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164A8EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingResourceManagePageContext_TypeDefinitionIndex = 41952;

	class UISettingResourceManagePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BBNGMAHAFFE PageType; // 0x28
		::System::Int32 TypeId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEMANAGEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
