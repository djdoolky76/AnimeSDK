#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Action; }

#define RPG_EDITOR_PREVIEWEDITORTICKER_CTOR_OFFSET UNITYSDK_OFFSET(0x18265460)
#define RPG_EDITOR_PREVIEWEDITORTICKER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18265400)
#define RPG_EDITOR_PREVIEWEDITORTICKER_UPDATE_OFFSET UNITYSDK_OFFSET(0x182653A0)

namespace RPG::Editor
{
	inline static constexpr unsigned int PreviewEditorTicker_TypeDefinitionIndex = 53139;

	class PreviewEditorTicker : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* OnUpdate; // 0x18
		::System::Action* OnLateUpdate; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_PREVIEWEDITORTICKER_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_PREVIEWEDITORTICKER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_PREVIEWEDITORTICKER_LATEUPDATE_OFFSET))(this);
		}

	};
}
