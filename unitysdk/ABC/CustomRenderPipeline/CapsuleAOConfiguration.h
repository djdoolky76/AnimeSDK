#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace ABC::CustomRenderPipeline { class CapsuleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_CUSTOMRENDERPIPELINE_CAPSULEAOCONFIGURATION__CTOR_OFFSET UNITYSDK_OFFSET(0x28165F0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int CapsuleAOConfiguration_TypeDefinitionIndex = 16835;

	class CapsuleAOConfiguration : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::ABC::CustomRenderPipeline::CapsuleData*>* capsules; // 0x18
		::System::Boolean enableDebugVisualization; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_CAPSULEAOCONFIGURATION__CTOR_OFFSET))(this);
		}
	};
}
