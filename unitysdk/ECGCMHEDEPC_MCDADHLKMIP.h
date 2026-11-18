#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelMonsterPortableHudBaseChildWindowController; }
template <typename T> class MGBMBFBKFED_1;

#define ECGCMHEDEPC_MCDADHLKMIP_IHMPOBOLMOH_OFFSET UNITYSDK_OFFSET(0x10F1D2F0)
#define ECGCMHEDEPC_MCDADHLKMIP__CTOR_OFFSET UNITYSDK_OFFSET(0x10F1D2E0)

inline static constexpr unsigned int ECGCMHEDEPC_MCDADHLKMIP_TypeDefinitionIndex = 55295;

class ECGCMHEDEPC_MCDADHLKMIP : public ::System::Object
{
public:
	::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* JOLDOMEIKEF; // 0x10
	::MGBMBFBKFED_1<::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*>* AIBLPKLIGNK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_MCDADHLKMIP__CTOR_OFFSET))(this);
	}

	::System::Void IHMPOBOLMOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_MCDADHLKMIP_IHMPOBOLMOH_OFFSET))(this);
	}
};
