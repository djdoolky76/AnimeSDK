#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CDEHPHLCMPC_ECNOGIKBCGK.h"
#include "unitysdk/CDEHPHLCMPC_MCIJJMNBEJA.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CDEHPHLCMPC_FGNDCHLPINI_BJMEFCEKGGA_OFFSET UNITYSDK_OFFSET(0x73BAE0)
#define CDEHPHLCMPC_FGNDCHLPINI_CCMMGLBKFJC_OFFSET UNITYSDK_OFFSET(0x73BA90)
#define CDEHPHLCMPC_FGNDCHLPINI_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x73BA50)
#define CDEHPHLCMPC_FGNDCHLPINI_FEANHJEFINK_OFFSET UNITYSDK_OFFSET(0x73BBD0)
#define CDEHPHLCMPC_FGNDCHLPINI_FMFAHGBJNOB_OFFSET UNITYSDK_OFFSET(0x73BB20)
#define CDEHPHLCMPC_FGNDCHLPINI_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x73B9F0)
#define CDEHPHLCMPC_FGNDCHLPINI_JHLIHGJNDNP_OFFSET UNITYSDK_OFFSET(0x73BAA0)
#define CDEHPHLCMPC_FGNDCHLPINI_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x73BB60)
#define CDEHPHLCMPC_FGNDCHLPINI_KKGOKILAMLG_OFFSET UNITYSDK_OFFSET(0x73B9A0)
#define CDEHPHLCMPC_FGNDCHLPINI_KMGCIMGBLPB_OFFSET UNITYSDK_OFFSET(0x73BA50)
#define CDEHPHLCMPC_FGNDCHLPINI_NBILPAPDMNC_OFFSET UNITYSDK_OFFSET(0x73BA00)
#define CDEHPHLCMPC_FGNDCHLPINI_NJAEMHGPDHH_OFFSET UNITYSDK_OFFSET(0x14789390)
#define CDEHPHLCMPC_FGNDCHLPINI__CTOR_OFFSET UNITYSDK_OFFSET(0x369C90)

inline static constexpr unsigned int CDEHPHLCMPC_FGNDCHLPINI_TypeDefinitionIndex = 68045;

struct alignas(8) CDEHPHLCMPC_FGNDCHLPINI
{
	::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FTransform3D> LACGFCIBDFD; // 0x10

	::System::Void _ctor(::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FTransform3D> ILIPMAMEFLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FTransform3D>))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_FGNDCHLPINI__CTOR_OFFSET))(this, ILIPMAMEFLF);
	}

	::UnityEngine::Vector3 KKGOKILAMLG(::UnityEngine::Vector3 AEBAABHINNE, ::UnityEngine::Vector3 PHHJCIHKIKH)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_FGNDCHLPINI_KKGOKILAMLG_OFFSET))(this, AEBAABHINNE, PHHJCIHKIKH);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_FGNDCHLPINI_JDAPDDEOCEA_OFFSET))(this);
	}

	::UnityEngine::Vector3 NBILPAPDMNC(::CDEHPHLCMPC_ECNOGIKBCGK KMKBJKOEBMF, ::CDEHPHLCMPC_MCIJJMNBEJA AGPBNMGCEAM, ::UnityEngine::Vector3 OLCMABPJHIE)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::CDEHPHLCMPC_ECNOGIKBCGK, ::CDEHPHLCMPC_MCIJJMNBEJA, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_FGNDCHLPINI_NBILPAPDMNC_OFFSET))(this, KMKBJKOEBMF, AGPBNMGCEAM, OLCMABPJHIE);
	}

	::Foundation::Unreal::FTransform3D& CJBFCLMFDOM()
	{
		return ((::Foundation::Unreal::FTransform3D&(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_FGNDCHLPINI_CJBFCLMFDOM_OFFSET))(this);
	}

	::CDEHPHLCMPC_ECNOGIKBCGK CCMMGLBKFJC(::System::Single KJJLLPNELLG, ::System::Single LMCKAPHANAL, ::System::Single NEBGKOLCBIE)
	{
		return ((::CDEHPHLCMPC_ECNOGIKBCGK(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_FGNDCHLPINI_CCMMGLBKFJC_OFFSET))(this, KJJLLPNELLG, LMCKAPHANAL, NEBGKOLCBIE);
	}

	::Foundation::Unreal::FTransform3D& JHLIHGJNDNP()
	{
		return ((::Foundation::Unreal::FTransform3D&(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_FGNDCHLPINI_JHLIHGJNDNP_OFFSET))(this);
	}

	static ::System::Void NJAEMHGPDHH(::UnityEngine::Vector3 GADABMPMNEM, ::UnityEngine::Vector3 CONEHLCEGMA, ::UnityEngine::Vector3& JNFAOKGOJEO, ::UnityEngine::Quaternion& POPKFNEDMPB)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_FGNDCHLPINI_NJAEMHGPDHH_OFFSET))(GADABMPMNEM, CONEHLCEGMA, JNFAOKGOJEO, POPKFNEDMPB);
	}

	::Foundation::Unreal::FTransform3D& BJMEFCEKGGA()
	{
		return ((::Foundation::Unreal::FTransform3D&(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_FGNDCHLPINI_BJMEFCEKGGA_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform3D& KMGCIMGBLPB()
	{
		return ((::Foundation::Unreal::FTransform3D&(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_FGNDCHLPINI_KMGCIMGBLPB_OFFSET))(this);
	}

	::CDEHPHLCMPC_MCIJJMNBEJA FMFAHGBJNOB(::Foundation::Unreal::FTransform3D OKFPEIKIIHA)
	{
		return ((::CDEHPHLCMPC_MCIJJMNBEJA(*)(::PVOID, ::Foundation::Unreal::FTransform3D))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_FGNDCHLPINI_FMFAHGBJNOB_OFFSET))(this, OKFPEIKIIHA);
	}

	::System::Void JLIMOLHLFAK(::UnityEngine::Vector3 KABGMDHCKKK, ::UnityEngine::Vector3 BKIEMIHIFNP, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::Unreal::FTransform3D> OABLKFIBHFP, ::System::Single IECOJPMPJMP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::Unreal::FTransform3D>, ::System::Single))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_FGNDCHLPINI_JLIMOLHLFAK_OFFSET))(this, KABGMDHCKKK, BKIEMIHIFNP, OABLKFIBHFP, IECOJPMPJMP);
	}

	::CDEHPHLCMPC_ECNOGIKBCGK FEANHJEFINK()
	{
		return ((::CDEHPHLCMPC_ECNOGIKBCGK(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEHPHLCMPC_FGNDCHLPINI_FEANHJEFINK_OFFSET))(this);
	}
};
