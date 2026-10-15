#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/GameCore/FateRinSwitchDayTalker.h"
#include "unitysdk/System/Object.h"

#define LHEHAAABGHN_NIEPBFAFELJ_OFFSET UNITYSDK_OFFSET(0xB6A6DC0)

inline static constexpr unsigned int LHEHAAABGHN_TypeDefinitionIndex = 81063;

	class LHEHAAABGHN : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FateRinHouguOwnerType NIEPBFAFELJ(::RPG::GameCore::FateRinSwitchDayTalker a1)
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::RPG::GameCore::FateRinSwitchDayTalker))((::PBYTE)hIl2Cpp + LHEHAAABGHN_NIEPBFAFELJ_OFFSET))(a1);
		}

	};
