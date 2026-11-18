#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Config/DirectionPlayerOnKey.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIGHOLLOWENTITYSHOWPLAYERONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFFF1D50)
#define MOLEMOLE_CONFIGHOLLOWENTITYSHOWPLAYERONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF1DC0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigHollowEntityShowPlayerOnNode_TypeDefinitionIndex = 73268;

	class ConfigHollowEntityShowPlayerOnNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean UsePrev; // 0x18
		::System::Boolean FixedPlayerOnState; // 0x19
		::System::Boolean FixedPlayerOnKey; // 0x1A
		::MoleMole::PlayerOnViewState PlayerOnState; // 0x1B
		::MoleMole::Config::DirectionPlayerOnKey PlayerOnKey; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGHOLLOWENTITYSHOWPLAYERONNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGHOLLOWENTITYSHOWPLAYERONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
