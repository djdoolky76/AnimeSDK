#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MBNMOPHDOAM_KDNLGAGOFED_OFFSET UNITYSDK_OFFSET(0x15E1C350)

inline static constexpr unsigned int MBNMOPHDOAM_TypeDefinitionIndex = 76640;

class MBNMOPHDOAM : public ::System::Object
{
public:
	static ::System::String* KDNLGAGOFED(::MoleMole::Config::DamageElementType OBNIAHNMHPF)
	{
		return ((::System::String*(*)(::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + MBNMOPHDOAM_KDNLGAGOFED_OFFSET))(OBNIAHNMHPF);
	}
};
