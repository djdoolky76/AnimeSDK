#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class CaptureBoundary; }
namespace RPG::CustomRP { class CaptureBoundary_FetchTextureDelegate; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }

#define RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC0D930)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0__CAPTUREIMPL_B__0_OFFSET UNITYSDK_OFFSET(0x1CC0E3E0)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0__CAPTUREIMPL_B__1_OFFSET UNITYSDK_OFFSET(0x1CC0E410)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0__CAPTUREIMPL_B__2_OFFSET UNITYSDK_OFFSET(0x1CC0E440)

namespace RPG::CustomRP
{
	class CaptureBoundary___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::RPG::CustomRP::CaptureBoundary_FetchTextureDelegate* fd; // 0x10
		::RPG::CustomRP::CaptureBoundary* __4__this; // 0x18
		::UnityEngine::Camera* camera; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0_CTOR_OFFSET))(this);
		}

		::System::Void _CaptureImpl_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0__CAPTUREIMPL_B__0_OFFSET))(this);
		}

		::System::Void _CaptureImpl_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0__CAPTUREIMPL_B__1_OFFSET))(this);
		}

		::System::Void _CaptureImpl_b__2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY___C__DISPLAYCLASS25_0__CAPTUREIMPL_B__2_OFFSET))(this, a1);
		}

	};
}
