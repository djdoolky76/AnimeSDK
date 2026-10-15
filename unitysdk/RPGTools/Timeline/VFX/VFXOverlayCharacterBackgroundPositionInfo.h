#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDPOSITIONINFO_JDDOLBNGDAO_OFFSET UNITYSDK_OFFSET(0xE955CE0)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXOverlayCharacterBackgroundPositionInfo_TypeDefinitionIndex = 48670;

	struct alignas(4) VFXOverlayCharacterBackgroundPositionInfo
	{
		::UnityEngine::Vector2 Offset; // 0x10
		::System::Single Rotation; // 0x18
		::System::Single Scale; // 0x1C
		/*
		static ::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundPositionInfo JDDOLBNGDAO()
		{
			return ((::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundPositionInfo(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDPOSITIONINFO_JDDOLBNGDAO_OFFSET))();
		}
		*/

	};
}
