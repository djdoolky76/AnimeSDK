#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class IntUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCALSTARTINDEXNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x131DF530)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCALSTARTINDEXNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x131DF5F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCalStartIndexNode_TypeDefinitionIndex = 81733;

	class ConfigChessboardCalStartIndexNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::IntUISpecialNum* StartChessPieceIndex; // 0x18
		::MoleMole::Config::IntUISpecialNum* StartIndexType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCALSTARTINDEXNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCALSTARTINDEXNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
