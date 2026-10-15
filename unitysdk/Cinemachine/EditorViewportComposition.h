#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/ViewportComposition.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class String; }

#define CINEMACHINE_EDITORVIEWPORTCOMPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0xF0AB0)
#define CINEMACHINE_EDITORVIEWPORTCOMPOSITION_FJCOLNKJLBO_OFFSET UNITYSDK_OFFSET(0xF0AD0)
#define CINEMACHINE_EDITORVIEWPORTCOMPOSITION_PGCHGHNMIPH_OFFSET UNITYSDK_OFFSET(0xF0B20)

namespace Cinemachine
{
	inline static constexpr unsigned int EditorViewportComposition_TypeDefinitionIndex = 49637;

	struct alignas(8) EditorViewportComposition
	{
		::System::String* Name; // 0x10
		::System::Single X; // 0x18
		::System::Single Y; // 0x1C
		::System::Void _ctor(::System::String* a1, ::Cinemachine::ViewportComposition a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Cinemachine::ViewportComposition))((::PBYTE)hIl2Cpp + CINEMACHINE_EDITORVIEWPORTCOMPOSITION_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 FJCOLNKJLBO()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_EDITORVIEWPORTCOMPOSITION_FJCOLNKJLBO_OFFSET))(this);
		}

		::System::Void PGCHGHNMIPH(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CINEMACHINE_EDITORVIEWPORTCOMPOSITION_PGCHGHNMIPH_OFFSET))(this, a1);
		}

	};
}
