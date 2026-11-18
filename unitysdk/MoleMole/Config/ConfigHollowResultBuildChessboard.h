#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTBUILDCHESSBOARD_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x131E66A0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTBUILDCHESSBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x131E6710)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowResultBuildChessboard_TypeDefinitionIndex = 88226;

	class ConfigHollowResultBuildChessboard : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTBUILDCHESSBOARD__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTBUILDCHESSBOARD_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
