#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_PHOTO_ANIMATIONSELECTBYSLOTSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13113F70)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationSelectBySlotStateConfig_TypeDefinitionIndex = 76916;

	class AnimationSelectBySlotStateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONSELECTBYSLOTSTATECONFIG__CTOR_OFFSET))(this);
		}
	};
}
