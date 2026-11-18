#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_DEVELOPSCENEINFODISPLAYSUBSYSTEM_REMOVESCENEINFO_OFFSET UNITYSDK_OFFSET(0x142F7500)
#define MOLEMOLE_FLOWCANVAS_NODES_DEVELOPSCENEINFODISPLAYSUBSYSTEM_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x142F74A0)
#define MOLEMOLE_FLOWCANVAS_NODES_DEVELOPSCENEINFODISPLAYSUBSYSTEM_SHOWSCENEINFO_OFFSET UNITYSDK_OFFSET(0x142F73C0)
#define MOLEMOLE_FLOWCANVAS_NODES_DEVELOPSCENEINFODISPLAYSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x142F7550)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int DevelopSceneInfoDisplaySubsystem_TypeDefinitionIndex = 81009;

	class DevelopSceneInfoDisplaySubsystem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_DEVELOPSCENEINFODISPLAYSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void ShowSceneInfo(::MoleMole::GameplayTag tag, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 forward, ::System::String* message, ::System::Single fontSize, ::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_DEVELOPSCENEINFODISPLAYSUBSYSTEM_SHOWSCENEINFO_OFFSET))(this, tag, position, forward, message, fontSize, scale);
		}

		::System::Void SetColor(::MoleMole::GameplayTag tag, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_DEVELOPSCENEINFODISPLAYSUBSYSTEM_SETCOLOR_OFFSET))(this, tag, color);
		}

		::System::Void RemoveSceneInfo(::MoleMole::GameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_DEVELOPSCENEINFODISPLAYSUBSYSTEM_REMOVESCENEINFO_OFFSET))(this, tag);
		}
	};
}
