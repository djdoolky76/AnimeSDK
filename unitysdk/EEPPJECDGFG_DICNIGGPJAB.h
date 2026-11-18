#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDigibooEffect_EffectAction; }

#define EEPPJECDGFG_DICNIGGPJAB__CTOR_OFFSET UNITYSDK_OFFSET(0x16139370)

inline static constexpr unsigned int EEPPJECDGFG_DICNIGGPJAB_TypeDefinitionIndex = 81054;

class EEPPJECDGFG_DICNIGGPJAB : public ::System::Object
{
public:
	::MoleMole::ConfigDigibooEffect_EffectAction* PNCBKGGEPEM; // 0x10
	::System::Boolean MHOIBAODPID; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single MMNNLOMMNGL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPPJECDGFG_DICNIGGPJAB__CTOR_OFFSET))(this);
	}
};
