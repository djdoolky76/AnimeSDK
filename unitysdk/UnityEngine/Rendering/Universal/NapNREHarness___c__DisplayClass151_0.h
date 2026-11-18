#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__DISPLAYCLASS151_0__COMPARERENDERERVISIBILITY_B__0_OFFSET UNITYSDK_OFFSET(0x1CA69300)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__DISPLAYCLASS151_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA692F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapNREHarness___c__DisplayClass151_0_TypeDefinitionIndex = 26854;

	class NapNREHarness___c__DisplayClass151_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* managedRecords; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__DISPLAYCLASS151_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _CompareRendererVisibility_b__0(::System::Int64 a, ::System::Int64 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS___C__DISPLAYCLASS151_0__COMPARERENDERERVISIBILITY_B__0_OFFSET))(this, a, b);
		}
	};
}
