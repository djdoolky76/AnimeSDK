#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLLLACFEBJF.h"

class ENGKPGFGGLM;
namespace MoleMole::Config { class EtherEyesObjectTrait; }

#define GKMNFLHJMIG_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x15F26BB0)
#define GKMNFLHJMIG_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0x15F26BA0)
#define GKMNFLHJMIG_GHCNMOALKMM_OFFSET UNITYSDK_OFFSET(0x15F26AA0)
#define GKMNFLHJMIG_ONEVENT_OFFSET UNITYSDK_OFFSET(0x15F26590)
#define GKMNFLHJMIG_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x15F26B20)
#define GKMNFLHJMIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F264A0)
#define GKMNFLHJMIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15F26B60)

inline static constexpr unsigned int GKMNFLHJMIG_TypeDefinitionIndex = 44598;

class GKMNFLHJMIG
{
public:
	::MoleMole::Config::EtherEyesObjectTrait* GBKEFJKOOGB; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKMNFLHJMIG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMNFLHJMIG__CTOR_OFFSET))(this);
	}

	::System::Void OnEvent(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GKMNFLHJMIG_ONEVENT_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMNFLHJMIG_ONRECYCLE_OFFSET))(this);
	}

	::System::Void GHCNMOALKMM(::DLLLACFEBJF JPJBIBPBODE)
	{
		return ((::System::Void(*)(::PVOID, ::DLLLACFEBJF))((::PBYTE)hIl2Cpp + GKMNFLHJMIG_GHCNMOALKMM_OFFSET))(this, JPJBIBPBODE);
	}

	::System::Void BPKNEKOKBCK(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GKMNFLHJMIG_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMNFLHJMIG_ANEOCOIFDDJ_OFFSET))(this);
	}
};
