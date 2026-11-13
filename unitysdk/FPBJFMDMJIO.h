#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPBJFMDMJIO_VCameraDialogChangeState.h"
#include "unitysdk/System/Object.h"
class GNPKFEMELOI;
namespace RPG::Client { class CameraBlendCurve; }

#define FPBJFMDMJIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1876DF30)
#define FPBJFMDMJIO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1876D690)
#define FPBJFMDMJIO_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1876DF10)
#define FPBJFMDMJIO_GFMPFDFLMCD_OFFSET UNITYSDK_OFFSET(0x1876D820)
#define FPBJFMDMJIO_IBINMGNOPIA_OFFSET UNITYSDK_OFFSET(0x1876D8A0)
#define FPBJFMDMJIO_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0x1876DD10)
#define FPBJFMDMJIO_JKHOBGMGIHJ_OFFSET UNITYSDK_OFFSET(0x1876D6E0)
#define FPBJFMDMJIO_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1876D8F0)
#define FPBJFMDMJIO_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1876DF20)

inline static constexpr unsigned int FPBJFMDMJIO_TypeDefinitionIndex = 71497;

	class FPBJFMDMJIO : public ::System::Object
	{
	public:
		::RPG::Client::CameraBlendCurve* NGKJBNDABEP; // 0x10
		::GNPKFEMELOI* AAMLGDLIBJH; // 0x18
		::RPG::Client::CameraBlendCurve* GEGCJHJJGBG; // 0x20
		::GNPKFEMELOI* KIHEGPGEBDI; // 0x28
		::GNPKFEMELOI* PJLMHNGOAIP; // 0x30
		::FPBJFMDMJIO_VCameraDialogChangeState _CurrentState_k__BackingField; // 0x38
		::System::Boolean MJFONPGJFLG; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBJFMDMJIO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBJFMDMJIO_DISPOSE_OFFSET))(this);
		}

		::System::Void JKHOBGMGIHJ(::GNPKFEMELOI* a1, ::GNPKFEMELOI* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::GNPKFEMELOI*, ::GNPKFEMELOI*, ::System::Boolean))((::PBYTE)hIl2Cpp + FPBJFMDMJIO_JKHOBGMGIHJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IBINMGNOPIA(::GNPKFEMELOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNPKFEMELOI*))((::PBYTE)hIl2Cpp + FPBJFMDMJIO_IBINMGNOPIA_OFFSET))(this, a1);
		}

		::GNPKFEMELOI* KFGJEKJHIMB(::System::Single a1)
		{
			return ((::GNPKFEMELOI*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FPBJFMDMJIO_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::System::Void GFMPFDFLMCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBJFMDMJIO_GFMPFDFLMCD_OFFSET))(this);
		}

		::System::Void JEJLPHKIHLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBJFMDMJIO_JEJLPHKIHLB_OFFSET))(this);
		}

		::FPBJFMDMJIO_VCameraDialogChangeState get_CurrentState()
		{
			return ((::FPBJFMDMJIO_VCameraDialogChangeState(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBJFMDMJIO_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentState(::FPBJFMDMJIO_VCameraDialogChangeState a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPBJFMDMJIO_VCameraDialogChangeState))((::PBYTE)hIl2Cpp + FPBJFMDMJIO_SET_CURRENTSTATE_OFFSET))(this, a1);
		}

	};
