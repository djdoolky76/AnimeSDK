#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class CaptureScene; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC10080)
#define RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CAPTURE_B__0_OFFSET UNITYSDK_OFFSET(0x1CC10B40)
#define RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CAPTURE_B__1_OFFSET UNITYSDK_OFFSET(0x1CC10D00)
#define RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CAPTURE_B__2_OFFSET UNITYSDK_OFFSET(0x1CC10E10)

namespace RPG::CustomRP
{
	class CaptureScene___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::CustomRP::CaptureScene* __4__this; // 0x10
		::UnityEngine::Camera* camera; // 0x18
		::UnityEngine::Transform* cameraTran; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void _Capture_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CAPTURE_B__0_OFFSET))(this);
		}

		::System::Void _Capture_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CAPTURE_B__1_OFFSET))(this);
		}

		::System::Void _Capture_b__2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CAPTURE_B__2_OFFSET))(this, a1);
		}

	};
}
