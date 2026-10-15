#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int RendererSlotMaterials_SlotMaterial_TypeDefinitionIndex = 73650;

	struct alignas(8) RendererSlotMaterials_SlotMaterial
	{
		::System::Int32 index; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* material; // 0x18
	};
}
