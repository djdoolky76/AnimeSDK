#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KBDGKAJPALP;
namespace System { class String; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLGAMERESULTENDDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F8050)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallGameResultEndDialogContext_TypeDefinitionIndex = 93743;

	class BallGameResultEndDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KBDGKAJPALP* world; // 0x28
		::System::String* RankStr; // 0x30
		::System::Boolean IsSuccess; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 Rank; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLGAMERESULTENDDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
