#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdAssembly_TypeDefinitionIndex = 73742;

	struct alignas(8) CrowdAssembly
	{
		::System::String* Name; // 0x10
		::UnityEngine::Mesh* Mesh; // 0x18
		::System::Int32 Submesh; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* Material; // 0x28
	};
}
