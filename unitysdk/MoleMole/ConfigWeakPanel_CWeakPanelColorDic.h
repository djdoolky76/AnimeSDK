#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIGWEAKPANEL_CWEAKPANELCOLORDIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C6190)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigWeakPanel_CWeakPanelColorDic_TypeDefinitionIndex = 85873;

	class ConfigWeakPanel_CWeakPanelColorDic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGWEAKPANEL_CWEAKPANELCOLORDIC__CTOR_OFFSET))(this);
		}
	};
}
