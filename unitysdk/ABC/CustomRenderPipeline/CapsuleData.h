#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define ABC_CUSTOMRENDERPIPELINE_CAPSULEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x276BF40)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int CapsuleData_TypeDefinitionIndex = 16496;

	class CapsuleData : public ::System::Object
	{
	public:
		::System::Single length; // 0x10
		::System::Single radius; // 0x14
		::System::Single radiusZ; // 0x18
		::UnityEngine::Vector3 center; // 0x1C
		::UnityEngine::Vector3 direction; // 0x28
		::UnityEngine::Vector3 lightDir; // 0x34
		::System::Boolean overrideLightDir; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single occScale; // 0x44
		::System::String* boneName; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_CAPSULEDATA__CTOR_OFFSET))(this);
		}
	};
}
