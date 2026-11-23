#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/GradientSettings.h"
#include "unitysdk/UnityEngine/UIElements/VectorImageVertex.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_UIELEMENTS_VECTORIMAGE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x2327980)
#define UNITYENGINE_UIELEMENTS_VECTORIMAGE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x21CC1D0)
#define UNITYENGINE_UIELEMENTS_VECTORIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x4379560)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VectorImage_TypeDefinitionIndex = 13678;

	class VectorImage : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 version; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Texture2D* atlas; // 0x20
		::Il2CppArray<::UnityEngine::UIElements::VectorImageVertex>* vertices; // 0x28
		::Il2CppArray<::System::UInt16>* indices; // 0x30
		::Il2CppArray<::UnityEngine::UIElements::GradientSettings>* settings; // 0x38
		::UnityEngine::Vector2 size; // 0x40

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VECTORIMAGE_GET_HEIGHT_OFFSET))(this);
		}

		::System::Single get_width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VECTORIMAGE_GET_WIDTH_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VECTORIMAGE__CTOR_OFFSET))(this);
		}
	};
}
