#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DLSSGQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/DLSSQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/ReflexMode.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_DYNAMICTARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1F02C0C0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_ENABLEUIRECOMPOSITION_OFFSET UNITYSDK_OFFSET(0x1F02C0E0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMEGENMODE_OFFSET UNITYSDK_OFFSET(0x1F02C040)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMEGENNUM_OFFSET UNITYSDK_OFFSET(0x1F02C060)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMELIMITUS_OFFSET UNITYSDK_OFFSET(0x1F02C0A0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1F02BFF0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1F02C020)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_REFLEXMODE_OFFSET UNITYSDK_OFFSET(0x1F02C080)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_TARGETRESOLUTIONX_OFFSET UNITYSDK_OFFSET(0x1F02C000)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_TARGETRESOLUTIONY_OFFSET UNITYSDK_OFFSET(0x1F02C010)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1F02C170)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1F02C180)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_DYNAMICTARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1F02C0D0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_ENABLEUIRECOMPOSITION_OFFSET UNITYSDK_OFFSET(0x1F02C0F0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMEGENMODE_OFFSET UNITYSDK_OFFSET(0x1F02C050)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMEGENNUM_OFFSET UNITYSDK_OFFSET(0x1F02C070)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMELIMITUS_OFFSET UNITYSDK_OFFSET(0x1F02C0B0)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1F02C030)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_REFLEXMODE_OFFSET UNITYSDK_OFFSET(0x1F02C090)
#define UNITYENGINE_RENDERING_DLSSVIEWPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F02C100)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DLSSViewPort_TypeDefinitionIndex = 6155;

	class DLSSViewPort : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT__CTOR_OFFSET))(this, width, height);
		}

		::System::UInt64 get_handle()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_HANDLE_OFFSET))(this);
		}

		::System::Int32 get_targetResolutionX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_TARGETRESOLUTIONX_OFFSET))(this);
		}

		::System::Int32 get_targetResolutionY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_TARGETRESOLUTIONY_OFFSET))(this);
		}

		::UnityEngine::Rendering::DLSSQualityMode get_mode()
		{
			return ((::UnityEngine::Rendering::DLSSQualityMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::Rendering::DLSSQualityMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSQualityMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_MODE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::DLSSGQualityMode get_frameGenMode()
		{
			return ((::UnityEngine::Rendering::DLSSGQualityMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMEGENMODE_OFFSET))(this);
		}

		::System::Void set_frameGenMode(::UnityEngine::Rendering::DLSSGQualityMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSGQualityMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMEGENMODE_OFFSET))(this, value);
		}

		::System::Int32 get_frameGenNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMEGENNUM_OFFSET))(this);
		}

		::System::Void set_frameGenNum(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMEGENNUM_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::ReflexMode get_reflexMode()
		{
			return ((::UnityEngine::Rendering::ReflexMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_REFLEXMODE_OFFSET))(this);
		}

		::System::Void set_reflexMode(::UnityEngine::Rendering::ReflexMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ReflexMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_REFLEXMODE_OFFSET))(this, value);
		}

		::System::Int32 get_frameLimitUs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_FRAMELIMITUS_OFFSET))(this);
		}

		::System::Void set_frameLimitUs(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_FRAMELIMITUS_OFFSET))(this, value);
		}

		::System::Single get_dynamicTargetFrameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_DYNAMICTARGETFRAMERATE_OFFSET))(this);
		}

		::System::Void set_dynamicTargetFrameRate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_DYNAMICTARGETFRAMERATE_OFFSET))(this, value);
		}

		::System::Boolean get_enableUIRecomposition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_GET_ENABLEUIRECOMPOSITION_OFFSET))(this);
		}

		::System::Void set_enableUIRecomposition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_SET_ENABLEUIRECOMPOSITION_OFFSET))(this, value);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_RELEASE_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::Rendering::DLSSViewPort* self, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::DLSSViewPort*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSVIEWPORT_INTERNAL_CREATE_OFFSET))(self, width, height);
		}
	};
}
