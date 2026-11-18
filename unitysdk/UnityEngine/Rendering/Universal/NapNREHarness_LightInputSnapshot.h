#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_LIGHTINPUTSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA69550)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapNREHarness_LightInputSnapshot_TypeDefinitionIndex = 26863;

	class NapNREHarness_LightInputSnapshot : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* rootIDs; // 0x10
		::Il2CppArray<::System::Single>* floatValues; // 0x18
		::Il2CppArray<::System::Int32>* blendLightIndices; // 0x20
		::Il2CppArray<::System::Int32>* intValues; // 0x28
		::System::Boolean valid; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_LIGHTINPUTSNAPSHOT__CTOR_OFFSET))(this);
		}
	};
}
