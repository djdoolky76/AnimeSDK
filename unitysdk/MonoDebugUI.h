#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define MONODEBUGUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B236300)
#define MONODEBUGUI_GET_FPSTEXT_OFFSET UNITYSDK_OFFSET(0x1B235F70)
#define MONODEBUGUI_START_OFFSET UNITYSDK_OFFSET(0x1B235FB0)
#define MONODEBUGUI_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B236150)

inline static constexpr unsigned int MonoDebugUI_TypeDefinitionIndex = 48608;

	class MonoDebugUI : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Text* HNBKPFHOHAM; // 0x18
		::Il2CppArray<::System::String*>* DNOEKKJJDEJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODEBUGUI_CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Text* get_FpsText()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODEBUGUI_GET_FPSTEXT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODEBUGUI_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODEBUGUI_UPDATE_OFFSET))(this);
		}

	};
