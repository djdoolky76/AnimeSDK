#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_EDITOR_SCENEEDITOR_LOOKDEVIRIPREVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xE4AB210)

namespace RPG::Editor::SceneEditor
{
	class LookDevIRIPreview : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SCENEEDITOR_LOOKDEVIRIPREVIEW_CTOR_OFFSET))(this);
		}

	};
}
