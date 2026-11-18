#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageHitType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EMJEBLHIJDE_KDNLGAGOFED_OFFSET UNITYSDK_OFFSET(0x10F44F00)

inline static constexpr unsigned int EMJEBLHIJDE_TypeDefinitionIndex = 40293;

class EMJEBLHIJDE : public ::System::Object
{
public:
	static ::System::String* KDNLGAGOFED(::MoleMole::Config::DamageHitType OBNIAHNMHPF)
	{
		return ((::System::String*(*)(::MoleMole::Config::DamageHitType))((::PBYTE)hIl2Cpp + EMJEBLHIJDE_KDNLGAGOFED_OFFSET))(OBNIAHNMHPF);
	}
};
