#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EditorUpdateScript.h"

namespace UnityEngine { class GameObject; }

#define EDITORBINDINGTRANSFORM_EDITORUPDATE_OFFSET UNITYSDK_OFFSET(0x1FF7BCD0)
#define EDITORBINDINGTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF7C0E0)

inline static constexpr unsigned int EditorBindingTransform_TypeDefinitionIndex = 96670;

class EditorBindingTransform : public ::EditorUpdateScript
{
public:
	::UnityEngine::GameObject* goSrc; // 0x18
	::UnityEngine::GameObject* goDst; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORBINDINGTRANSFORM__CTOR_OFFSET))(this);
	}

	::System::Void EditorUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORBINDINGTRANSFORM_EDITORUPDATE_OFFSET))(this);
	}
};
