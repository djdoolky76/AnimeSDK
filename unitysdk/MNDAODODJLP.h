#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLLLACFEBJF.h"

class ENGKPGFGGLM;
namespace MoleMole::Config { class HackObjectTrait; }

#define MNDAODODJLP_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1077D200)
#define MNDAODODJLP_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0x1077D210)
#define MNDAODODJLP_GHCNMOALKMM_OFFSET UNITYSDK_OFFSET(0x1077D220)
#define MNDAODODJLP_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1077D120)
#define MNDAODODJLP_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1077D170)
#define MNDAODODJLP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1077D110)
#define MNDAODODJLP__CTOR_OFFSET UNITYSDK_OFFSET(0x1077D1C0)

inline static constexpr unsigned int MNDAODODJLP_TypeDefinitionIndex = 49798;

class MNDAODODJLP
{
public:
	::MoleMole::Config::HackObjectTrait* OFJDNKBIALO; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNDAODODJLP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDAODODJLP__CTOR_OFFSET))(this);
	}

	::System::Void OnEvent(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MNDAODODJLP_ONEVENT_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDAODODJLP_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDAODODJLP_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void BPKNEKOKBCK(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MNDAODODJLP_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHCNMOALKMM(::DLLLACFEBJF JPJBIBPBODE)
	{
		return ((::System::Void(*)(::PVOID, ::DLLLACFEBJF))((::PBYTE)hIl2Cpp + MNDAODODJLP_GHCNMOALKMM_OFFSET))(this, JPJBIBPBODE);
	}
};
