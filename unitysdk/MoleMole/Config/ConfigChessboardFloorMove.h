#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDFLOORMOVE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x19297010)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDFLOORMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19297090)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardFloorMove_TypeDefinitionIndex = 67214;

	class ConfigChessboardFloorMove : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Single Duration; // 0x18
		::System::Single FadeDistance; // 0x1C
		::System::Boolean InsertChessboard; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDFLOORMOVE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDFLOORMOVE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
