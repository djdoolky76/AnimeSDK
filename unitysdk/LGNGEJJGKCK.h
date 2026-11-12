#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicEffectType.h"
#include "unitysdk/System/Object.h"
class GIHIEMMKHIP;

#define LGNGEJJGKCK_OMNMLHEFNIN_OFFSET UNITYSDK_OFFSET(0xBF340A0)

inline static constexpr unsigned int LGNGEJJGKCK_TypeDefinitionIndex = 69359;

	class LGNGEJJGKCK : public ::System::Object
	{
	public:
		static ::System::UInt32 OMNMLHEFNIN(::GIHIEMMKHIP* a1, ::RPG::GameCore::RogueMagicEffectType a2)
		{
			return ((::System::UInt32(*)(::GIHIEMMKHIP*, ::RPG::GameCore::RogueMagicEffectType))((::PBYTE)hIl2Cpp + LGNGEJJGKCK_OMNMLHEFNIN_OFFSET))(a1, a2);
		}

	};
