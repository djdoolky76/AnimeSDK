#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1C1F9520)
#define UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER_START_OFFSET UNITYSDK_OFFSET(0x1C1F9320)
#define UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1F9280)
#define UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER___BASE_START_OFFSET UNITYSDK_OFFSET(0x1C1F9E10)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UICustomCorner_TypeDefinitionIndex = 76632;

	class UICustomCorner : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		::System::Boolean useCustomRectTransformSpace; // 0x20
		::System::Byte _padding0[0x7];
		::UnityEngine::RectTransform* normalizeRectTransform; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER_START_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICUSTOMCORNER___BASE_START_OFFSET))(this);
		}
	};
}
