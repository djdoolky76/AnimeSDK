#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigChessboardPieceProxyModel_PieceProxyModelActionType.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPIECEPROXYMODEL_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x19230B40)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDPIECEPROXYMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19230C00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardPieceProxyModel_TypeDefinitionIndex = 87970;

	class ConfigChessboardPieceProxyModel : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* PivotCellKey; // 0x18
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x20
		::MoleMole::Config::ConfigChessboardPieceProxyModel_PieceProxyModelActionType Type; // 0x24
		::System::Boolean UseSpecific; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPIECEPROXYMODEL__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDPIECEPROXYMODEL_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
