#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate; }
namespace System { class Object; }

#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBC3E60)
#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBC3EA0)
#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER___C__ACTIVEVIRTUALCAMERA_B__0_0_OFFSET UNITYSDK_OFFSET(0x1DBC3EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIVirtualCameraController___c_TypeDefinitionIndex = 71073;

	class UIVirtualCameraController___c : public ::System::Object
	{
	public:
		static ::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate** StaticGet___9__0_0()
		{
			return (::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x55060);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x55068);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVIRTUALCAMERACONTROLLER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVIRTUALCAMERACONTROLLER___C_CTOR_OFFSET))(this);
		}

		::System::Void _ActiveVirtualCamera_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVIRTUALCAMERACONTROLLER___C__ACTIVEVIRTUALCAMERA_B__0_0_OFFSET))(this);
		}

	};
}
