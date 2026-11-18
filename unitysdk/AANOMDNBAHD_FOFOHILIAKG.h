#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectPatternInfoConfig; }
namespace System { class Action; }

#define AANOMDNBAHD_FOFOHILIAKG_HELOJEBLKJF_OFFSET UNITYSDK_OFFSET(0x14336050)
#define AANOMDNBAHD_FOFOHILIAKG__CTOR_OFFSET UNITYSDK_OFFSET(0x14336040)

inline static constexpr unsigned int AANOMDNBAHD_FOFOHILIAKG_TypeDefinitionIndex = 67891;

class AANOMDNBAHD_FOFOHILIAKG : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANOMDNBAHD_FOFOHILIAKG__CTOR_OFFSET))(this);
	}

	::System::Void HELOJEBLKJF(::MoleMole::Config::EffectPatternInfoConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectPatternInfoConfig*))((::PBYTE)hIl2Cpp + AANOMDNBAHD_FOFOHILIAKG_HELOJEBLKJF_OFFSET))(this, DFMKILICPFB);
	}
};
