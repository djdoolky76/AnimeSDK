#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGVIEWRANGECHANGECHESSBOARD_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1BA453E0)
#define MOLEMOLE_CONFIG_CONFIGVIEWRANGECHANGECHESSBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA454A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewRangeChangeChessboard_TypeDefinitionIndex = 88827;

	class ConfigViewRangeChangeChessboard : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		// static const ::System::String* CHESSBOARD_NEW_UID_LIST; // 0x0
		// static const ::System::String* CHESSBOARD_REMOVED_UID_LIST; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWRANGECHANGECHESSBOARD__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWRANGECHANGECHESSBOARD_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
