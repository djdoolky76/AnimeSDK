#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAASPECTRATIO_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC840)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x95D260)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAFAR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC800)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAFAR_OFFSET UNITYSDK_OFFSET(0x95D240)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAFOV_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC820)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAFOV_OFFSET UNITYSDK_OFFSET(0x95D250)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAFWD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC7C0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAFWD_OFFSET UNITYSDK_OFFSET(0x95D200)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAMOTIONINCLUDED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC8C0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAMOTIONINCLUDED_OFFSET UNITYSDK_OFFSET(0x95D2A0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERANEAR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC7E0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERANEAR_OFFSET UNITYSDK_OFFSET(0x95D230)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC760)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAPOS_OFFSET UNITYSDK_OFFSET(0x95D170)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERARIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC7A0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERARIGHT_OFFSET UNITYSDK_OFFSET(0x95D1D0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAUP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC780)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAUP_OFFSET UNITYSDK_OFFSET(0x95D1A0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAVIEWTOCLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC680)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAVIEWTOCLIP_OFFSET UNITYSDK_OFFSET(0x95D030)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CLIPTOCAMERAVIEW_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC6A0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CLIPTOCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x95D070)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CLIPTOPREVCLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC6C0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CLIPTOPREVCLIP_OFFSET UNITYSDK_OFFSET(0x95D0B0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_DELTATIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC880)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x95D280)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_DEPTHINVERTED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC8A0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_DEPTHINVERTED_OFFSET UNITYSDK_OFFSET(0x95D290)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_JITTEROFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC710)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_JITTEROFFSET_OFFSET UNITYSDK_OFFSET(0x95D130)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MINRELATIVELINEARDEPTHOBJECTSEPARATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC920)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MINRELATIVELINEARDEPTHOBJECTSEPARATION_OFFSET UNITYSDK_OFFSET(0x95D2D0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MOTIONVECTORSDILATED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC900)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MOTIONVECTORSDILATED_OFFSET UNITYSDK_OFFSET(0x95D2C0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MOTIONVECTORSINVALIDVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC860)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MOTIONVECTORSINVALIDVALUE_OFFSET UNITYSDK_OFFSET(0x95D270)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MVECSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC740)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MVECSCALE_OFFSET UNITYSDK_OFFSET(0x95D150)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_PREVCLIPTOCLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC6E0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_PREVCLIPTOCLIP_OFFSET UNITYSDK_OFFSET(0x95D0F0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_RESET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC8E0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_RESET_OFFSET UNITYSDK_OFFSET(0x95D2B0)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_WORLDTOVIEW_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0DC660)
#define UNITYENGINE_RENDERING_XESSCONSTANTS_SET_WORLDTOVIEW_OFFSET UNITYSDK_OFFSET(0x95CFF0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int XeSSConstants_TypeDefinitionIndex = 6221;

	struct alignas(4) XeSSConstants
	{
		::UnityEngine::Matrix4x4 mat0; // 0x10
		::UnityEngine::Matrix4x4 mat1; // 0x50
		::UnityEngine::Matrix4x4 mat2; // 0x90
		::UnityEngine::Matrix4x4 mat3; // 0xD0
		::UnityEngine::Matrix4x4 mat4; // 0x110
		::UnityEngine::Matrix4x4 mat5; // 0x150
		::UnityEngine::Vector2 vec20; // 0x190
		::UnityEngine::Vector2 vec21; // 0x198
		::UnityEngine::Vector2 vec22; // 0x1A0
		::UnityEngine::Vector3 vec30; // 0x1A8
		::UnityEngine::Vector3 vec31; // 0x1B4
		::UnityEngine::Vector3 vec32; // 0x1C0
		::UnityEngine::Vector3 vec33; // 0x1CC
		::System::Single f0; // 0x1D8
		::System::Single f1; // 0x1DC
		::System::Single f2; // 0x1E0
		::System::Single f3; // 0x1E4
		::System::Single f4; // 0x1E8
		::System::Single f5; // 0x1EC
		::System::UInt32 u0; // 0x1F0
		::System::Single f6; // 0x1F4

		::System::Void set_worldToView(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_WORLDTOVIEW_OFFSET))(this, value);
		}

		::System::Void set_cameraViewToClip(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAVIEWTOCLIP_OFFSET))(this, value);
		}

		::System::Void set_clipToCameraView(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CLIPTOCAMERAVIEW_OFFSET))(this, value);
		}

		::System::Void set_clipToPrevClip(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CLIPTOPREVCLIP_OFFSET))(this, value);
		}

		::System::Void set_prevClipToClip(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_PREVCLIPTOCLIP_OFFSET))(this, value);
		}

		::System::Void set_jitterOffset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_JITTEROFFSET_OFFSET))(this, value);
		}

		::System::Void set_mvecScale(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MVECSCALE_OFFSET))(this, value);
		}

		::System::Void set_cameraPos(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAPOS_OFFSET))(this, value);
		}

		::System::Void set_cameraUp(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAUP_OFFSET))(this, value);
		}

		::System::Void set_cameraRight(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERARIGHT_OFFSET))(this, value);
		}

		::System::Void set_cameraFwd(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAFWD_OFFSET))(this, value);
		}

		::System::Void set_cameraNear(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERANEAR_OFFSET))(this, value);
		}

		::System::Void set_cameraFar(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAFAR_OFFSET))(this, value);
		}

		::System::Void set_cameraFOV(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAFOV_OFFSET))(this, value);
		}

		::System::Void set_cameraAspectRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAASPECTRATIO_OFFSET))(this, value);
		}

		::System::Void set_motionVectorsInvalidValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MOTIONVECTORSINVALIDVALUE_OFFSET))(this, value);
		}

		::System::Void set_deltaTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_DELTATIME_OFFSET))(this, value);
		}

		::System::Void set_depthInverted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_DEPTHINVERTED_OFFSET))(this, value);
		}

		::System::Void set_cameraMotionIncluded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAMOTIONINCLUDED_OFFSET))(this, value);
		}

		::System::Void set_reset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_RESET_OFFSET))(this, value);
		}

		::System::Void set_motionVectorsDilated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MOTIONVECTORSDILATED_OFFSET))(this, value);
		}

		::System::Void set_minRelativeLinearDepthObjectSeparation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MINRELATIVELINEARDEPTHOBJECTSEPARATION_OFFSET))(this, value);
		}

		/*
		static ::System::Void set_worldToView_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_WORLDTOVIEW_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_cameraViewToClip_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAVIEWTOCLIP_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_clipToCameraView_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CLIPTOCAMERAVIEW_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_clipToPrevClip_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CLIPTOPREVCLIP_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_prevClipToClip_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_PREVCLIPTOCLIP_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_jitterOffset_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_JITTEROFFSET_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_mvecScale_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MVECSCALE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_cameraPos_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAPOS_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_cameraUp_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAUP_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_cameraRight_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERARIGHT_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_cameraFwd_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAFWD_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_cameraNear_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERANEAR_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_cameraFar_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAFAR_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_cameraFOV_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAFOV_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_cameraAspectRatio_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAASPECTRATIO_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_motionVectorsInvalidValue_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MOTIONVECTORSINVALIDVALUE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_deltaTime_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_DELTATIME_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_depthInverted_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_DEPTHINVERTED_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_cameraMotionIncluded_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_CAMERAMOTIONINCLUDED_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_reset_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_RESET_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_motionVectorsDilated_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MOTIONVECTORSDILATED_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_minRelativeLinearDepthObjectSeparation_Injected(::UnityEngine::Rendering::XeSSConstants& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSConstants&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONSTANTS_SET_MINRELATIVELINEARDEPTHOBJECTSEPARATION_INJECTED_OFFSET))(_unity_self, value);
		}
		*/
	};
}
