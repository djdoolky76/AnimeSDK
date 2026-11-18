#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define SPINE_UNITY_BLENDMODEMATERIALS_TEMPLATEMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB5F030)

namespace Spine::Unity
{
	inline static constexpr unsigned int BlendModeMaterials_TemplateMaterials_TypeDefinitionIndex = 38098;

	class BlendModeMaterials_TemplateMaterials : public ::System::Object
	{
	public:
		::UnityEngine::Material* additiveTemplate; // 0x10
		::UnityEngine::Material* multiplyTemplate; // 0x18
		::UnityEngine::Material* screenTemplate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_TEMPLATEMATERIALS__CTOR_OFFSET))(this);
		}
	};
}
