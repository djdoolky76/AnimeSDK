#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T> class Func_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_UINTFIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C0890)
#define UNITYENGINE_RENDERING_DEBUGUI_UINTFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1F2C0840)

namespace UnityEngine::Rendering
{
	class DebugUI_UIntField
	{
	public:
		::System::Func_1<::System::UInt32>* min; // 0x50
		::System::Func_1<::System::UInt32>* max; // 0x58
		::System::UInt32 intStepMult; // 0x60
		::System::UInt32 incStep; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_UINTFIELD_CTOR_OFFSET))(this);
		}

		::System::UInt32 ValidateValue(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_UINTFIELD_VALIDATEVALUE_OFFSET))(this, a1);
		}

	};
}
