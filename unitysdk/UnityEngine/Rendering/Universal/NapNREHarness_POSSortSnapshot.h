#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSSORTSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C87DB80)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapNREHarness_POSSortSnapshot_TypeDefinitionIndex = 26855;

	class NapNREHarness_POSSortSnapshot : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* alphas; // 0x10
		::Il2CppArray<::System::Int32>* rootIDs; // 0x18
		::Il2CppArray<::System::Int32>* priorities; // 0x20
		::Il2CppArray<::System::Int32>* entityIDs; // 0x28
		::Il2CppArray<::System::Int32>* fadeTargets; // 0x30
		::Il2CppArray<::System::Single>* sortPriorities; // 0x38
		::Il2CppArray<::System::Int32>* entityTypes; // 0x40
		::Il2CppArray<::System::Int32>* cullResults; // 0x48
		::System::Int32 cameraID; // 0x50
		::System::Int32 earlyExitReason; // 0x54
		::System::Int32 maxDrawCount; // 0x58
		::System::Boolean sortedThisFrame; // 0x5C
		::System::Boolean valid; // 0x5D
		::System::Byte _padding0[0x2];
		::System::Int32 settingsMaxCount; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSSORTSNAPSHOT__CTOR_OFFSET))(this);
		}
	};
}
