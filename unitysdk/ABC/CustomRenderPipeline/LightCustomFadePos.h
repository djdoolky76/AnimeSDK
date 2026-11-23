#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/CustomRenderPipeline/CustomPosData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

#define ABC_CUSTOMRENDERPIPELINE_LIGHTCUSTOMFADEPOS_GET_ISNEEDCUSTOMPOS_OFFSET UNITYSDK_OFFSET(0x167AE10)
#define ABC_CUSTOMRENDERPIPELINE_LIGHTCUSTOMFADEPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x281C4A0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int LightCustomFadePos_TypeDefinitionIndex = 16886;

	class LightCustomFadePos : public ::System::Object
	{
	public:
		::ABC::CustomRenderPipeline::CustomPosData m_CustomPosData; // 0x10
		::System::Boolean m_IsNeedCustomPos; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::E8984F4E44AE20E5 m_WorldSpaceCustomPos; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LIGHTCUSTOMFADEPOS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isNeedCustomPos()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LIGHTCUSTOMFADEPOS_GET_ISNEEDCUSTOMPOS_OFFSET))(this);
		}
	};
}
