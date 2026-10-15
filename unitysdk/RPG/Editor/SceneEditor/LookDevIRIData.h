#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_EDITOR_SCENEEDITOR_LOOKDEVIRIDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE4AB200)

namespace RPG::Editor::SceneEditor
{
	class LookDevIRIData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SCENEEDITOR_LOOKDEVIRIDATA_CTOR_OFFSET))(this);
		}

	};
}
