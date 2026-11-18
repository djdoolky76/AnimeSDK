#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class OAMAMDGEJKH;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CAPAFILOMGC_BJJHIFMMKGA_OFFSET UNITYSDK_OFFSET(0x1152CB30)
#define CAPAFILOMGC_CPLHNIEEPNE_OFFSET UNITYSDK_OFFSET(0x1152CBA0)
#define CAPAFILOMGC_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x1152CA20)
#define CAPAFILOMGC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1152C880)
#define CAPAFILOMGC_GOEMNHLOBNG_OFFSET UNITYSDK_OFFSET(0x1152CB20)
#define CAPAFILOMGC_ICMKKAHCIGE_OFFSET UNITYSDK_OFFSET(0x1152CB00)
#define CAPAFILOMGC_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1152C990)
#define CAPAFILOMGC_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1152CA70)
#define CAPAFILOMGC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1152C7D0)
#define CAPAFILOMGC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1152C8D0)
#define CAPAFILOMGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1152C950)

inline static constexpr unsigned int CAPAFILOMGC_TypeDefinitionIndex = 63977;

class CAPAFILOMGC : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Single DBMMFLENMPI; // 0x0
	// static const ::System::Single CMDAJOMPAFA; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0xC; // 0x0
	::System::Action_1<::MGHNAPKHBOG>* KGCHLKBIMEK; // 0x48
	::MGHNAPKHBOG LGJFEHOAJGB; // 0x50
	::MGHNAPKHBOG IAJOGHFODCF; // 0x68
	::System::Action_2<::CAPAFILOMGC*, ::MGHNAPKHBOG>* FJIECBNJHOE; // 0x80
	::System::Single PPDGALLHECJ; // 0x88
	::System::Single GBCANFAHMEG; // 0x8C
	::System::Single OIHEDCGHKIP; // 0x90

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAPAFILOMGC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPAFILOMGC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPAFILOMGC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPAFILOMGC_GETCLASSID_OFFSET))(this);
	}

	static ::CAPAFILOMGC* JFDOOELFAOA()
	{
		return ((::CAPAFILOMGC*(*)())((::PBYTE)hIl2Cpp + CAPAFILOMGC_JFDOOELFAOA_OFFSET))();
	}

	::System::Void GALGFCPKMGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPAFILOMGC_GALGFCPKMGC_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPAFILOMGC_MEFBHFEOKGH_OFFSET))(this);
	}

	::MGHNAPKHBOG ICMKKAHCIGE()
	{
		return ((::MGHNAPKHBOG(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPAFILOMGC_ICMKKAHCIGE_OFFSET))(this);
	}

	::OAMAMDGEJKH* GOEMNHLOBNG()
	{
		return ((::OAMAMDGEJKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPAFILOMGC_GOEMNHLOBNG_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* BJJHIFMMKGA()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPAFILOMGC_BJJHIFMMKGA_OFFSET))(this);
	}

	::System::Void CPLHNIEEPNE(::MGHNAPKHBOG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + CAPAFILOMGC_CPLHNIEEPNE_OFFSET))(this, EGEGIMGMJHN);
	}
};
