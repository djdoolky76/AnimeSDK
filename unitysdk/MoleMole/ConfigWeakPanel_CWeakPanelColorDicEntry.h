#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGWEAKPANEL_CWEAKPANELCOLORDICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x190C6140)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigWeakPanel_CWeakPanelColorDicEntry_TypeDefinitionIndex = 85872;

	class ConfigWeakPanel_CWeakPanelColorDicEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGWEAKPANEL_CWEAKPANELCOLORDICENTRY__CTOR_OFFSET))(this);
		}
	};
}
