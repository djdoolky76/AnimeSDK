#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLEBHDLPN.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KBDGKAJPALP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLGAMEUPGRADEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A1150)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallGameUpgradeDialogContext_TypeDefinitionIndex = 93785;

	class BallGameUpgradeDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KBDGKAJPALP* world; // 0x28
		::System::Collections::Generic::List_1<::IAJLEBHDLPN>* Bullets; // 0x30
		::System::Int32 LevelTotal; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLGAMEUPGRADEDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
