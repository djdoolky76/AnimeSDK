#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardEffectUpdateEvent.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWPARTICLETEXTURESHEETANIMMODULEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x14670440)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowParticleTextureSheetAnimModuleEvent_TypeDefinitionIndex = 56160;

	class HollowParticleTextureSheetAnimModuleEvent : public ::MoleMole::HollowChessboard::HollowChessboardEffectUpdateEvent
	{
	public:
		::System::Int32 ConfigIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWPARTICLETEXTURESHEETANIMMODULEEVENT__CTOR_OFFSET))(this);
		}
	};
}
