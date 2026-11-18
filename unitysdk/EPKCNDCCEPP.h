#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class PlaneCameraConfig; }

#define EPKCNDCCEPP_ALFBPPJLFDG_OFFSET UNITYSDK_OFFSET(0x77BFD0)
#define EPKCNDCCEPP_BJBDIDPDKBC_OFFSET UNITYSDK_OFFSET(0x77BEB0)
#define EPKCNDCCEPP_CMLBKJLBBMC_OFFSET UNITYSDK_OFFSET(0x77C1D0)
#define EPKCNDCCEPP_FFCIOICFNFN_OFFSET UNITYSDK_OFFSET(0x77C0E0)
#define EPKCNDCCEPP_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x71F280)
#define EPKCNDCCEPP_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x77BE70)
#define EPKCNDCCEPP_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x40D700)
#define EPKCNDCCEPP_GLOEMBNKADD_OFFSET UNITYSDK_OFFSET(0x77C120)
#define EPKCNDCCEPP_HJNBDCEJEBH_OFFSET UNITYSDK_OFFSET(0x77C180)
#define EPKCNDCCEPP_IJIIDOAPGOO_OFFSET UNITYSDK_OFFSET(0x77BEA0)
#define EPKCNDCCEPP_JGHAGPDLDMF_OFFSET UNITYSDK_OFFSET(0x77C0F0)
#define EPKCNDCCEPP_LJHHDCDOOHN_OFFSET UNITYSDK_OFFSET(0x77BEC0)
#define EPKCNDCCEPP_MIHGPEJAANO_OFFSET UNITYSDK_OFFSET(0x77C170)
#define EPKCNDCCEPP_MNIIFKAJMIO_OFFSET UNITYSDK_OFFSET(0x5C9BF0)
#define EPKCNDCCEPP_PIIONPPCPKJ_OFFSET UNITYSDK_OFFSET(0x77C100)
#define EPKCNDCCEPP_PPAFGBILMME_OFFSET UNITYSDK_OFFSET(0x77C110)
#define EPKCNDCCEPP__CTOR_OFFSET UNITYSDK_OFFSET(0x77BE90)

inline static constexpr unsigned int EPKCNDCCEPP_TypeDefinitionIndex = 44219;

struct alignas(8) EPKCNDCCEPP
{
	::PipelineCamera::FinalCameraData EHJJKMGODLA; // 0x10
	::System::Single DGNIPLGJBKA; // 0x30
	::System::Byte _padding0[0x4];
	::Foundation::Clamped_1<::System::Single> HLGGJIJNIJN; // 0x38
	::System::Byte _padding1[0x10];
	::Foundation::Clamped_1<::System::Single> FLGFLHIKHNI; // 0x50
	::System::Byte _padding2[0x10];
	::Foundation::Clamped_1<::System::Single> GEEMKIKDHLB; // 0x68
	::System::Byte _padding3[0x10];
	::Foundation::Clamped_1<::System::Single> GOBHMPCBMFO; // 0x80

	::System::Void _ctor(::MoleMole::Cameras::PlaneCameraConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::PlaneCameraConfig*))((::PBYTE)hIl2Cpp + EPKCNDCCEPP__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::UnityEngine::Vector3 get_Location()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_GET_LOCATION_OFFSET))(this);
	}

	::UnityEngine::Quaternion get_Rotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_GET_ROTATION_OFFSET))(this);
	}

	::System::Single get_FieldOfView()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_GET_FIELDOFVIEW_OFFSET))(this);
	}

	::System::Void IJIIDOAPGOO(::System::Single GGGDEJHOHLD, ::System::Single AGHNGAINJMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_IJIIDOAPGOO_OFFSET))(this, GGGDEJHOHLD, AGHNGAINJMI);
	}

	::System::Void BJBDIDPDKBC(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_BJBDIDPDKBC_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void LJHHDCDOOHN(::UnityEngine::Vector2 BKLLIDOAEMI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_LJHHDCDOOHN_OFFSET))(this, BKLLIDOAEMI);
	}

	::System::Void ALFBPPJLFDG(::UnityEngine::Vector2 BKLLIDOAEMI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_ALFBPPJLFDG_OFFSET))(this, BKLLIDOAEMI);
	}

	::System::Void FFCIOICFNFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_FFCIOICFNFN_OFFSET))(this);
	}

	::System::Single MNIIFKAJMIO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_MNIIFKAJMIO_OFFSET))(this);
	}

	::System::Void JGHAGPDLDMF(::System::Single NPHOPECPHLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_JGHAGPDLDMF_OFFSET))(this, NPHOPECPHLF);
	}

	::System::Single PIIONPPCPKJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_PIIONPPCPKJ_OFFSET))(this);
	}

	::System::Single PPAFGBILMME()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_PPAFGBILMME_OFFSET))(this);
	}

	::UnityEngine::Vector2 GLOEMBNKADD()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_GLOEMBNKADD_OFFSET))(this);
	}

	::System::Void MIHGPEJAANO(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_MIHGPEJAANO_OFFSET))(this, HBEKKMCBGBK);
	}

	::UnityEngine::Vector2 HJNBDCEJEBH()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_HJNBDCEJEBH_OFFSET))(this);
	}

	::System::Void CMLBKJLBBMC(::System::Single ODCODCKANIK, ::System::Single FACKFLBBOON)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EPKCNDCCEPP_CMLBKJLBBMC_OFFSET))(this, ODCODCKANIK, FACKFLBBOON);
	}
};
