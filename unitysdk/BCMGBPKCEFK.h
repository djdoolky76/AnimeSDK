#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCKJMKBPMCC.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define BCMGBPKCEFK_FLDGPCNGFID_OFFSET UNITYSDK_OFFSET(0x14C2C470)
#define BCMGBPKCEFK_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x14C2BB40)
#define BCMGBPKCEFK_JNMNBGDANKE_OFFSET UNITYSDK_OFFSET(0x14C2C250)
#define BCMGBPKCEFK_NNDDHMDOJPE_OFFSET UNITYSDK_OFFSET(0x14C2BDB0)
#define BCMGBPKCEFK_NOHPDKNPCGH_OFFSET UNITYSDK_OFFSET(0x14C2BC20)
#define BCMGBPKCEFK_ODBGEFENGBI_OFFSET UNITYSDK_OFFSET(0x14C2BDA0)
#define BCMGBPKCEFK_PALGNJKOEAM_OFFSET UNITYSDK_OFFSET(0x14C2BD20)
#define BCMGBPKCEFK__CTOR_OFFSET UNITYSDK_OFFSET(0x14C2BD90)

inline static constexpr unsigned int BCMGBPKCEFK_TypeDefinitionIndex = 69850;

class BCMGBPKCEFK : public ::MCKJMKBPMCC
{
public:
	// static const ::System::Single BMDJMJDGJAL; // 0x0
	::UnityEngine::Vector3 _KLJEPFCDMIL_k__BackingField; // 0x18

	::System::Void _ctor(::MoleMole::CameraModuleAvatarDataConfigExt* DFMKILICPFB, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + BCMGBPKCEFK__CTOR_OFFSET))(this, DFMKILICPFB, LJBPECKCCEA);
	}

	::System::Boolean GIAOBHOJCDP(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM, ::System::Boolean ABMOAEMEEGE)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BCMGBPKCEFK_GIAOBHOJCDP_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM, ABMOAEMEEGE);
	}

	::System::Void ODBGEFENGBI(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BCMGBPKCEFK_ODBGEFENGBI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PALGNJKOEAM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMGBPKCEFK_PALGNJKOEAM_OFFSET))(this);
	}

	::UnityEngine::Vector3 NNDDHMDOJPE(::UnityEngine::Vector3 PMMHPDOBJAC, ::UnityEngine::Vector3 HLJCPOAPNDM, ::System::Int32 FBNGKPGLADH, ::UnityEngine::RaycastHit& FEFNENBAMKL)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + BCMGBPKCEFK_NNDDHMDOJPE_OFFSET))(this, PMMHPDOBJAC, HLJCPOAPNDM, FBNGKPGLADH, FEFNENBAMKL);
	}

	::UnityEngine::Vector3 NOHPDKNPCGH(::Cinemachine::CameraState& JKBLDFBGBPK)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + BCMGBPKCEFK_NOHPDKNPCGH_OFFSET))(this, JKBLDFBGBPK);
	}

	::UnityEngine::Vector3 JNMNBGDANKE(::Cinemachine::CameraState& JKBLDFBGBPK)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + BCMGBPKCEFK_JNMNBGDANKE_OFFSET))(this, JKBLDFBGBPK);
	}

	::UnityEngine::Vector3 FLDGPCNGFID()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMGBPKCEFK_FLDGPCNGFID_OFFSET))(this);
	}
};
