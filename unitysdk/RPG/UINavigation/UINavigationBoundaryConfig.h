#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigation_Rule.h"
#include "unitysdk/System/Object.h"
namespace RPG::UINavigation { class UINavigation; }

#define RPG_UINAVIGATION_UINAVIGATIONBOUNDARYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE890B10)

namespace RPG::UINavigation
{
	class UINavigationBoundaryConfig : public ::System::Object
	{
	public:
		::RPG::UINavigation::UINavigation_Rule Rule; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::UINavigation::UINavigation* Recipient; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBOUNDARYCONFIG_CTOR_OFFSET))(this);
		}

	};
}
