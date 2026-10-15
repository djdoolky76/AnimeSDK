#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T> class Func_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_INTFIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F292680)
#define UNITYENGINE_RENDERING_DEBUGUI_INTFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1F292630)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_IntField_TypeDefinitionIndex = 35531;

	class DebugUI_IntField
	{
	public:
		::System::Func_1<::System::Int32>* min; // 0x50
		::System::Func_1<::System::Int32>* max; // 0x58
		::System::Int32 incStep; // 0x60
		::System::Int32 intStepMult; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_INTFIELD_CTOR_OFFSET))(this);
		}

		::System::Int32 ValidateValue(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_INTFIELD_VALIDATEVALUE_OFFSET))(this, a1);
		}

	};
}
