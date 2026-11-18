#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelMonsterHudWidgetChildWindowController; }
namespace MoleMole { class UIInLevelMonsterPortableHudBaseChildWindowController; }
namespace System { template <typename T> class Action_1; }

#define ECGCMHEDEPC_CBJPGIEPIGJ_LJHDGNAEDIC_OFFSET UNITYSDK_OFFSET(0x1062C260)
#define ECGCMHEDEPC_CBJPGIEPIGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1062C250)

inline static constexpr unsigned int ECGCMHEDEPC_CBJPGIEPIGJ_TypeDefinitionIndex = 55283;

class ECGCMHEDEPC_CBJPGIEPIGJ : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*>* DDODDCOBDHK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_CBJPGIEPIGJ__CTOR_OFFSET))(this);
	}

	::System::Void LJHDGNAEDIC(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* OFDKNLCFCPL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_CBJPGIEPIGJ_LJHDGNAEDIC_OFFSET))(this, OFDKNLCFCPL);
	}
};
