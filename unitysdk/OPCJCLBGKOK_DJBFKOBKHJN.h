#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"
class EANKAFJCEEH;
namespace RPG::GameCore { class BattleInstance; }

#define OPCJCLBGKOK_DJBFKOBKHJN_CTOR_OFFSET UNITYSDK_OFFSET(0xBF9DEE0)

inline static constexpr unsigned int OPCJCLBGKOK_DJBFKOBKHJN_TypeDefinitionIndex = 71911;

	class OPCJCLBGKOK_DJBFKOBKHJN : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleInstance* DOLKMGHOGBM; // 0x10
		::EANKAFJCEEH* HLIIPKKCPOM; // 0x18
		::RPG::Client::UISkillIndex GMDBHJKEAEI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_DJBFKOBKHJN_CTOR_OFFSET))(this);
		}

	};
