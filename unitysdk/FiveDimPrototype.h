#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define FIVEDIMPROTOTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x2E78990)

	struct alignas(8) FiveDimPrototype
	{
		::UnityEngine::Mesh* mesh; // 0x10
		::UnityEngine::Material* material; // 0x18
		::System::Int32 subMeshID; // 0x20
		::System::Boolean usePanelUV; // 0x24
		::System::Byte _padding0[0x3];
		::System::String* prototypeID; // 0x28
		::System::Boolean hide; // 0x30
		::System::Void _ctor(::UnityEngine::Mesh* a1, ::UnityEngine::Material* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + FIVEDIMPROTOTYPE_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
