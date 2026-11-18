#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class IntUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYFAIRYNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFABCA30)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYFAIRYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xFABCAF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardPlayFairyNode_TypeDefinitionIndex = 75127;

	class ConfigChessboardPlayFairyNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::IntUISpecialNum* FairyID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYFAIRYNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPLAYFAIRYNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
