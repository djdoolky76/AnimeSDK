#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate; }
namespace System { class Object; }

#define FGIAPIJFCFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15764520)
#define FGIAPIJFCFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15764560)
#define FGIAPIJFCFN___C___SETVCAM_B__10_0_OFFSET UNITYSDK_OFFSET(0x15764570)

	class FGIAPIJFCFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x664F0);
		}

		static ::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate** StaticGet___9__10_0()
		{
			return (::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate**)UnitySDK::FromName("", "<>c")->GetStaticField(0x664F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGIAPIJFCFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN___C_CTOR_OFFSET))(this);
		}

		::System::Void __SetVCam_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN___C___SETVCAM_B__10_0_OFFSET))(this);
		}

	};
