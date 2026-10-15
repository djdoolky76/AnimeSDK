#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define EDITORLIGHTPREVIEWER_KHEPAALKNPP_CTOR_OFFSET UNITYSDK_OFFSET(0x155DFAC0)

	class EditorLightPreviewer_KHEPAALKNPP : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* PANGKOPAOML; // 0x10
		::System::Boolean CNBBPGFKLGC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER_KHEPAALKNPP_CTOR_OFFSET))(this);
		}

	};
