#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }

#define CODE_MONOBEHAVIOR_LEVEL_MONOTRAINPARTYBUILDEFFECTSETTING_CTOR_OFFSET UNITYSDK_OFFSET(0xDF9FEC0)

namespace Code::MonoBehavior::Level
{
	inline static constexpr unsigned int MonoTrainPartyBuildEffectSetting_TypeDefinitionIndex = 50051;

	class MonoTrainPartyBuildEffectSetting : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean allowTriggerEffect; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Object*>* overrideShaderFloats; // 0x20
		::Il2CppArray<::System::Object*>* overrideShaderVectors; // 0x28
		::Il2CppArray<::System::Object*>* overrideShaderColors; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_MONOBEHAVIOR_LEVEL_MONOTRAINPARTYBUILDEFFECTSETTING_CTOR_OFFSET))(this);
		}

	};
}
