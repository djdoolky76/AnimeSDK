#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCURVECTRLBASENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x121B76F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCurveCtrlBaseNode_TypeDefinitionIndex = 46230;

	class ConfigCurveCtrlBaseNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* CurveKey; // 0x18
		::System::String* ForceFinishCondition; // 0x20
		::System::String* TargetValue; // 0x28
		::System::String* Duration; // 0x30
		::System::String* SuspendCondition; // 0x38
		::System::String* TimeScale; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCURVECTRLBASENODE__CTOR_OFFSET))(this);
		}
	};
}
