#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class Mono3DModelRotateHandler; }

#define JOBKAEAGDPD_ABS_OFFSET UNITYSDK_OFFSET(0x13AE34C0)
#define JOBKAEAGDPD_ADD_1_OFFSET UNITYSDK_OFFSET(0x13AE3170)
#define JOBKAEAGDPD_ADD_OFFSET UNITYSDK_OFFSET(0x13AE30B0)
#define JOBKAEAGDPD_DELTA_OFFSET UNITYSDK_OFFSET(0x13AE2FF0)
#define JOBKAEAGDPD_DIV_OFFSET UNITYSDK_OFFSET(0x13AE3390)
#define JOBKAEAGDPD_GONGHOPLHBD_OFFSET UNITYSDK_OFFSET(0x13AE3900)
#define JOBKAEAGDPD_ISEQUALTO_OFFSET UNITYSDK_OFFSET(0x13AE3630)
#define JOBKAEAGDPD_ISGREATERTHAN_OFFSET UNITYSDK_OFFSET(0x13AE37D0)
#define JOBKAEAGDPD_LERP_OFFSET UNITYSDK_OFFSET(0x13AE36D0)
#define JOBKAEAGDPD_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x13AE35B0)
#define JOBKAEAGDPD_MUL_1_OFFSET UNITYSDK_OFFSET(0x13AE32E0)
#define JOBKAEAGDPD_MUL_OFFSET UNITYSDK_OFFSET(0x13AE3220)
#define JOBKAEAGDPD_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13AE2EB0)
#define JOBKAEAGDPD_SIGN_OFFSET UNITYSDK_OFFSET(0x13AE3840)
#define JOBKAEAGDPD_STOPTHESHOLD_OFFSET UNITYSDK_OFFSET(0x13AE3560)
#define JOBKAEAGDPD_ZERO_OFFSET UNITYSDK_OFFSET(0x13AE3440)
#define JOBKAEAGDPD__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE2E40)

inline static constexpr unsigned int JOBKAEAGDPD_TypeDefinitionIndex = 45506;

class JOBKAEAGDPD
{
public:
	::MoleMole::Mono3DModelRotateHandler* KIAFLECEKIB; // 0x60

	::System::Void _ctor(::MoleMole::Mono3DModelRotateHandler* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Mono3DModelRotateHandler*))((::PBYTE)hIl2Cpp + JOBKAEAGDPD__CTOR_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_ONAWAKE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Delta(::UnityEngine::Vector3 KHGFAKJKDGG, ::UnityEngine::Vector3 LIBPKNHDIGP)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_DELTA_OFFSET))(this, KHGFAKJKDGG, LIBPKNHDIGP);
	}

	::UnityEngine::Vector3 Add(::UnityEngine::Vector3 KHGFAKJKDGG, ::UnityEngine::Vector3 LIBPKNHDIGP)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_ADD_OFFSET))(this, KHGFAKJKDGG, LIBPKNHDIGP);
	}

	::UnityEngine::Vector3 Add_1(::UnityEngine::Vector3 KHGFAKJKDGG, ::System::Single LIBPKNHDIGP)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_ADD_1_OFFSET))(this, KHGFAKJKDGG, LIBPKNHDIGP);
	}

	::UnityEngine::Vector3 Mul(::UnityEngine::Vector3 KHGFAKJKDGG, ::UnityEngine::Vector3 LIBPKNHDIGP)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_MUL_OFFSET))(this, KHGFAKJKDGG, LIBPKNHDIGP);
	}

	::UnityEngine::Vector3 Mul_1(::UnityEngine::Vector3 KHGFAKJKDGG, ::System::Single LIBPKNHDIGP)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_MUL_1_OFFSET))(this, KHGFAKJKDGG, LIBPKNHDIGP);
	}

	::UnityEngine::Vector3 Div(::UnityEngine::Vector3 KHGFAKJKDGG, ::System::Single LIBPKNHDIGP)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_DIV_OFFSET))(this, KHGFAKJKDGG, LIBPKNHDIGP);
	}

	::UnityEngine::Vector3 Zero()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_ZERO_OFFSET))(this);
	}

	::UnityEngine::Vector3 Abs(::UnityEngine::Vector3 KHGFAKJKDGG)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_ABS_OFFSET))(this, KHGFAKJKDGG);
	}

	::System::Single StopTheshold()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_STOPTHESHOLD_OFFSET))(this);
	}

	::System::Single Magnitude(::UnityEngine::Vector3 KHGFAKJKDGG)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_MAGNITUDE_OFFSET))(this, KHGFAKJKDGG);
	}

	::System::Boolean IsEqualTo(::UnityEngine::Vector3 KHGFAKJKDGG, ::UnityEngine::Vector3 LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_ISEQUALTO_OFFSET))(this, KHGFAKJKDGG, LIBPKNHDIGP);
	}

	::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3 LLPJMEINPKP, ::UnityEngine::Vector3 HODAIDNDKHD, ::System::Single EJAOAGGJHHA)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_LERP_OFFSET))(this, LLPJMEINPKP, HODAIDNDKHD, EJAOAGGJHHA);
	}

	::System::Boolean IsGreaterThan(::UnityEngine::Vector3 LLPJMEINPKP, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_ISGREATERTHAN_OFFSET))(this, LLPJMEINPKP, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 Sign(::UnityEngine::Vector3 KHGFAKJKDGG)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_SIGN_OFFSET))(this, KHGFAKJKDGG);
	}

	::System::Void GONGHOPLHBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBKAEAGDPD_GONGHOPLHBD_OFFSET))(this);
	}
};
