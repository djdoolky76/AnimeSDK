#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFNDHJCDAOF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/HHIOBIBANNC.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class AdvancedCollisionConfigData; }

#define NFAKNGCNELO_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x12FE3D70)
#define NFAKNGCNELO_EHFPMFGHHLL_OFFSET UNITYSDK_OFFSET(0x12FE2560)
#define NFAKNGCNELO_GADFANBCBAK_OFFSET UNITYSDK_OFFSET(0x12FE2BB0)
#define NFAKNGCNELO_GIAOBHOJCDP_1_OFFSET UNITYSDK_OFFSET(0x12FE37D0)
#define NFAKNGCNELO_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x12FE2CE0)
#define NFAKNGCNELO_HKNFIGBKMGD_OFFSET UNITYSDK_OFFSET(0x12FE2640)
#define NFAKNGCNELO_IGMALPKDKFO_OFFSET UNITYSDK_OFFSET(0x12FE18F0)
#define NFAKNGCNELO_JGFHCIKPJOD_OFFSET UNITYSDK_OFFSET(0x12FE2650)
#define NFAKNGCNELO_PJNCIAADOJN_OFFSET UNITYSDK_OFFSET(0x12FE1C20)
#define NFAKNGCNELO__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE18E0)

inline static constexpr unsigned int NFAKNGCNELO_TypeDefinitionIndex = 74384;

class NFAKNGCNELO : public ::System::Object
{
public:
	// static const ::System::Single LPKMDGPOEFJ; // 0x0
	::UnityEngine::RaycastHit GMLNABIECGK; // 0x10
	::System::Single DEBNBHFJBKF; // 0x44
	::System::Single FJOGKCAFMKK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAKNGCNELO__CTOR_OFFSET))(this);
	}

	static ::System::Single IGMALPKDKFO(::UnityEngine::Vector3& FCNPOKNKMOD, ::UnityEngine::Vector3& LFGKLEPKMGJ, ::System::Single PGKMDKFHFMH, ::MoleMole::AdvancedCollisionConfigData*& DFMKILICPFB, ::UnityEngine::RaycastHit& FEFNENBAMKL)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::MoleMole::AdvancedCollisionConfigData*&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + NFAKNGCNELO_IGMALPKDKFO_OFFSET))(FCNPOKNKMOD, LFGKLEPKMGJ, PGKMDKFHFMH, DFMKILICPFB, FEFNENBAMKL);
	}

	static ::System::Single PJNCIAADOJN(::UnityEngine::Vector3& FCNPOKNKMOD, ::UnityEngine::Vector3& LFGKLEPKMGJ, ::UnityEngine::Vector3& KPMNICHNBCL, ::System::Single PGKMDKFHFMH, ::System::Single NPHOPECPHLF, ::System::Single HKHIMAKFCGD, ::MoleMole::AdvancedCollisionConfigData*& DFMKILICPFB, ::NFNDHJCDAOF IIPPKCOCCJE)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::AdvancedCollisionConfigData*&, ::NFNDHJCDAOF))((::PBYTE)hIl2Cpp + NFAKNGCNELO_PJNCIAADOJN_OFFSET))(FCNPOKNKMOD, LFGKLEPKMGJ, KPMNICHNBCL, PGKMDKFHFMH, NPHOPECPHLF, HKHIMAKFCGD, DFMKILICPFB, IIPPKCOCCJE);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> HKNFIGBKMGD(::System::Single EGEGIMGMJHN)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::Single))((::PBYTE)hIl2Cpp + NFAKNGCNELO_HKNFIGBKMGD_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void JGFHCIKPJOD(::System::Single ODMACPGKDEA, ::UnityEngine::RaycastHit& MHLCPGEDAAA, ::System::Single& HBEKKMCBGBK, ::System::Single& HNFOEILIOJP, ::UnityEngine::RaycastHit& AKCKHOCMJDK, ::System::Single PMNLNNGEIFM, ::MoleMole::AdvancedCollisionConfigData*& DFMKILICPFB)
	{
		return ((::System::Void(*)(::System::Single, ::UnityEngine::RaycastHit&, ::System::Single&, ::System::Single&, ::UnityEngine::RaycastHit&, ::System::Single, ::MoleMole::AdvancedCollisionConfigData*&))((::PBYTE)hIl2Cpp + NFAKNGCNELO_JGFHCIKPJOD_OFFSET))(ODMACPGKDEA, MHLCPGEDAAA, HBEKKMCBGBK, HNFOEILIOJP, AKCKHOCMJDK, PMNLNNGEIFM, DFMKILICPFB);
	}

	static ::System::Boolean GADFANBCBAK()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NFAKNGCNELO_GADFANBCBAK_OFFSET))();
	}

	static ::PipelineCamera::WorldBasicCameraData GIAOBHOJCDP(::PipelineCamera::WorldBasicCameraData GPBKDGGEBCF, ::System::Single DLHEEANIMJC, ::System::Single PMNLNNGEIFM, ::HHIOBIBANNC& JKBLDFBGBPK, ::MoleMole::AdvancedCollisionConfigData* DFMKILICPFB)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraData, ::System::Single, ::System::Single, ::HHIOBIBANNC&, ::MoleMole::AdvancedCollisionConfigData*))((::PBYTE)hIl2Cpp + NFAKNGCNELO_GIAOBHOJCDP_OFFSET))(GPBKDGGEBCF, DLHEEANIMJC, PMNLNNGEIFM, JKBLDFBGBPK, DFMKILICPFB);
	}

	static ::System::Single EHFPMFGHHLL(::System::Single ODCODCKANIK, ::System::Single FACKFLBBOON, ::NFNDHJCDAOF GEJCKFFFKCL)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::NFNDHJCDAOF))((::PBYTE)hIl2Cpp + NFAKNGCNELO_EHFPMFGHHLL_OFFSET))(ODCODCKANIK, FACKFLBBOON, GEJCKFFFKCL);
	}

	::System::Void GIAOBHOJCDP_1(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + NFAKNGCNELO_GIAOBHOJCDP_1_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::MoleMole::AdvancedCollisionConfigData* COPIDBEMEIE()
	{
		return ((::MoleMole::AdvancedCollisionConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAKNGCNELO_COPIDBEMEIE_OFFSET))(this);
	}
};
