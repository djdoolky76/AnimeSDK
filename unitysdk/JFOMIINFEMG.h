#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AdvEffectConfig; }

#define JFOMIINFEMG_AEOIKFNKAAP_OFFSET UNITYSDK_OFFSET(0x16648370)

inline static constexpr unsigned int JFOMIINFEMG_TypeDefinitionIndex = 57330;

	class JFOMIINFEMG : public ::System::Object
	{
	public:
		static ::RPG::GameCore::AdvEffectConfig* AEOIKFNKAAP(::RPG::GameCore::AdvEffectConfig* a1)
		{
			return ((::RPG::GameCore::AdvEffectConfig*(*)(::RPG::GameCore::AdvEffectConfig*))((::PBYTE)hIl2Cpp + JFOMIINFEMG_AEOIKFNKAAP_OFFSET))(a1);
		}

	};
