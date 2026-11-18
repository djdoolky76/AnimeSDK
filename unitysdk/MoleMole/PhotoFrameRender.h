#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class PhotoFrame;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class CanvasScaler; }

#define MOLEMOLE_PHOTOFRAMERENDER_ADDPHOTOFRAME_OFFSET UNITYSDK_OFFSET(0x13A03150)
#define MOLEMOLE_PHOTOFRAMERENDER_CAMERARENDERRT_OFFSET UNITYSDK_OFFSET(0x13A03080)
#define MOLEMOLE_PHOTOFRAMERENDER_CLEARCAMERATARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x13A030F0)
#define MOLEMOLE_PHOTOFRAMERENDER_GET_CANVASSIZE_OFFSET UNITYSDK_OFFSET(0x13A02C20)
#define MOLEMOLE_PHOTOFRAMERENDER_GET_RENDERSCALE_OFFSET UNITYSDK_OFFSET(0x13A02B60)
#define MOLEMOLE_PHOTOFRAMERENDER_GET_RENDERSIZE_OFFSET UNITYSDK_OFFSET(0x13A02C30)
#define MOLEMOLE_PHOTOFRAMERENDER_MNMJEMHCONP_OFFSET UNITYSDK_OFFSET(0x13A032A0)
#define MOLEMOLE_PHOTOFRAMERENDER_SETPHOTOCANVASSIZE_OFFSET UNITYSDK_OFFSET(0x13A02C40)
#define MOLEMOLE_PHOTOFRAMERENDER_SET_RENDERSCALE_OFFSET UNITYSDK_OFFSET(0x13A02BC0)
#define MOLEMOLE_PHOTOFRAMERENDER_UPDATECANVASANDCAMERA_OFFSET UNITYSDK_OFFSET(0x13A03460)
#define MOLEMOLE_PHOTOFRAMERENDER_UPDATERENDERSIZE_OFFSET UNITYSDK_OFFSET(0x13A02C90)
#define MOLEMOLE_PHOTOFRAMERENDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A03550)
#define MOLEMOLE_PHOTOFRAMERENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x13A03500)

namespace MoleMole
{
	inline static constexpr unsigned int PhotoFrameRender_TypeDefinitionIndex = 42744;

	class PhotoFrameRender : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Single* StaticGet__CKKFHFCANBD_k__BackingField()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PhotoFrameRender_TypeDefinitionIndex)->GetStaticField(0xFDE0);
		}
		::UnityEngine::Camera* camera; // 0x18
		::UnityEngine::UI::CanvasScaler* CanvasScaler; // 0x20
		::UnityEngine::Canvas* canvas; // 0x28
		::UnityEngine::Vector2 DCDIAGDEMEG; // 0x30
		::System::Single MNOHNGCGICG; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::RenderTexture* IMNPOLGHFDE; // 0x40
		::PhotoFrame* FAKHCNLCBCE; // 0x48
		::UnityEngine::Vector2 OODHJGIPJBC; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER__CCTOR_OFFSET))();
		}

		static ::System::Single get_RenderScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_GET_RENDERSCALE_OFFSET))();
		}

		static ::System::Void set_RenderScale(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_SET_RENDERSCALE_OFFSET))(EGEGIMGMJHN);
		}

		::UnityEngine::Vector2 get_CanvasSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_GET_CANVASSIZE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_RenderSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_GET_RENDERSIZE_OFFSET))(this);
		}

		::System::Void SetPhotoCanvasSize(::UnityEngine::Vector2 BEPMDFENBMH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_SETPHOTOCANVASSIZE_OFFSET))(this, BEPMDFENBMH);
		}

		::System::Void UpdateRenderSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_UPDATERENDERSIZE_OFFSET))(this);
		}

		::System::Void CameraRenderRT(::UnityEngine::RenderTexture* FJEEKLKBFHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_CAMERARENDERRT_OFFSET))(this, FJEEKLKBFHN);
		}

		::System::Void ClearCameraTargetTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_CLEARCAMERATARGETTEXTURE_OFFSET))(this);
		}

		::System::Void AddPhotoFrame(::PhotoFrame* FEKJMJOPFJC)
		{
			return ((::System::Void(*)(::PVOID, ::PhotoFrame*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_ADDPHOTOFRAME_OFFSET))(this, FEKJMJOPFJC);
		}

		::System::Void UpdateCanvasAndCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_UPDATECANVASANDCAMERA_OFFSET))(this);
		}

		static ::System::Void MNMJEMHCONP(::UnityEngine::Transform* BBOOJFBACED, ::UnityEngine::Transform* NEBJIMPEGKH)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOFRAMERENDER_MNMJEMHCONP_OFFSET))(BBOOJFBACED, NEBJIMPEGKH);
		}
	};
}
