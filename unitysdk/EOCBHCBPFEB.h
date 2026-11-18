#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FRotator.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class TelescopeCameraConfig; }

#define EOCBHCBPFEB_BJBDIDPDKBC_OFFSET UNITYSDK_OFFSET(0x77B660)
#define EOCBHCBPFEB_COBPIICGJJA_OFFSET UNITYSDK_OFFSET(0x77BAB0)
#define EOCBHCBPFEB_FFCIOICFNFN_OFFSET UNITYSDK_OFFSET(0x77BCD0)
#define EOCBHCBPFEB_HAHNMAPNHFM_OFFSET UNITYSDK_OFFSET(0x5C9C30)
#define EOCBHCBPFEB_JGHAGPDLDMF_OFFSET UNITYSDK_OFFSET(0x77BBB0)
#define EOCBHCBPFEB_MMGNJJGEHOD_OFFSET UNITYSDK_OFFSET(0x77B7A0)
#define EOCBHCBPFEB_NIMAEICAPLN_OFFSET UNITYSDK_OFFSET(0x36C210)
#define EOCBHCBPFEB__CTOR_OFFSET UNITYSDK_OFFSET(0x77B620)

inline static constexpr unsigned int EOCBHCBPFEB_TypeDefinitionIndex = 51519;

struct alignas(8) EOCBHCBPFEB
{
	::Foundation::Unreal::FTransform KJHKMHKOGOL; // 0x10
	::Foundation::Unreal::FRotator CEGFJOKAPBD; // 0x30
	::System::Byte _padding0[0x4];
	::Foundation::Clamped_1<::System::Single> GOBHMPCBMFO; // 0x40
	::System::Byte _padding1[0x10];
	::System::Single ABJCPIJKJBL; // 0x58
	::Foundation::Unreal::Interval_1<::System::Single> DBJKBJEJEED; // 0x5C
	::System::Byte _padding2[0x8];
	::Foundation::Unreal::Interval_1<::System::Single> APMLFLKCFFH; // 0x6C
	::System::Byte _padding3[0x8];
	::Foundation::Unreal::Interval_1<::System::Single> JPNPGIDDIKC; // 0x7C

	::System::Void _ctor(::UnityEngine::Vector3 LHDHLAEPFBH, ::UnityEngine::Quaternion BFBELMDIAHI, ::MoleMole::Cameras::TelescopeCameraConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::Cameras::TelescopeCameraConfig*))((::PBYTE)hIl2Cpp + EOCBHCBPFEB__CTOR_OFFSET))(this, LHDHLAEPFBH, BFBELMDIAHI, DFMKILICPFB);
	}

	::System::Void BJBDIDPDKBC(::System::Single DKJACOOKAFE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EOCBHCBPFEB_BJBDIDPDKBC_OFFSET))(this, DKJACOOKAFE);
	}

	::System::Void MMGNJJGEHOD(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC, ::System::Single EBJINDLMDNL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EOCBHCBPFEB_MMGNJJGEHOD_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC, EBJINDLMDNL);
	}

	::UnityEngine::Vector3 NIMAEICAPLN()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCBHCBPFEB_NIMAEICAPLN_OFFSET))(this);
	}

	::UnityEngine::Quaternion COBPIICGJJA()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCBHCBPFEB_COBPIICGJJA_OFFSET))(this);
	}

	::System::Void JGHAGPDLDMF(::System::Single NPHOPECPHLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EOCBHCBPFEB_JGHAGPDLDMF_OFFSET))(this, NPHOPECPHLF);
	}

	::System::Void FFCIOICFNFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCBHCBPFEB_FFCIOICFNFN_OFFSET))(this);
	}

	::System::Single HAHNMAPNHFM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCBHCBPFEB_HAHNMAPNHFM_OFFSET))(this);
	}
};
