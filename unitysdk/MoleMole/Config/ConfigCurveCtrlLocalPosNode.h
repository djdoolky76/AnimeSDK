#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigCurveCtrlBaseNode.h"
#include "unitysdk/MoleMole/Config/ConfigCurveCtrlLocalPosNode_PosType.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCURVECTRLLOCALPOSNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16531840)
#define MOLEMOLE_CONFIG_CONFIGCURVECTRLLOCALPOSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x165318B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCurveCtrlLocalPosNode_TypeDefinitionIndex = 58924;

	class ConfigCurveCtrlLocalPosNode : public ::MoleMole::Config::ConfigCurveCtrlBaseNode
	{
	public:
		::System::String* TargetTrans; // 0x48
		::System::Boolean UseParentCoordinate; // 0x50
		::System::Byte _padding0[0x3];
		::MoleMole::Config::ConfigCurveCtrlLocalPosNode_PosType PosT; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCURVECTRLLOCALPOSNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCURVECTRLLOCALPOSNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
