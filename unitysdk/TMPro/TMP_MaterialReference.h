#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

namespace TMPro
{
	struct alignas(8) TMP_MaterialReference
	{
		::UnityEngine::Material* material; // 0x10
		::System::Int32 referenceCount; // 0x18
	};
}
