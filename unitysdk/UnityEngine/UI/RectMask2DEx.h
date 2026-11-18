#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/RectMask2D.h"

#define UNITYENGINE_UI_RECTMASK2DEX_GETSHOULDDISABLECULLING_OFFSET UNITYSDK_OFFSET(0x1FE13F40)
#define UNITYENGINE_UI_RECTMASK2DEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE13F90)
#define UNITYENGINE_UI_RECTMASK2DEX___BASE_GETSHOULDDISABLECULLING_OFFSET UNITYSDK_OFFSET(0x1FE13FF0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RectMask2DEx_TypeDefinitionIndex = 18434;

	class RectMask2DEx : public ::UnityEngine::UI::RectMask2D
	{
	public:
		::System::Boolean m_DisableCulling; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2DEX__CTOR_OFFSET))(this);
		}

		::System::Boolean GetShouldDisableCulling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2DEX_GETSHOULDDISABLECULLING_OFFSET))(this);
		}

		::System::Boolean __base_GetShouldDisableCulling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2DEX___BASE_GETSHOULDDISABLECULLING_OFFSET))(this);
		}
	};
}
