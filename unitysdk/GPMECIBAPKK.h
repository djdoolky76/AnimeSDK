#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EffectLODType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define GPMECIBAPKK_EPPDPPEHCBD_OFFSET UNITYSDK_OFFSET(0x10FFB470)
#define GPMECIBAPKK_JOLDAHEPANA_OFFSET UNITYSDK_OFFSET(0x10FFB5B0)
#define GPMECIBAPKK_NIEDFKAIJCO_OFFSET UNITYSDK_OFFSET(0x10FFB4C0)

inline static constexpr unsigned int GPMECIBAPKK_TypeDefinitionIndex = 70692;

class GPMECIBAPKK : public ::System::Object
{
public:
	static ::MoleMole::Config::EffectLODType EPPDPPEHCBD(::MoleMole::Config::EffectLODType JOEFEIGHKPF)
	{
		return ((::MoleMole::Config::EffectLODType(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + GPMECIBAPKK_EPPDPPEHCBD_OFFSET))(JOEFEIGHKPF);
	}

	static ::System::String* NIEDFKAIJCO(::MoleMole::Config::EffectLODType JOEFEIGHKPF)
	{
		return ((::System::String*(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + GPMECIBAPKK_NIEDFKAIJCO_OFFSET))(JOEFEIGHKPF);
	}

	static ::MoleMole::Config::EffectLODType JOLDAHEPANA(::MoleMole::Config::EffectLODType JOEFEIGHKPF)
	{
		return ((::MoleMole::Config::EffectLODType(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + GPMECIBAPKK_JOLDAHEPANA_OFFSET))(JOEFEIGHKPF);
	}
};
