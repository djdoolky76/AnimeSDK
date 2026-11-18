#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGCHESSPIECEBROADCAST_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFABC930)
#define MOLEMOLE_CONFIG_CONFIGCHESSPIECEBROADCAST__CTOR_OFFSET UNITYSDK_OFFSET(0xFABC9F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessPieceBroadcast_TypeDefinitionIndex = 66606;

	class ConfigChessPieceBroadcast : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Int32 OverrideKey; // 0x18
		::System::Single Duration; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSPIECEBROADCAST__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSPIECEBROADCAST_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
