#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/CustomRenderPipeline/ClipPlaneData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"

#define ABC_CUSTOMRENDERPIPELINE_LIGHTCLIPPLANE_GET_CLIPPLANECOUNT_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define ABC_CUSTOMRENDERPIPELINE_LIGHTCLIPPLANE_UPDATEANDGETWORLDSPACECLIPPLANE_OFFSET UNITYSDK_OFFSET(0x27D5410)
#define ABC_CUSTOMRENDERPIPELINE_LIGHTCLIPPLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x27D5880)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int LightClipPlane_TypeDefinitionIndex = 16748;

	class LightClipPlane : public ::System::Object
	{
	public:
		::System::Int32 m_ClipPlaneCount; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::ABC::CustomRenderPipeline::ClipPlaneData>* m_ClipPlaneData; // 0x18
		::Il2CppArray<::UnityEngine::E8984F4E44AE20E5>* m_WorldSpaceClipPlanes; // 0x20

		::Il2CppArray<::UnityEngine::E8984F4E44AE20E5>* UpdateAndGetWorldSpaceClipPlane(::UnityEngine::ACF10FE87B4C5617 EE10E33F46F4FCE6)
		{
			return ((::Il2CppArray<::UnityEngine::E8984F4E44AE20E5>*(*)(::PVOID, ::UnityEngine::ACF10FE87B4C5617))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LIGHTCLIPPLANE_UPDATEANDGETWORLDSPACECLIPPLANE_OFFSET))(this, EE10E33F46F4FCE6);
		}

		::System::Int32 get_clipPlaneCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LIGHTCLIPPLANE_GET_CLIPPLANECOUNT_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LIGHTCLIPPLANE__CTOR_OFFSET))(this);
		}
	};
}
