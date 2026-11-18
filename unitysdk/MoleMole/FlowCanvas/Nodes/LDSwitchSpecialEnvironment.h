#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x146650E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x14665480)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSwitchSpecialEnvironment_TypeDefinitionIndex = 82610;

	class LDSwitchSpecialEnvironment
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* specialEnvKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT_INVOKE_OFFSET))(this, specialEnvKey);
		}
	};
}
