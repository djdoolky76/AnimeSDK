#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_SLOTMATERIALOVERRIDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C13E0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphicCustomMaterials_SlotMaterialOverride_TypeDefinitionIndex = 38156;

	struct alignas(8) SkeletonGraphicCustomMaterials_SlotMaterialOverride
	{
		::System::Boolean overrideEnabled; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* slotName; // 0x18
		::UnityEngine::Material* material; // 0x20

		/*
		::System::Boolean Equals(::Spine::Unity::SkeletonGraphicCustomMaterials_SlotMaterialOverride other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Unity::SkeletonGraphicCustomMaterials_SlotMaterialOverride))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICCUSTOMMATERIALS_SLOTMATERIALOVERRIDE_EQUALS_OFFSET))(this, other);
		}
		*/
	};
}
