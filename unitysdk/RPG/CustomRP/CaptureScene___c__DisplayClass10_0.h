#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class CaptureScene; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE1E30)
#define RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CAPTURE_B__0_OFFSET UNITYSDK_OFFSET(0x1CBE28F0)
#define RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CAPTURE_B__1_OFFSET UNITYSDK_OFFSET(0x1CBE2AB0)
#define RPG_CUSTOMRP_CAPTURESCENE___C__DISPLAYCLASS10_0__CAPTURE_B__2_OFFSET UNITYSDK_OFFSET(0x1CBE2BC0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureScene___c__DisplayClass10_0_TypeDefinitionIndex = 37600;

	class CaptureScene___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* cameraTran; // 0x10
		::RPG::CustomRP::CaptureScene* __4__this; // 0x18
		::UnityEngine::Camera* camera; // 0x20
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
