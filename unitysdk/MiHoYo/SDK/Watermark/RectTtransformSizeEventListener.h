#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System { class Action; }

#define MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER_ABE386358CF63C61_OFFSET UNITYSDK_OFFSET(0x3B09AE0)
#define MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x1666CA0)
#define MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1708400)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int RectTtransformSizeEventListener_TypeDefinitionIndex = 12277;

	class RectTtransformSizeEventListener : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Action* RectTransformChanged; // 0x20

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void ABE386358CF63C61()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_RECTTTRANSFORMSIZEEVENTLISTENER_ABE386358CF63C61_OFFSET))(this);
		}
	};
}
