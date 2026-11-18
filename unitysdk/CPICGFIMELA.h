#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/PipelineCamera/EulerRotation.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define CPICGFIMELA_CDPPOKOGPKB_OFFSET UNITYSDK_OFFSET(0x7CA030)
#define CPICGFIMELA_COBPIICGJJA_OFFSET UNITYSDK_OFFSET(0x7C9D50)
#define CPICGFIMELA_DBAPBFNLJBO_OFFSET UNITYSDK_OFFSET(0x7CA150)
#define CPICGFIMELA_DOAHAOMKFLP_OFFSET UNITYSDK_OFFSET(0x183172C0)
#define CPICGFIMELA_EPDDPFGCCIE_OFFSET UNITYSDK_OFFSET(0x7C9DC0)
#define CPICGFIMELA_FFCIOICFNFN_OFFSET UNITYSDK_OFFSET(0x7C9CB0)
#define CPICGFIMELA_GKPNJPPNBIH_OFFSET UNITYSDK_OFFSET(0x7C9D50)
#define CPICGFIMELA_HEBKJMOCBJH_OFFSET UNITYSDK_OFFSET(0x7C9B90)
#define CPICGFIMELA_INILLLEALMG_OFFSET UNITYSDK_OFFSET(0x7C9F80)
#define CPICGFIMELA_JCIODAGLLGB_OFFSET UNITYSDK_OFFSET(0x18316630)
#define CPICGFIMELA_JGHAGPDLDMF_OFFSET UNITYSDK_OFFSET(0x7C9CA0)
#define CPICGFIMELA_MMGNJJGEHOD_OFFSET UNITYSDK_OFFSET(0x7C9BB0)
#define CPICGFIMELA_OEHGDBAHNEL_OFFSET UNITYSDK_OFFSET(0x7CA140)
#define CPICGFIMELA_OPMGKOJBLJO_OFFSET UNITYSDK_OFFSET(0x7C9B70)
#define CPICGFIMELA__CTOR_OFFSET UNITYSDK_OFFSET(0x7C9AB0)

inline static constexpr unsigned int CPICGFIMELA_TypeDefinitionIndex = 79862;

struct alignas(8) CPICGFIMELA
{
	::Foundation::Variable_1<::UnityEngine::Vector3> DPIDDIGKGNI; // 0x10
	::System::Byte _padding0[0x18];
	::Foundation::Clamped_1<::System::Single> GOBHMPCBMFO; // 0x30
	::System::Byte _padding1[0x10];
	::PipelineCamera::EulerRotation ABHPOOGNKHK; // 0x48
	::System::Single CMGBPBJFHLJ; // 0x90
	::System::Boolean IDDFKOLJPJH; // 0x94
	::System::Byte _padding2[0x3];
	::System::Int32 MPPPENLKINK; // 0x98
	::System::Single HEJGDIDPMPB; // 0x9C

	::System::Void _ctor(::Foundation::Variable_1<::UnityEngine::Vector3> LJCMMEIDBBM, ::Foundation::Clamped_1<::System::Single> NPHOPECPHLF, ::PipelineCamera::EulerRotation BFBELMDIAHI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Variable_1<::UnityEngine::Vector3>, ::Foundation::Clamped_1<::System::Single>, ::PipelineCamera::EulerRotation))((::PBYTE)hIl2Cpp + CPICGFIMELA__CTOR_OFFSET))(this, LJCMMEIDBBM, NPHOPECPHLF, BFBELMDIAHI);
	}

	/*
	static ::PipelineCamera::WorldBasicCameraData JCIODAGLLGB(::CPICGFIMELA IPMMCGDMODG)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::CPICGFIMELA))((::PBYTE)hIl2Cpp + CPICGFIMELA_JCIODAGLLGB_OFFSET))(IPMMCGDMODG);
	}
	*/

	::System::Void OPMGKOJBLJO(::Foundation::Unreal::Interval_1<::System::Single> APMLFLKCFFH)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>))((::PBYTE)hIl2Cpp + CPICGFIMELA_OPMGKOJBLJO_OFFSET))(this, APMLFLKCFFH);
	}

	::PipelineCamera::WorldBasicCameraData HEBKJMOCBJH()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CPICGFIMELA_HEBKJMOCBJH_OFFSET))(this);
	}

	::System::Void MMGNJJGEHOD(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CPICGFIMELA_MMGNJJGEHOD_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC);
	}

	::System::Void JGHAGPDLDMF(::System::Single NPHOPECPHLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CPICGFIMELA_JGHAGPDLDMF_OFFSET))(this, NPHOPECPHLF);
	}

	::System::Void FFCIOICFNFN(::System::Single IBCAFNKFIDH, ::System::Single NPHOPECPHLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CPICGFIMELA_FFCIOICFNFN_OFFSET))(this, IBCAFNKFIDH, NPHOPECPHLF);
	}

	static ::System::Boolean DOAHAOMKFLP(::System::Single& MFHFDMCMMON, ::System::Int32& GJLLGMKGIEL)
	{
		return ((::System::Boolean(*)(::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + CPICGFIMELA_DOAHAOMKFLP_OFFSET))(MFHFDMCMMON, GJLLGMKGIEL);
	}

	::UnityEngine::Quaternion COBPIICGJJA()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CPICGFIMELA_COBPIICGJJA_OFFSET))(this);
	}

	::UnityEngine::Quaternion GKPNJPPNBIH()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CPICGFIMELA_GKPNJPPNBIH_OFFSET))(this);
	}

	::System::Void EPDDPFGCCIE(::System::Single DKJACOOKAFE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CPICGFIMELA_EPDDPFGCCIE_OFFSET))(this, DKJACOOKAFE);
	}

	::System::Single INILLLEALMG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CPICGFIMELA_INILLLEALMG_OFFSET))(this);
	}

	::System::Void CDPPOKOGPKB(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC, ::System::Single EBJINDLMDNL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CPICGFIMELA_CDPPOKOGPKB_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC, EBJINDLMDNL);
	}

	::System::Void OEHGDBAHNEL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPICGFIMELA_OEHGDBAHNEL_OFFSET))(this);
	}

	::UnityEngine::Quaternion DBAPBFNLJBO()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CPICGFIMELA_DBAPBFNLJBO_OFFSET))(this);
	}
};
