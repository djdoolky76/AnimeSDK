#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/EGraphicCastShape.h"
#include "unitysdk/UnityEngine/UI/Graphic.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_GRAPHICCAST_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1EBC7E60)
#define UNITYENGINE_UI_GRAPHICCAST_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1EBC7E00)
#define UNITYENGINE_UI_GRAPHICCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC8340)
#define UNITYENGINE_UI_GRAPHICCAST___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1EBC83A0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicCast_TypeDefinitionIndex = 73461;

	class GraphicCast : public ::UnityEngine::UI::Graphic
	{
	public:
		::UnityEngine::UI::EGraphicCastShape CastShape; // 0xA8
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Vector3>* corners; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICCAST__CTOR_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICCAST_ONPOPULATEMESH_OFFSET))(this, vh);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* eventCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICCAST_ISRAYCASTLOCATIONVALID_OFFSET))(this, screenPoint, eventCamera);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICCAST___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}
	};
}
