#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEVARIABLEBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E5427D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEVARIABLEBOOL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E542810)
#define UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEVARIABLEBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5427B0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ConsoleVariableBool_TypeDefinitionIndex = 5696;

	class ConsoleVariableBool
	{
	public:
		::System::Void _ctor(::System::String* name, ::System::Boolean defaultValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEVARIABLEBOOL__CTOR_OFFSET))(this, name, defaultValue);
		}

		::System::Boolean get_value()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEVARIABLEBOOL_GET_VALUE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool* v)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CONSOLEVARIABLEBOOL_OP_IMPLICIT_OFFSET))(v);
		}
	};
}
