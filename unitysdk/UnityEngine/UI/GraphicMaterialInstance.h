#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_GRAPHICMATERIALINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD38B80)
#define UNITYENGINE_UI_GRAPHICMATERIALINSTANCE_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x1CD38740)
#define UNITYENGINE_UI_GRAPHICMATERIALINSTANCE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CD389F0)
#define UNITYENGINE_UI_GRAPHICMATERIALINSTANCE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CD387C0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicMaterialInstance_TypeDefinitionIndex = 6729;

	class GraphicMaterialInstance : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Graphic* m_Graphic; // 0x18
		::UnityEngine::Material* m_OrginMaterial; // 0x20
		::UnityEngine::Material* m_MaterialInstance; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICMATERIALINSTANCE_CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Graphic* get_graphic()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICMATERIALINSTANCE_GET_GRAPHIC_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICMATERIALINSTANCE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICMATERIALINSTANCE_ONDISABLE_OFFSET))(this);
		}

	};
}
