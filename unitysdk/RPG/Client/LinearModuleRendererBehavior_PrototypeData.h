#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

namespace RPG::Client
{
	inline static constexpr unsigned int LinearModuleRendererBehavior_PrototypeData_TypeDefinitionIndex = 70901;

	struct alignas(8) LinearModuleRendererBehavior_PrototypeData
	{
		::UnityEngine::Mesh* Mesh; // 0x10
		::UnityEngine::Material* Mat; // 0x18
		::System::Int32 SubMeshIndex; // 0x20
		::UnityEngine::Bounds Bounds; // 0x24
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* ItemDatas; // 0x40
	};
}
