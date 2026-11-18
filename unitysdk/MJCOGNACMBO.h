#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOFJAODPMNI.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class BCHOANCLADD;
namespace System { class Action; }
namespace System { class String; }

#define MJCOGNACMBO_DOODNGLPOJK_OFFSET UNITYSDK_OFFSET(0x11A050A0)
#define MJCOGNACMBO_EADHAPNHMCP_OFFSET UNITYSDK_OFFSET(0x11A052B0)
#define MJCOGNACMBO_ENGMJFJMDHP_OFFSET UNITYSDK_OFFSET(0x11A05390)
#define MJCOGNACMBO_FCCACCCIIKP_OFFSET UNITYSDK_OFFSET(0x11A05290)
#define MJCOGNACMBO_GKLGMCNKKPD_OFFSET UNITYSDK_OFFSET(0x11A050E0)
#define MJCOGNACMBO_HGHINONIJEP_OFFSET UNITYSDK_OFFSET(0x11A05200)
#define MJCOGNACMBO_IHIIIDJNBNP_OFFSET UNITYSDK_OFFSET(0x11A052A0)
#define MJCOGNACMBO_JAILGLBIMNK_OFFSET UNITYSDK_OFFSET(0x11A05120)
#define MJCOGNACMBO_JNBAGCKGDLD_OFFSET UNITYSDK_OFFSET(0x11A053A0)
#define MJCOGNACMBO_NAJLMJPPEFD_OFFSET UNITYSDK_OFFSET(0x11A05430)
#define MJCOGNACMBO_OJBNKPMPCAD_OFFSET UNITYSDK_OFFSET(0x11A05170)
#define MJCOGNACMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x11A05160)

inline static constexpr unsigned int MJCOGNACMBO_TypeDefinitionIndex = 68699;

class MJCOGNACMBO : public ::BOFJAODPMNI
{
public:
	::System::String* _MJEBCHGABPN_k__BackingField; // 0x20
	::System::Action* KMKLPADFCLD; // 0x28
	::BCHOANCLADD* _NCNCCOKEPGO_k__BackingField; // 0x30
	::System::Int32 GPNPNPMOEAH; // 0x38
	::MoleMole::HollowChessboard::HollowChessboardUID GNHEHOMMHPB; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCOGNACMBO__CTOR_OFFSET))(this);
	}

	::System::Void DOODNGLPOJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCOGNACMBO_DOODNGLPOJK_OFFSET))(this);
	}

	::System::Void GKLGMCNKKPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCOGNACMBO_GKLGMCNKKPD_OFFSET))(this);
	}

	::System::Boolean JAILGLBIMNK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCOGNACMBO_JAILGLBIMNK_OFFSET))(this);
	}

	::System::Void OJBNKPMPCAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCOGNACMBO_OJBNKPMPCAD_OFFSET))(this);
	}

	::System::Boolean HGHINONIJEP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCOGNACMBO_HGHINONIJEP_OFFSET))(this);
	}

	::BCHOANCLADD* FCCACCCIIKP()
	{
		return ((::BCHOANCLADD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCOGNACMBO_FCCACCCIIKP_OFFSET))(this);
	}

	::System::Void IHIIIDJNBNP(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MJCOGNACMBO_IHIIIDJNBNP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean EADHAPNHMCP(::MoleMole::HollowChessboard::RenderDataHandle IAFHBCHLBME)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + MJCOGNACMBO_EADHAPNHMCP_OFFSET))(this, IAFHBCHLBME);
	}

	::System::Void ENGMJFJMDHP(::BCHOANCLADD* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BCHOANCLADD*))((::PBYTE)hIl2Cpp + MJCOGNACMBO_ENGMJFJMDHP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JNBAGCKGDLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCOGNACMBO_JNBAGCKGDLD_OFFSET))(this);
	}

	::System::String* NAJLMJPPEFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCOGNACMBO_NAJLMJPPEFD_OFFSET))(this);
	}
};
