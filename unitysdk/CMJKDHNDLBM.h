#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOFJAODPMNI.h"

class KNILAOHIIIG;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define CMJKDHNDLBM_DOODNGLPOJK_OFFSET UNITYSDK_OFFSET(0x1A1BC6D0)
#define CMJKDHNDLBM_GKLGMCNKKPD_OFFSET UNITYSDK_OFFSET(0x1A1BC710)
#define CMJKDHNDLBM_HGHINONIJEP_OFFSET UNITYSDK_OFFSET(0x1A1BC870)
#define CMJKDHNDLBM_JAILGLBIMNK_OFFSET UNITYSDK_OFFSET(0x1A1BC690)
#define CMJKDHNDLBM_JNBAGCKGDLD_OFFSET UNITYSDK_OFFSET(0x1A1BC7E0)
#define CMJKDHNDLBM_OJBNKPMPCAD_OFFSET UNITYSDK_OFFSET(0x1A1BC750)
#define CMJKDHNDLBM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BC680)

inline static constexpr unsigned int CMJKDHNDLBM_TypeDefinitionIndex = 55073;

class CMJKDHNDLBM : public ::BOFJAODPMNI
{
public:
	::KNILAOHIIIG* IANGEGHMOOL; // 0x20
	::MoleMole::HollowChessboard::HollowEntity* DDLILFIBPPM; // 0x28

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowEntity* KOOEMKFHBMG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CMJKDHNDLBM__CTOR_OFFSET))(this, KOOEMKFHBMG);
	}

	::System::Boolean JAILGLBIMNK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJKDHNDLBM_JAILGLBIMNK_OFFSET))(this);
	}

	::System::Void DOODNGLPOJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJKDHNDLBM_DOODNGLPOJK_OFFSET))(this);
	}

	::System::Void GKLGMCNKKPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJKDHNDLBM_GKLGMCNKKPD_OFFSET))(this);
	}

	::System::Void OJBNKPMPCAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJKDHNDLBM_OJBNKPMPCAD_OFFSET))(this);
	}

	::System::Void JNBAGCKGDLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJKDHNDLBM_JNBAGCKGDLD_OFFSET))(this);
	}

	::System::Boolean HGHINONIJEP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJKDHNDLBM_HGHINONIJEP_OFFSET))(this);
	}
};
