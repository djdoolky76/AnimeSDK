#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigCurveCtrlBaseNode.h"
#include "unitysdk/MoleMole/Config/ConfigCurveCtrlMatAlphaNode_MatAlphaCtrlType.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCURVECTRLMATALPHANODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x165318F0)
#define MOLEMOLE_CONFIG_CONFIGCURVECTRLMATALPHANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16531960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCurveCtrlMatAlphaNode_TypeDefinitionIndex = 39529;

	class ConfigCurveCtrlMatAlphaNode : public ::MoleMole::Config::ConfigCurveCtrlBaseNode
	{
	public:
		::System::String* TargetMats; // 0x48
		::System::String* MatProperty; // 0x50
		::MoleMole::Config::ConfigCurveCtrlMatAlphaNode_MatAlphaCtrlType CtrlType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCURVECTRLMATALPHANODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCURVECTRLMATALPHANODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
