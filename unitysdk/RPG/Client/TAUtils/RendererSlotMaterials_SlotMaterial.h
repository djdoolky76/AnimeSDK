#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

namespace RPG::Client::TAUtils
{
	struct alignas(8) RendererSlotMaterials_SlotMaterial
	{
		::System::Int32 index; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* material; // 0x18
	};
}
