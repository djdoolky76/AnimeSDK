#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIKKACLFOON.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class GalGameNPCActionBase; }
namespace MoleMole::GalGame { class GalGameNPCFadeAction; }

#define NGLANLAKCIN__CTOR_OFFSET UNITYSDK_OFFSET(0x105B7200)

inline static constexpr unsigned int NGLANLAKCIN_TypeDefinitionIndex = 82874;

class NGLANLAKCIN : public ::System::Object
{
public:
	::MoleMole::GalGame::GalGameNPCActionBase* MPLGIOOCKKA; // 0x10
	::MoleMole::GalGame::GalGameNPCFadeAction* AGGHIDGLAHO; // 0x18
	::System::Boolean NKNAANPODIA; // 0x20
	::System::Byte _padding0[0x3];
	::FIKKACLFOON DAAEHEHLLLD; // 0x24

	::System::Void _ctor(::System::Boolean ABFKKBNMEDJ, ::FIKKACLFOON JBCNPOHMGPE, ::MoleMole::GalGame::GalGameNPCFadeAction* BKFFLAOOMFA, ::MoleMole::GalGame::GalGameNPCActionBase* JAJLJOMHPPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::FIKKACLFOON, ::MoleMole::GalGame::GalGameNPCFadeAction*, ::MoleMole::GalGame::GalGameNPCActionBase*))((::PBYTE)hIl2Cpp + NGLANLAKCIN__CTOR_OFFSET))(this, ABFKKBNMEDJ, JBCNPOHMGPE, BKFFLAOOMFA, JAJLJOMHPPI);
	}
};
