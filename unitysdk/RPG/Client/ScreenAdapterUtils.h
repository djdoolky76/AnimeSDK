#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IJKJDMEMJND;
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_SCREENADAPTERUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB10B00)
#define RPG_CLIENT_SCREENADAPTERUTILS_GETADJUSTEDSCREENRECT_OFFSET UNITYSDK_OFFSET(0xEAF0E60)
#define RPG_CLIENT_SCREENADAPTERUTILS_GETCLAMPEDSCREENPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0xEB0F220)
#define RPG_CLIENT_SCREENADAPTERUTILS_GETCLAMPEDSCREENPOINTTORAY_OFFSET UNITYSDK_OFFSET(0xEB0F3C0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENASPECT_OFFSET UNITYSDK_OFFSET(0xEB10600)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENHEIGHT_OFFSET UNITYSDK_OFFSET(0xEB108F0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENWIDTH_OFFSET UNITYSDK_OFFSET(0xEB10760)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDVIEWPORTRECT_OFFSET UNITYSDK_OFFSET(0xEB0F550)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_CLAMPEDINPUTMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xEB0F160)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_INSCREENASPECTADJUSTED_OFFSET UNITYSDK_OFFSET(0xEB103E0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ISSCREENHEIGHTADJUSTED_OFFSET UNITYSDK_OFFSET(0xEB0FAD0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ISSCREENWIDTHADJUSTED_OFFSET UNITYSDK_OFFSET(0xEB0F990)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENASPECT_OFFSET UNITYSDK_OFFSET(0xEB0FA60)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENHEIGHT_OFFSET UNITYSDK_OFFSET(0xEB0FF70)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENSAFEAREA_OFFSET UNITYSDK_OFFSET(0xEB10170)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENWIDTH_OFFSET UNITYSDK_OFFSET(0xEB0FE20)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_SCREENADAPTER_OFFSET UNITYSDK_OFFSET(0xEB100C0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_SCREENCENTERPOS_OFFSET UNITYSDK_OFFSET(0xEB10340)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_TRUEINPUTMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xEB0F110)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET__MAXASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xEB10AC0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET__MINASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xEB10A80)
#define RPG_CLIENT_SCREENADAPTERUTILS_ISSCREENPOINTINADJUSTEDSCREENRECT_OFFSET UNITYSDK_OFFSET(0xEB0F310)
#define RPG_CLIENT_SCREENADAPTERUTILS_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xEB0FDC0)
#define RPG_CLIENT_SCREENADAPTERUTILS_RESETSCREENADAPTER_OFFSET UNITYSDK_OFFSET(0xEB102E0)
#define RPG_CLIENT_SCREENADAPTERUTILS__GETSCREENPOINTBORDERPOSITION_OFFSET UNITYSDK_OFFSET(0xEB0FBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ScreenAdapterUtils_TypeDefinitionIndex = 61356;

	class ScreenAdapterUtils : public ::System::Object
	{
	public:
		static ::IJKJDMEMJND** StaticGet__IScreenAdapter()
		{
			return (::IJKJDMEMJND**)UnitySDK::FromName("RPG.Client", "ScreenAdapterUtils")->GetStaticField(0x734D0);
		}

		static ::UnityEngine::Rect* StaticGet__DefaultViewPortRect()
		{
			return (::UnityEngine::Rect*)UnitySDK::FromName("RPG.Client", "ScreenAdapterUtils")->GetStaticField(0x161B0);
		}

		static ::System::Boolean* StaticGet__IsCachedScreenPointBorderDirty()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "ScreenAdapterUtils")->GetStaticField(0x161C0);
		}

		static ::UnityEngine::Vector4* StaticGet__CachedScreenPointBorderPosition()
		{
			return (::UnityEngine::Vector4*)UnitySDK::FromName("RPG.Client", "ScreenAdapterUtils")->GetStaticField(0x161C4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_CCTOR_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_TrueInputMousePosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_TRUEINPUTMOUSEPOSITION_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_ClampedInputMousePosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_CLAMPEDINPUTMOUSEPOSITION_OFFSET))();
		}

		static ::System::Boolean IsScreenPointInAdjustedScreenRect(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_ISSCREENPOINTINADJUSTEDSCREENRECT_OFFSET))(a1);
		}

		static ::UnityEngine::Ray GetClampedScreenPointToRay(::UnityEngine::Vector3 a1, ::UnityEngine::Camera* a2)
		{
			return ((::UnityEngine::Ray(*)(::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GETCLAMPEDSCREENPOINTTORAY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect get_AdjustedViewPortRect()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDVIEWPORTRECT_OFFSET))();
		}

		static ::UnityEngine::Vector3 GetClampedScreenPointPosition(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GETCLAMPEDSCREENPOINTPOSITION_OFFSET))(a1);
		}

		static ::UnityEngine::Rect GetAdjustedScreenRect()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GETADJUSTEDSCREENRECT_OFFSET))();
		}

		static ::System::Void OnScreenSizeChanged()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_ONSCREENSIZECHANGED_OFFSET))();
		}

		static ::UnityEngine::Vector4 _GetScreenPointBorderPosition()
		{
			return ((::UnityEngine::Vector4(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS__GETSCREENPOINTBORDERPOSITION_OFFSET))();
		}

		static ::System::Int32 get_OriginScreenWidth()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENWIDTH_OFFSET))();
		}

		static ::System::Int32 get_OriginScreenHeight()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENHEIGHT_OFFSET))();
		}

		static ::UnityEngine::Rect get_OriginScreenSafeArea()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENSAFEAREA_OFFSET))();
		}

		static ::System::Single get_OriginScreenAspect()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENASPECT_OFFSET))();
		}

		static ::System::Void ResetScreenAdapter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_RESETSCREENADAPTER_OFFSET))();
		}

		static ::IJKJDMEMJND* get_ScreenAdapter()
		{
			return ((::IJKJDMEMJND*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_SCREENADAPTER_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_ScreenCenterPos()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_SCREENCENTERPOS_OFFSET))();
		}

		static ::System::Boolean get_IsScreenWidthAdjusted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ISSCREENWIDTHADJUSTED_OFFSET))();
		}

		static ::System::Boolean get_IsScreenHeightAdjusted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ISSCREENHEIGHTADJUSTED_OFFSET))();
		}

		static ::System::Boolean get_InScreenAspectAdjusted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_INSCREENASPECTADJUSTED_OFFSET))();
		}

		static ::System::Single get_AdjustedScreenAspect()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENASPECT_OFFSET))();
		}

		static ::System::Int32 get_AdjustedScreenWidth()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENWIDTH_OFFSET))();
		}

		static ::System::Int32 get_AdjustedScreenHeight()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENHEIGHT_OFFSET))();
		}

		static ::System::Single get__MinAspectRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET__MINASPECTRATIO_OFFSET))();
		}

		static ::System::Single get__MaxAspectRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET__MAXASPECTRATIO_OFFSET))();
		}

	};
}
