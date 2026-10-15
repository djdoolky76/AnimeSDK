#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T> class Func_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_FLOATFIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C0150)
#define UNITYENGINE_RENDERING_DEBUGUI_FLOATFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1F2C0100)

namespace UnityEngine::Rendering
{
	class DebugUI_FloatField
	{
	public:
		::System::Func_1<::System::Single>* min; // 0x50
		::System::Func_1<::System::Single>* max; // 0x58
		::System::Single incStep; // 0x60
		::System::Single incStepMult; // 0x64
		::System::Int32 decimals; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_FLOATFIELD_CTOR_OFFSET))(this);
		}

		::System::Single ValidateValue(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_FLOATFIELD_VALIDATEVALUE_OFFSET))(this, a1);
		}

	};
}
