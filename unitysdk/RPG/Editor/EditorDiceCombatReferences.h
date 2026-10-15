#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_EDITOR_EDITORDICECOMBATREFERENCES_CTOR_OFFSET UNITYSDK_OFFSET(0xE4AAE90)

namespace RPG::Editor
{
	class EditorDiceCombatReferences : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_EDITORDICECOMBATREFERENCES_CTOR_OFFSET))(this);
		}

	};
}
