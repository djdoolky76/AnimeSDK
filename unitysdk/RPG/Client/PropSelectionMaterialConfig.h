#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RenderSelectMode.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROPSELECTIONMATERIALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDDFABD0)

namespace RPG::Client
{
	class PropSelectionMaterialConfig : public ::System::Object
	{
	public:
		::RPG::Client::RenderSelectMode Mode; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* Renderer; // 0x18
		::System::String* RenderName; // 0x20
		::UnityEngine::Material* OverlayMat; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONMATERIALCONFIG_CTOR_OFFSET))(this);
		}

	};
}
