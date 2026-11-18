#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class BaseConfigSoundAction; }

#define MECILBCNDKL_EEELPONCNAD_OFFSET UNITYSDK_OFFSET(0x1852B800)

inline static constexpr unsigned int MECILBCNDKL_TypeDefinitionIndex = 71264;

class MECILBCNDKL : public ::System::Object
{
public:
	static ::System::Void EEELPONCNAD(::MoleMole::Config::BaseConfigSoundAction* OLKHDAAGGAA, ::MoleMole::Config::BaseConfigSoundAction*& OAFLGAMBFGO)
	{
		return ((::System::Void(*)(::MoleMole::Config::BaseConfigSoundAction*, ::MoleMole::Config::BaseConfigSoundAction*&))((::PBYTE)hIl2Cpp + MECILBCNDKL_EEELPONCNAD_OFFSET))(OLKHDAAGGAA, OAFLGAMBFGO);
	}
};
