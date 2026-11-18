#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/GraphicEnumSettingEntryBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

#define MOLEMOLE_RENDERSCALESETTINGENTRY_GET_PROFILETYPE_OFFSET UNITYSDK_OFFSET(0x13116CB0)
#define MOLEMOLE_RENDERSCALESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x13116CA0)
#define MOLEMOLE_RENDERSCALESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13116CC0)

namespace MoleMole
{
	inline static constexpr unsigned int RenderScaleSettingEntry_TypeDefinitionIndex = 41579;

	class RenderScaleSettingEntry : public ::MoleMole::GraphicEnumSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RENDERSCALESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RENDERSCALESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_ProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RENDERSCALESETTINGENTRY_GET_PROFILETYPE_OFFSET))(this);
		}
	};
}
