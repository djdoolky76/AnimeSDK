#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGCHESSPIECEENTERBATTLEBROADCAST_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x164084B0)
#define MOLEMOLE_CONFIG_CONFIGCHESSPIECEENTERBATTLEBROADCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x16408570)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessPieceEnterBattleBroadcast_TypeDefinitionIndex = 42400;

	class ConfigChessPieceEnterBattleBroadcast : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Int32 DefaultEvtAnimID; // 0x18
		::System::Int32 EventAnimID; // 0x1C
		::System::Int32 HollowNpcEventAnimID; // 0x20
		::System::Int32 EventAudioID; // 0x24
		::System::Int32 DefaultAudioID; // 0x28
		::System::Int32 HollowNpcAudioID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSPIECEENTERBATTLEBROADCAST__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSPIECEENTERBATTLEBROADCAST_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
